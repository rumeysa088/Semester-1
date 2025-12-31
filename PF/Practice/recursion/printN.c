// #include<stdio.h>
// void print(int num){
//     if(num==0){return;}
//     else{
//         print(num-1);                //INCREASING
//         printf("%d\n",num);}
// }
// int main(){
//      print(7);
//     return 0;
// }

// #include<stdio.h>
// void print(int num){
//     if(num==0){return;}
//     else{
//                                               //DECREASING
//         printf("%d\n",num);
//          print(num-1); }
// }
// int main(){
//      print(7);
//     return 0;
// }
#include<stdio.h>
void print(int num){
    if(num==0)return;
     
    printf("%d\n",num);
    print(num-1);
    if(num==0){
        return;
    }
    printf("%d\n",num);
    
}
int main(){
     print(4);
    return 0;
} /*4
    3
    2
    1
    1*/