#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removeWord(char* str,char* word,char* neww){
   char* s=strstr(str,word); int wordsize=strlen(word);
   int len=s-str;
   strncpy(neww,str,len);neww[len]='\0';
   strcat(neww,s+wordsize);
}
int main(){
    char str[100],word[50],neww[100];
    printf("Enter string : ");
    scanf(" %[^\n]",str);
    printf("Enter word to remove: ");
    scanf(" %[^\n]",word);
    removeWord(str,word,neww);
    printf("New string : %s",neww);
    return 0;
}