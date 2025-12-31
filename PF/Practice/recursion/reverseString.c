#include<stdio.h>
void rev(char str[],int start,int end){ 
    if (start >= end)
        return;
    char f=str[start];
    char l=str[end];
     
    str[start]=l;
    str[end]=f;
    rev(str,start+1,end-1);
     
}
int main(){
    char str[20];
     printf("enter string");
     scanf("%s",str);
     int i=0;

    while(str[i]!='\0'){i++;}
    rev(str,0,i-1);

    printf("Reversed string: %s",str);
    return 0;
}