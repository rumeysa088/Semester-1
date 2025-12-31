#include<stdio.h>
int main(){
      int matrix[5][5]={{1,2,3,4,5},
                        {5,6,7,8,9},
                        {9,8,7,6,5},
                        {5,4,3,2,1},
                        {0,1,2,3,4}};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {
            printf("%d ",matrix[i][j]);
        }printf("\n");
    }
       
    return 0;
}
#include<stdio.h>
void stats(int data[50][4],float GPA[50],int salaryDemand[50]){
    int count=0;int x,y;
              for(int i=0;i<50;i++){
                if(GPA[i]>3.0)
                {
                    for(int j=0;j<50;j++){
                        
                      if(data[j][1]>50)count++;
                    }
                }
              } int Cscore=0;int countB=0;
    printf("a) Total no, of candidates with gpa> 3.0 and score>50 is %d: \n",count);
    printf("Enter value for x and y: ");
    scanf("%d %d",&x,&y);
    for(int i=0;i<50;i++){Cscore=0;
        for(int j=1;j<4;j++){
            Cscore+=data[i][j];
        }if(Cscore>x&&(salaryDemand[i]<y)){countB++;}
    }int percent=(countB/50)*100;
    printf("b) Total no, of candidates with commulative>x and salary<y is %d: \n",countB);
    return;
     int sum=0;
    for(int i=0;i<50;i++){
        sum+=salaryDemand[i];
    }int average=sum/50;
    printf("c) Average salary demand for post is %d: \n",average);
   for(int i=0;i<50;i++){
  for(int m=0;m<49;m++)
  {                           
     if(GPA[m+1]<GPA[m])
     {
       int temp=GPA[m+1];
       GPA[m+1]=GPA[m];
       GPA[m]=temp;
     }
  }}
  printf("d) Median of all gpas is %d: \n",GPA[25]);
    return;
}
int main(){
           int data[50][4];float GPA[50];int salaryDemand[50];
           stats(data,GPA,salaryDemand);
       
    return 0;
}