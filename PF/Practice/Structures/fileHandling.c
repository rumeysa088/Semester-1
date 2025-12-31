#include<stdio.h>
int main(){

    FILE *ptr=fopen("TEST.txt","r");
    char str[100];
   
    fputs("TESTING IF IT REWRITES",ptr);
  while (fgets(str,100,ptr)!=NULL){
        printf("%s",str);
  }
    fclose(ptr);
}