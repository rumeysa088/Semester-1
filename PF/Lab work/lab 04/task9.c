#include<stdio.h>
int main(){
            int attendance,internalMarks;
            
            printf("Enter your attendance");
            scanf("%d",&attendance);

            printf("Enter your internal marks");
            scanf("%d",&internalMarks);

if(attendance>=75 && internalMarks>=40)            
   {
      printf(" You can appear in the final exam");
   }         
else
{
     printf("You can't appear in the final exam");
}             
  
   return 0;         

}