#include <stdio.h> 
#include<string.h>
// typedef struct { 
//     int id;
//      float price; 
//      char name [20]; }userTyped; 
void main() { 
    // userTyped inst1[]={{20, 5000.05, "Samsung"}, 
    //                   {30, 3300.25, "Apple"}, 
    //                   {40, 6020.05, "Acer"}};
    //                    userTyped *ptr = instl; 
    //                    for(int i=0;i<3;i++){
    //                     printf("%d,",instl[i].id);
    //                     printf("%f,",instl[i].price);
    //                     printf("%s,",instl[i].name);
    //                    }
    //    for(int i=0;i<3;i++){
    //                     printf("%d,",*(ptr+i).id);
    //                     printf("%f,",*(ptr+i).price);
    //                     printf("%s,",*(ptr+i).name);
    //                    }
//   char country[]="Pakistan";
//   void *ptr;
//   ptr=country;
//   while((*ptr)!='\0'){
//      printf("%c",*ptr);
// int arr[]={80,82,79,71,82,65,77};
// for(int i=0;i<7;i++){
//     for(int j=0;j<=i;j++){
//         printf("%c",arr[j]);
//     }printf("\n");
// }



    char *p[3] = {"Rashid", "Sajid", "Ali"};
    int i, j;
    char *tmp;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - 1 - i; j++) {
            if (strcmp(p[j], p[j+1]) > 0) {
                tmp = p[j];
                p[j] = p[j+1];
                p[j+1] = tmp;
            }
        }
    }

    for (i = 0; i < 3; i++)
        puts(p[i]);

 


  }

 