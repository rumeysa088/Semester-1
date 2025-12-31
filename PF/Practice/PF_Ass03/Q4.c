#include<stdio.h>
#include<string.h>
typedef struct shelf{
     int bookID;
     int popularityScore;
}book;
void add(int* top, int capacity, book arr[capacity],int x,int y) {
    // Check if book already exists
    for (int i = 0; i < *top; i++) {
        if (arr[i].bookID == x) {
            arr[i].popularityScore = y;
            book temp = arr[i];
            for (int j=i;j<*top-1;j++) {
                arr[j]=arr[j+1];
            }
            arr[*top-1]=temp;

            printf("BOOK ALREADY EXISTS!\n");
            return;
        }
    }

    // If shelf is full
    if (*top == capacity) {
        for (int i=0;i<capacity-1;i++) {
            arr[i]=arr[i+1];
        }
        (*top)--;
    }

    // Add new bookat end
    arr[*top].bookID=x;
    arr[*top].popularityScore=y;
    (*top)++;
}
void access(int top, int capacity, book arr[capacity],int x) {
    if (top == 0) {
        printf("-1\n");
        return;
    }

    for (int i = 0; i < top; i++) {
        if (arr[i].bookID == x) {
            printf("%d\n", arr[i].popularityScore);
            // Move to end as in most recently used
            book temp=arr[i];
            for (int j=i;j<top-1;j++) {
                arr[j]=arr[j+1];
            }
            arr[top-1]=temp;
            return;
        }
    }

    // Book not found
    printf("-1\n");
}
int main(){
    int Q,capacity,opt;int top=0;
   printf("Enter capacity and number of operations: ");
   scanf("%d %d", &capacity, &Q);

   book arr[capacity];


    for (int i = 0; i < capacity; i++) {
        arr[i].bookID = 0;
        arr[i].popularityScore = 0;
    }
    char command[10];
    int x, y;

    for (int i = 0; i < Q; i++) {
        scanf("%s", command);   

        if (strcmp(command, "ADD") == 0) {
            scanf("%d %d", &x, &y);   //take book ID and popularity
            add(&top, capacity, arr, x, y);   }
        else if (strcmp(command, "ACCESS") == 0) {
            scanf("%d", &x);          // Read book ID
            access(top, capacity, arr, x);   
        }
    }

    return 0;
}
