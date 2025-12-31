#include<stdio.h>
void push(int maxSize,int stack[maxSize],int *top){
      int num;
      //overflow
     if(*top==maxSize-1){printf("Stack overflow ALERT ! can't push element\n");}
     else
     {  
        printf("Enter the element you want to push: ");
        scanf("%d",&num);
        (*top)++;stack[*top]=num;   //LBA
        printf("Done :) \n");
     }
     
    return;
}
void pop(int maxSize,int stack[maxSize],int *top){
      
      //underflow
     if(*top==-1){printf("Stack underflow ALERT !\n can't pop element\n");}
     else
     {  
        printf("Popped element: %d\n",stack[*top]);
        (*top)--;
        printf("Done :) \n");
     }
     
    return;
}
void peek(int maxSize,int stack[maxSize],int top){
        if(top==-1){printf("Stack underflow ALERT !\n can't show element\n");}
     else
     {  
        printf("TOP element: %d\n",stack[top]); 
        
     }    
            
    return;
}
void display(int maxSize,int stack[maxSize],int top){
    if(top==-1){printf("Stack is Empty\n");}
    else
    {
     printf("Stack Elements are: \n");
    for(int i=top;i>=0;i--)
    printf("Element %d: %d\n",i+1,stack[i]);

    }
    return;
}
int main(){
     int maxSize,opt;
     printf("Enter the size of the stack: ");
     scanf("%d",&maxSize);
     int stack[maxSize];int top=-1;
     
     do
     {
       printf("\n\t\t\t What function do u want to perform? \n");
       printf("1:PUSH\n2:POP\n3:PEEK\n4:DISPLAY\n5:EXIT\n");
       scanf("%d",&opt);
    
     switch(opt)
     {
       case 1:  //PUSH
               push(maxSize,stack,&top);
       break;

       case 2:  //POP
               pop(maxSize,stack,&top);
       break;

       case 3:  //PEEK
               peek(maxSize,stack,top);
       break;
        
       case 4: //DISPLAY
               display(maxSize,stack,top);
       break;

       case 5:break;

       default:
                printf("Invalid Option try again\a\n");
       break;
     }
     }while(opt!=5);
    return 0;
}