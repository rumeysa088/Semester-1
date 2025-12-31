#include<stdio.h>
int main(){
    int num;
    int count0 = 0,count1 = 0,count2 = 0,count3 = 0;
    int count4 = 0,count5 = 0,count6 = 0,count7 = 0;
    int count8 = 0,count9 = 0;

    printf("Enter a no. in the range 0-9, \nAnything other than that will stop the program\n");

    while(scanf("%d", &num)==1 && num>=0 && num<=9)
    {
        if(num == 0) {
            count0++;
      } else if(num == 1) {
            count1++;
        } else if(num == 2) {
        count2++;
        } else if(num == 3) {
            count3++; 
        } else if(num == 4) {
            count4++;
        } else if(num == 5) {
            count5++;
        } else if(num == 6) {
            count6++;
        } else if(num == 7) {
             count7++;
        } else if(num == 8) {
            count8++;
        } else if(num == 9) {
            count9++;
        } else {
            printf("Invalid entry");
        }
    }

    printf("\t\nNumber\tNumber of Occurences\n");
    printf("\t0\t\t\t%d",count0);
    printf("\n\t1\t\t\t%d",count1);
    printf("\n\t2\t\t\t%d",count2);
    printf("\n\t3\t\t\t%d",count3);
    printf("\n\t4\t\t\t%d",count4);
    printf("\n\t5\t\t\t%d",count5);
    printf("\n\t6\t\t\t%d",count6);
    printf("\n\t7\t\t\t%d",count7);
    printf("\n\t8\t\t\t%d",count8);
    printf("\n\t9\t\t\t%d",count9);

    return 0;
}