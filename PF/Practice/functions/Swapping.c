#include<stdio.h>
void swap(int* x,int* y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  return ;                           //int ** holds address of a pointer
}
int main(){
             int a,b;
             printf("Enter value of a ");
             scanf("%d",&a);
             printf("Enter value of b ");
             scanf("%d",&b);

             swap(&a,&b);
             printf("New a is %d\n",a);
             printf("New b  is %d",b);
    return 0;
}