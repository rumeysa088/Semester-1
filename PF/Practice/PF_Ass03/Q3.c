#include<stdio.h>
#include<string.h>
typedef struct employee{
    int employeeID;
    char name[100];
    char designation[100];
    int salary;
 }employee;

void displayEmployees(int n,employee arr[n]){
      printf("\nID\tName\t\tDesignation\t\tSalary\n");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t\t%d\n",arr[i].employeeID,arr[i].name,arr[i].designation,arr[i].salary);
    }
}
void findHighestSalary(int n,employee arr[n]){
    int max=-1;int index;
     for(int i=0;i<n;i++){
     if(arr[i].salary>max){max=arr[i].salary;index=i;}
   }
     printf("Employee with HIghest Salary:\n");
     printf("\n Employee ID: %d",arr[index].employeeID);
     printf("\n Employee Name: %s",arr[index].name);
     printf("\n Employee Designation: %s",arr[index].designation);
     printf("\n Employee Salary: %d",arr[index].salary);
}
void searchEmployee(int n,employee arr[n]){
    int dbemployeeID,opt;char dbName[100];
    printf("\nDo you want to search by 1:ID or 2:Name ? ");
    scanf("%d",&opt);
    switch(opt){
        case 1:
               printf("Enter Employee ID: ");
               scanf("%d",&dbemployeeID);
               for(int i=0;i<n;i++){
                if(arr[i].employeeID==dbemployeeID)printf("Employee found!\n");
                }
        break;
        case 2:
               printf("Enter Employee ID: ");
               scanf(" %[^\n]",dbName); 
               for(int i=0;i<n;i++){
                if(strcmp(dbName,arr[i].name)==0)printf("Employee found!\n");
                }
               
        break;
        default:
              printf("INVALID OPTION\n");
        break;
    }
    

}
void salaryBonus(int n,employee arr[n]){
      for(int i=0;i<n;i++){
                if(arr[i].salary<50000){int bonus=arr[i].salary*0.1;arr[i].salary+=bonus;}
                }
}
int main(){
    int n;
   printf("How many employees do you want to input data for? ");
   scanf("%d",&n);
   employee arr[n];
   for(int i=0;i<n;i++){
    printf("\nEnter employee ID: ");
    scanf("%d",&arr[i].employeeID);
    printf("\nEnter employee name: ");
    scanf(" %[^\n]",arr[i].name);
    printf("\nEnter employee designation: ");
    scanf(" %s",arr[i].designation);
    printf("\nEnter employee salary: ");
    scanf("%d",&arr[i].salary);
   }
displayEmployees(n,arr);
salaryBonus(n,arr);
findHighestSalary(n,arr);
searchEmployee(n,arr);
    return 0;
}