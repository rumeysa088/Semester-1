#include<stdio.h>
#include<stdlib.h>
int main(){

    
    int* ptr;
    ptr=(int*)malloc(4*sizeof(int));
     
    printf("\nInput values: ");
    for(int i=0;i<4;i++){
        scanf("%d",ptr+i);
    }

     printf("\nvalues: ");
    for(int i=0;i<4;i++){
        printf("%d\n",*(ptr+i));

}
 ptr=realloc(ptr,6*sizeof(int));
  printf("\nInput values: ");
    for(int i=4;i<6;i++){
        scanf("%d",ptr+i);
    }
      printf("\nvalues: ");
    for(int i=0;i<6;i++){
        printf("%d\n",*(ptr+i));
    }

free(ptr);
return 0;}