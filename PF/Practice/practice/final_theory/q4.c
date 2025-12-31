#include<stdio.h>
#include<string.h>
struct cust{
   int ID;
   char cat[30];
};
void addItem(int selected[20]){
  char str[20];
   printf("Category: ");
      scanf(" %[^\n]",str);
      if(strcmp(str,"Electronic Items")==0){
        printf("Do u wanna add ")
      }
};
void input(struct cust arr[5]){ char str[20];
   for(int i=0;i<5;i++){
      printf("Category: ");
      scanf(" %[^\n]",str);
      strcpy(arr[i].cat,str);
      printf("Enter ID");
      scanf("%d",&arr[i],ID);
   }
}

int main(){
     int items[4][5]={{45000,7000,20000},{},{},{}};
    struct cust arr[5];
    input(arr);
    return 0;
}