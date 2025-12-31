#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("How many elemnts do u wanna enter?");
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed!");  //if error in allocation
        return 1;
    }
    printf("Enter elemnts: ");
    for(int i=0;i<n;i++){   //getting elements
        scanf("%d",&p[i]);
    }
     printf("Array elemnts: ");
      for(int i=0;i<n;i++){
        printf("%d ",p[i]);  //printing elements
    }
    free(p);
    return 0;
}