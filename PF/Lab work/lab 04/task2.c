#include<stdio.h>
int main(){
            int userAge;

    printf("Enter your age");
    scanf("%d",&userAge);
if(userAge<12)
{
   printf(" Your ticket price is 200/-");
}
else if(userAge>=12 && userAge<=18)
{
   printf(" Your ticket price is 300/-");
}
else if(userAge>18 && userAge<=60)
{
   printf(" Your ticket price is 500/-");
}
else
{
    printf(" Your ticket price is 250/-");
}
   return 0;         

}