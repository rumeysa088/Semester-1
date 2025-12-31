#include<stdio.h>
int main(){
            int continent;
            int aCountry;
            int eCountry;

    printf(" \t\tContinents Options\t\t\n");
    printf("1. Asia\n");
    printf("2. Europe\n");
    scanf("%d",&continent);

    switch(continent){
    
        case 1:
                printf("Enter your Country\n");
                printf(" 1. Pakistan\n 2.India\n");
                scanf("%d",&aCountry);
               switch(aCountry)
               {
                 case 1:
                 printf("You live in Asia Pakistan");
                  break;

                 case 2:
                 printf("you live in Asia India");
                 break;

                 default:
                 printf("invalid country");
                 break;

               }break;
        case 2:
               printf("Enter your country\n");
                printf(" 1. France \n 2. Germany\n");
                scanf("%d",&eCountry);
               switch(eCountry)
               {
                 case 1:
                 printf("you live in Europe France");
                  break;

                 case 2:
                 printf("you live in Europe Germany");
                 break;

                 default:
                 printf("invalid country");break;
               }break;
         default:
                printf("INVALID continent");break;
}
    return 0;}