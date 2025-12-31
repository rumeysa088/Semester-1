#include<stdio.h>
int main(){
               int stdMarks;
printf("Enter your marks");
scanf("%d",&stdMarks);
if(stdMarks>=50){
if(stdMarks>=85)
    printf("YOU PASSED WITH DISTINCTION");
else{
    printf(" YOU PASSED");
}
}
else{
    printf("YOU FAILED");
}
return 0;}