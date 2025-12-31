#include<stdio.h>
int main(){
            int num;
            int count0 = 0,count1 = 0,count2 = 0,count3 = 0;
            int count4 = 0,count5 = 0,count6 = 0,count7 = 0;
            int count8 = 0,count9 = 0;

            printf("Enter a no. in the range 0-9, \nAnything other than that will stop the program\n");

            while(scanf("%d", &num)==1 && num>=0 && num<=9)
            {
              switch(num)
              {
                case 0:
                count0++;
                break;

                case 1:
                count1++;
                break;

                case 2:
                count2++;
                break;

                case 3:
                count3++;
                break;

                case 4:
                count4++;
                break;

                case 5:
                count5++;
                break;

                case 6:
                count6++;
                break;

                case 7:
                count7++;
                break;

                case 8:
                count8++;
                break;

                case 9:
                count9++;
                break;

                default:
                printf("Invalid entry");
              }

            }

    printf("\nNumber\tNumber of Occurences\n");
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