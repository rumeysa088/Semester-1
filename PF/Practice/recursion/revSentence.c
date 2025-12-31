#include <stdio.h>
#include <string.h>
char* rev(char str[],char* start,char* end,char store[]){
   if(start>=end)return store;
   int s=str-start;
   int e=end-str;
   if(str[e]==' '){strcat(store,end);}end--;
   rev(str,start,end,store);
}
int main() {
    char str[] ="Life Is Fun";
    int n=strlen(str);
    char store[30]="";
    char* start=str;
    char* end=str+(n-1);
    printf("%s",rev(str,start,end,store));
    return 0;
}
