#include<stdio.h>
#include<string.h>
void print(int n,char str[][n]){
      printf("{");
  for(int i=0;i<n;i++){
      printf(", %s",str[i]);
  }
    printf("}\n");
}
void comb(char food[][8],int index,char sub[][10],int subindex){
  if(index==3){print(subindex,sub);return;}

  strcpy(sub[subindex],food[index]);
  comb(food,index+1,sub,subindex+1);
    comb(food,index+1,sub,subindex);
}
int main(){
     char food[][8] = {"rice", "chicken", "salad"};
    char sub[3][10];
    comb(food,0,sub,0);
    return 0;
}