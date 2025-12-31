#include<stdio.h>
int main(){
            int password;

            printf("Enter the Password");
            scanf("%d",&password);

if(password==1234)       
   {
      printf(" Access Granted\a");
   }         
else
  {
     printf("Access denied\a");
  }             
  
   return 0;         

}