#include<stdio.h>
int main(){
            int num[6];
               int i;
              for(i=0;i<6;i++)
			  {
			  	printf("Enter a number");
			  	scanf("%d",&num[i]);
			  		
			  }  int temp=num[5];
              for(i=4; i>=0; i--)
			  {
			  	num[i+1]=num[i];
			  }
              num[0]=temp;
              for(i=0;i<6;i++)
			  {
			  	
			  	printf("%d , ",num[i]);
			  		
			  }
    
    
 return 0;}