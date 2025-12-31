#include <stdio.h>

int main() {
    int i;int a=0;int b=1;int c;

    for(int i = 1; i <=10 ; i++)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
    }
        

    return 0;
}