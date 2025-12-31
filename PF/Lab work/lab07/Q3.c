#include<stdio.h>
int main(){
            int ages[8];
               int i;int min;
              for(i=0;i<8;i++)
			  {
			  	printf("Enter your Age");
			  	scanf("%d",&ages[i]);
			  	
			  		
			  }min=ages[0];
              for(i=0;i<8;i++)
			  {
			  	if(ages[i]<min)min=ages[i];
			  		
			  } printf("youngest participant is %d years old",min);
    
    
 return 0;}