#include<stdio.h>
int main(){
 
     float width,length,Area,Perimeter;
    printf("Enter width of rectangle");
    scanf("%f",&width);
    printf("Enter length of rectangle");
    scanf("%f",&length);

    Area=length*width;
    Perimeter=width+width+length+length;

    printf(" Area of rectangle is %.2f",Area);
    printf(" Perimeter of rectangle is %.2f",Perimeter);


return 0;


}