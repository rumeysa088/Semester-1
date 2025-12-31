#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void concat(char* s1,char* s2,int n1,int n2){
   char* cat=malloc(n1+n2+1);
   scanf("%s", s1);
scanf("%s", s2);
   strcpy(cat,s1);
   strcat(cat,s2);char temp[100];
   int size=strlen(cat);
   while(1){
    printf("\nEnter strings , q to stop");
    scanf(" %[^\n]",temp);
    if(strcmp(temp,"q"))break;
    if(strlen(temp)>size-1){ size=size*20;
    char* check=realloc(cat,size);
if(check==NULL){printf("Allocation failed!");return;}
     cat=check;}
    strcat(cat,temp);
   }
 printf("Original string 1: %s \nOriginal string 2: %s ",s1,s2);
 printf("Contatenated : %s",cat);
 free(cat);

   
}
int main(){
    int n1,n2;
   printf("\nEnter size of s1: ");
   scanf("%d",&n1);
   printf("\nEnter size of s2: ");
   scanf("%d",&n2);
   char* s1=(char*)malloc(n1);
   char* s2=(char*)malloc(n2);
   concat(s1,s2,n1,n2);
   free(s1);
   free(s2);
    return 0;
}