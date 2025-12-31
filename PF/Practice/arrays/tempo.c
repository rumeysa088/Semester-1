#include<stdio.h>
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int comb(int n,int r){
    
    int ncr=fact(n)/(fact(r)*fact(n-r));

    return ncr;
}
int main()
{   int row;
    printf("Number of rows: ");
    scanf("%d",&row);
    
  for(int i=0;i<=row;i++){

    for(int j=row;j>=i;j--){
        printf(" ");
    }
    for(int j=0;j<=i;j++){
        int ncr=comb(i,j);
        printf("%d ",ncr);
    }printf("\n");
  }
 
return 0;
}