#include<stdio.h>
int main(){
            int deviceOption;
            int laptopBrand;
            int phoneBrand;

    printf(" \t\tDevice Options\t\t\n");
    printf("1. Phone\n");
    printf("2. Laptop\n");
    scanf("%d",&deviceOption);

    switch(deviceOption){
    
        case 1:
                printf("Enter you phone brand\n");
                printf(" 1. Samsung\n 2.  Apple\n");
                scanf("%d",&phoneBrand);
               switch(phoneBrand)
               {
                 case 1:
                 printf("you have a samsung phone");
                  break;

                 case 2:
                 printf("you have an iphone");
                 break;

                 default:
                 printf("invalid brand");
                 break;

               }break;
        case 2:
               printf("Enter you laptop brand\n");
                printf(" 1. Dell\n 2. HP\n");
                scanf("%d",&laptopBrand);
               switch(laptopBrand)
               {
                 case 1:
                 printf("you have a Dell laptop");
                  break;

                 case 2:
                 printf("you have an HP laptop");
                 break;

                 default:
                 printf("invalid brand");break;
               }break;
         default:
                printf("INVALID DEVICE");break;
}
    return 0;}