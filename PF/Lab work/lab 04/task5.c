#include<stdio.h>
int main(){
            int num1,num2,operator,result;

            printf("Enter two numbers you want to operate\n");
            scanf("%d %d",&num1, &num2);
            printf("\nEnter Option no.\n 1: +\n 2: -\n 3: *\n 4: /\n");
            scanf("%d",&operator);

  switch(operator) 
    {
        case 1:
        result=num1+num2;
        printf("\n\t%d + %d = %d",num1,num2,result);
        break;

        case 2:
        result=num1-num2;
        printf("\n\t%d - %d = %d",num1,num2,result);
        break;

        case 3:
        result=num1*num2;
        printf("\n\t%d * %d = %d",num1,num2,result);
        break;
        
        case 4:
        if(num2!=0)
        {
        result=num1/num2;
        printf("\n\t%d/%d= %d",num1,num2,result);
        }
        else
        {
           printf("Division is not possible");
        }
        break;
        
        default:
        printf("Invalid Operator");

    }
    
   return 0;         

}