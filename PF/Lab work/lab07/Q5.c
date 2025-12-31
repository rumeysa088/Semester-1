#include<stdio.h>
int main(){
            int num[12];
               int i,rem,j=0;
              for(i=0;i<12;i++)
			  {
			  	printf("Enter a number");
			  	scanf("%d",&num[i]);
			  		
			  }  
              printf("Enter which number you want to remove:");
              scanf("%d",&rem);
              for(i=0;i<12;i++)
			  {
			  	if(num[i]!=rem)
                {
                  num[j]=num[i];j++;
                }
			  		
			  }  
              for(i=0;i<j;i++)
			  {
			  	
			  	printf("%d\t",num[i]);
			  		
			  }

 return 0;
}