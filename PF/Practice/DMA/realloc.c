#include<stdio.h>
#include<stdlib.h>
int main(){

    
    int (*ptr)[20];int n;int opt;
    printf("Enter number of names: ");
    scanf("%n");
    ptr=calloc(n,sizeof(ptr));

       
    printf("\nInput Names: ");
    for(int i=0;i<n;i++){
        scanf("%s",ptr+i);
    }
     printf("\nDo you wanna add more names?:(0/1)"); 
     scanf("%d",%opt);
     if(opt==0){
         printf("\nvalues: ");
    for(int i=0;i<4;i++){
        printf("%d\n",*(ptr+i));
     } return;
    }

free(ptr);
return 0;}