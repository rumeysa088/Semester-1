// #include<stdio.h>
// int maze(int cr,int cc, int r,int c){
//    int rightways=0;int downways=0;
//     if(cr==r && cc==c )return 1;
//     else if(cr==r)rightways+=maze(cr,cc+1,r,c);
//     else if(cc==c)downways+=maze(cr+1,cc,r,c);
//     else if(cr<r && cc<c){downways+=maze(cr+1,cc,r,c);rightways+=maze(cr,cc+1,r,c);}
    
    
//    return rightways+downways;
    
// }
// int main(){
//      printf("ways to reach %d",maze(1,1,3,3));
//     return 0;
// }
#include<stdio.h>
int maze(int n,int m){
    if(n==1 && m==1)return 1;
    if(n==1 )return maze(n,m-1);
     if(m==1)return maze(n-1,m);
    
    
   return maze(n-1,m)+maze(n,m-1);
    
}
int main(){
     printf("ways to reach %d",maze(4,4));
    return 0;
}