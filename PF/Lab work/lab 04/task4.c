#include<stdio.h>
int main(){
            int age,salary;
            
            printf("Enter your salary");
            scanf("%d",&salary);

            printf("Enter your age");
            scanf("%d",&age);

if(salary>=40000 && age>=25)            
   {
      printf(" Your Loan is Approved");
   }         
else
{
     printf(" Your Loan is not Approved");
}             
  
   return 0;         

}