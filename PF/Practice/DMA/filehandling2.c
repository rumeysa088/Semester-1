#include<stdio.h>
int main(){

    FILE *ptr=fopen("NEW.dat","r");
    char str[100];
   
    // fprintf(ptr,"%s",str);

  while (fscanf(ptr,"%s",str)!=EOF){
        printf("%s",str);
  }
    fclose(ptr);
}