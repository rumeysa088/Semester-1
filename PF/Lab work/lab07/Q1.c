// #include<stdio.h>
// int main(){
//               int employeeID[12];
//               int checkID;
              
//               int i;int flag=0;int j=0;
//               for(i=0;i<12;i++)
// 			  {
// 			  	printf("Enter %d employee id",i);
// 			  	scanf("%d",&employeeID[i]);
			  		
// 			  }
// 			    printf("Enter employee id you want to check ");
// 			  	scanf("%d",&checkID);
			  
// 			  for(i=0;i<12;i++)
// 			  {
// 			  	if(checkID==employeeID[i]) 
// 				  {
// 				  	printf("Employee ID exists");break;
// 				  }else
// 				  { j++;
// 				  }
			  		
// 			  }
// 			 if(j!=0) printf("Employee ID doesnt exists");
            
// return 0;
// }
#include<stdio.h>
int main(){
            int i,j;
        for(i=1;i<=4;i++){  int a=1; 
        for(j=1;j<=i;j++){  a=1; 
           printf("%d",a);a+=2; 
        }printf("\n");
    }
    return 0;
}


