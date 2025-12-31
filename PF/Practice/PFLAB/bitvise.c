#include <stdio.h>

int main() {
    int num1=9;   //binary for 9 is 00001001
    int num2=7;   //binary for 7 is 00000111
    int rightShift;
    int leftShift;

     rightShift=num1>>1;  //1001 becomes 100
     printf("%d\n",rightShift);

     leftShift=num2<<1;  //0111 becomes 01110
     printf("%d\n",leftShift);

    return 0;
}