#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,newSize,choice;

    printf("Enter how many integers you want to store: ");
    scanf("%d",&n);
    int *p = (int*)calloc(n,sizeof(int));

    // Check allocation success
    if(p == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Display initial values (all zeros)
    printf("\nInitial array values (from calloc):\n");
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    printf("\n\nDo you want to increase the array size? 1=Yes  0=No : ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter the new size: ");
        scanf("%d",&newSize);
        int *temp = (int*)realloc(p,newSize*sizeof(int));

        // Check if reallocation succeeded
        if(temp == NULL){
            printf("Reallocation failed! Keeping old array.\n");
        } else {
            p = temp; 
            printf("Array successfully resized.\n");
            
                printf("Enter new elements:\n");
                for(int i=n;i<newSize;i++){
                    scanf("%d",&p[i]);
                }
                n = newSize; // update size
        }
    }

    // Display final array
    printf("\nUpdated array values:\n");
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    free(p);

    return 0;
}
