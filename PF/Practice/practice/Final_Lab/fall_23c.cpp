// #include<stdio.h>
// typedef struct course{
//     int cId;
//     float gpa;
//     float cHours;
//     int sNum;
// }Course;
// int main(){
//     Course arr[20];int n,totalPts=0;int totalhrs=0;int index;
//     printf("\nhow mnay courses?");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("\nEnter details for %dth course",i);
//         scanf("%d",&arr[i].cId);
//         scanf("%f",&arr[i].gpa);
//         scanf("%f",&arr[i].cHours);
//         scanf("%d",&arr[i].sNum);
//     }
//     for(int i=1;i<2;i++){
//         if(arr[i].sNum==i){
//             totalPts+=arr[i].gpa*arr[i].cHours;
//             totalhrs+=arr[i].cHours;
//         }
//     } float sGpa=totalPts/totalhrs;
//      totalPts=0;totalhrs=0;
//      for(int i=1;i<2;i++){
//             totalPts+=arr[i].gpa*arr[i].cHours;
//             totalhrs+=arr[i].cHours;
//     } float cgpa=totalPts/totalhrs;
//     return 0;
// }

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool isPrime(int n){
    int mul=0;
    if(n==2)return true;
   for(int i=2;i<n;i++){
     if(n%i==0)mul=1;
   }if(mul==0)return true;
   else  return false;
}
int** goldbach_pairs(int even_numbers[], int n){

 int **pairs = malloc(100 * sizeof(int*));

// Step 2: Allocate each row with 2 columns  
for(int i = 0; i < 100; i++) {
    pairs[i] = malloc(2 * sizeof(int));
}
 for(int j=0;j<n;j++){
    cE=even_numbers[j];
    for(int i=2;i<cE/2;i++){
       if(isPrime(i) && isPrime(n-i))
       {
         p[i]=;
       }
    }}
}
int main(){ int i=0;
    printf("Enter even numbers and -1 to stop");
    int even_numbers[50];
    while(1){

      scanf("%d",&even_numbers[i]);
      if(even_numbers[i]==-1){i--;break;}
      i++;
    }goldbach_pairs(even_numbers,i);
    return 0;
}