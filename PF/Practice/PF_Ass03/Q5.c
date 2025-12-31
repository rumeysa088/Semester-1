#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

#define INITIAL_CAPACITY 5

// Function to handle errors with memory allocation
void handleMemoryError() {
    perror("Memory allocation failed");
    exit(1);
}
// Function to initialize the editor's buffer
void initEditor(char ***lines, int *capacity, int *size) {    //triple star lines has been passed bcuz if we pass **lines it wd only allow us to modify its own elements meaning the individual pointers that point to strings BUT wont let you edit the strings
    *capacity = INITIAL_CAPACITY;  //Number of available slots in the array.
    *size = 0;                       //The current number of lines in the editor.
    *lines = (char **)malloc((*capacity)*sizeof(char *)); //same as int*ptr;  ptr=(int*)malloc.. we go one level back
    if (*lines == NULL) {
        handleMemoryError();
    }
}

// Function to resize the array when needed
void resizeBuffer(char ***lines, int *capacity, int new_capacity) {
    char** temp =realloc(*lines,new_capacity*sizeof(char *)); // **char used cz we resize actual parent array
    if (temp == NULL) {
       handleMemoryError();
    }
    *lines = temp;
    *capacity = new_capacity;
}

// Function to insert a line at a given index
void insertLine(char ***lines, int *size, int *capacity, int index, const char *text) {
    // Resize the array of pointers if there is no more space
    if (*size >= *capacity) {
        resizeBuffer(lines, capacity, *capacity * 2); // Double capacity
    }

    // Shift lines to make space for the new line
    for (int i = *size; i > index; i--) {
        (*lines)[i] = (*lines)[i - 1];
    }
    //-----BEFORE SHIFTING
    //  lines[0] -> "First line"
    // lines[1] -> "Second line"
    // lines[2] -> "Third line"
    //insert new line at 1st index 
    //------AFTER SHIFTING
    //lines[0] -> "First line"
    // lines[1] -> "Second line" 
    // lines[2] -> "Second line" 
    // lines[3] -> "Third line"
    // Allocate memory for the new line which is dynamically sized based on input length and copy the text into it ,
  
    (*lines)[index] = (char *)malloc(strlen(text) + 1);    //weve used char* bcuz we need to allocate memory for string not for pointer
    if ((*lines)[index] == NULL) {
        handleMemoryError();
    }
    strcpy((*lines)[index], text);

    (*size)++;
}

// Function to delete a line at a given index
void deleteLine(char ***lines, int *size,int *capacity, int index) {
    free((*lines)[index]); // Free the memory for the deleted line

    // Shift the lines to fill the gap
    for (int i = index; i < *size - 1; i++) {
        (*lines)[i] = (*lines)[i + 1];
    }

    (*size)--;

    // Compact the array if too much unused space
    if (*size<(*capacity)/ 2) {
        resizeBuffer(lines, capacity, (*capacity) / 2);
    }
}

// Function to print all lines in the editor
void printAllLines(char **lines, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d: %s\n", i + 1, lines[i]);
    }
}

// Function to free all allocated memory for the lines
void freeAll(char **lines, int size) {
    for (int i = 0; i < size; i++) {
        free(lines[i]);       //free the inners P's
    }
    free(lines);  //free the parent ptr
}

// Function to shrink the buffer to fit exactly the number of lines
void shrinkToFit(char ***lines, int *capacity, int size) {
    if (*capacity > size) {
        resizeBuffer(lines, capacity, size);
    }
}

// Function to save all lines to a file
void saveToFile(char **lines, int size, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%s\n", lines[i]);
    }

    fclose(file);
}

// Function to load all lines from a file
void loadFromFile(char ***lines, int *capacity, int *size, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file)) {
        // Remove newline character at the end of the string if present
        buffer[strcspn(buffer, "\n")] = '\0';

        insertLine(lines, size, capacity, *size, buffer);
    }

    fclose(file);
}

int main() {
    char **lines;           //its an array of pointers where each member pointer points to a specific string OR a 2d pointer
    int capacity, size;
     char str[1000];
    initEditor(&lines, &capacity, &size);

    printf("Enter string: ");
    scanf(" %[^\n]",str);
    insertLine(&lines, &size, &capacity, 0, str); 
    printf("Enter string: ");
    scanf(" %[^\n]",str);
    insertLine(&lines, &size, &capacity, 1, str);
    printf("Enter string: ");
    scanf(" %[^\n]",str);
    insertLine(&lines, &size, &capacity, 2, str);

    printf("Before deletion:\n");
    printAllLines(lines, size);

    deleteLine(&lines, &size,&capacity, 1);  // Delete second line

    printf("\nAfter deletion:\n");
    printAllLines(lines, size);

    // Shrink to fit
    shrinkToFit(&lines, &capacity, size);

    printf("\nAfter shrinking:\n");
    printAllLines(lines, size);

    // Save to file
    saveToFile(lines, size, "lines.txt");

    // Load from file
    freeAll(lines, size);
    initEditor(&lines, &capacity, &size);
    loadFromFile(&lines, &capacity, &size, "lines.txt");

    printf("\nAfter loading from file:\n");
    printAllLines(lines, size);

    // Free all memory
    freeAll(lines, size);

    return 0;
}
// Dynamic Memory Allocation (DMA) is more efficient than fixed-size arrays because it allows memory to be allocated only 
// when needed, based on the actual size of the data at runtime. Unlike fixed-size arrays, which reserve a predefined amount
//  of memory regardless of how much is actually used, DMA allocates memory for each element as it is required. This reduces memory 
// wastage by ensuring that only the necessary amount of memory is used for both the array and individual elements. Furthermore, 
// DMA allows for resizing of memory, so the allocation can grow or shrink as needed, providing greater flexibility and more efficient
//  memory use compared to fixed-size arrays, which cannot be resized once set.