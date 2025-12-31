// #include<stdio.h>
// struct student{
//     int studentId;
//     char* name;
//     float gpa;
// };
// struct course{
//      char courseCode[20];
//      char title[20];
//      struct student st;
// };

// int main(){
//     int n;
//     char* np=(char*)malloc(20*sizeof(char));
//     int k=2;
//   struct student* sp=(struct student*)malloc(k*sizeof(*sp));
//   printf("Enter number of courses: ");
//   scanf("%d",&n);
//   struct course* cp=(struct course*)malloc(n*sizeof(*cp));
//   for(int i=0;i<n;i++){
//     printf("Enter course code");
//     scanf("%s",cp[i].courseCode);
//      printf("Enter course title");
//     scanf("%s",cp[i].title);
//     if(i>=2){ k=k*2;
//         sp=(struct student*)realloc(sp,k*sizeof(*sp));
//     }
//      printf("Enter values for students");
//     for(int j=0;j<n;j++){
//         printf("Enter student id");
//         scanf("%d",sp[j].studentId);
//          printf("Enter student name");
//         scanf("%s",sp[j].name);
//          printf("Enter student id");
//         scanf("%f",sp[j].gpa);
//     }
    
//   }
//   free(np);
//   free(sp);
//   free(cp);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
struct driver{
    int driverID;
    char name[20];
    float totalDay;
};
int main(){
    int n,r;
   printf("How many drivers were active? ");
   scanf("%d",&n);
   
   struct driver *dp=(struct driver*)malloc(n*sizeof(*dp));
   
   for(int j=0;j<n;j++){
         printf("\nEnter Driver ID: ");
        scanf("%d", &dp[j].driverID);

        printf("Enter Driver Name: ");
        scanf("%s", dp[j].name);
    printf("How many rides did driver cover? ");
   scanf("%d",&r);
   float* arr=(float*)malloc(r*sizeof(float));float tot=0;
   for(int i=0;i<r;i++){
     scanf("%f",&arr[i]);tot+=arr[i];
   } dp[j].totalDay=tot;
   free(arr);
}
for(int i=0;i<n;i++){
    printf("%d",dp[i].driverID);
    printf("%s",dp[i].name);
    printf("%f",dp[i].totalDay);
}float max=-1;int index;
for(int i=0;i<n;i++){
   if(dp[i].totalDay>max){max=dp[i].totalDay;index=i;}
}
printf("Highest earning driver: %s earning %f",dp[index].name,max);
float min=dp[0].totalDay;
for(int i=0;i<n;i++){
   if(dp[i].totalDay<min){min=dp[i].totalDay;index=i;}
}
printf("lowest earning driver: %s earning %f",dp[index].name,min);
for(int j=0;j<n;j++){
for(int i=0;i<n-1;i++){
  if(dp[i].totalDay<dp[i+1].totalDay){
    struct driver temp=dp[i];
    dp[i]=dp[i+1];
    dp[i+1]=temp;
  }
}}
for(int i=0;i<n;i++){
    printf("%d",dp[i].driverID);
    printf("%s",dp[i].name);
    printf("%f",dp[i].totalDay);
}free(dp);
}