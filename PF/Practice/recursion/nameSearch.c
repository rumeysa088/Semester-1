#include<stdio.h>
void find(char str[][4],char word[],int r,int c,int ir,int ic,int fcount){
    if( fcount==3){printf("Word found! ");return;}
    if((ir>=r )){printf("Word not found! ");return;}
    if(ic==c){ic=0;ir++;}
   if(str[ir][ic]==word[fcount]){ fcount++;find(str,word,r,c,ir,ic+1,fcount); }
   else{ find(str,word,r,c,ir+1,ic,fcount);}
}
int main(){
     char str[3][4]={"ali","bob","ros"};
     char word[4]="ros";
     find(str,word,3,4,0,0,0);
    return 0;
}