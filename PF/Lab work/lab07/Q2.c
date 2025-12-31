#include<stdio.h>
int main(){
              int studentMarks[10];
               int i;int sum=0;
              for(i=0;i<10;i++)
			  {
			  	printf("Enter your marks");
			  	scanf("%d",&studentMarks[i]);
			  	sum=sum+studentMarks[i];
			  		
			  }  int average=sum/10;
			  printf("Average is %d",average);
              
              
return 0;
}