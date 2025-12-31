#include<stdio.h>
int main(){
    
   int mat1[3][2]={{1,2},{3,4},{4,5}};
   int mat2[2][3]={{1,2,3},{4,5,6}};
   int res[3][3];

     for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        res[i][j]=0;
    }
   }
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<2;k++){
          res[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
   }
   
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",res[i][j]);
    }printf("\n");
   }
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// struct point {
//     float x, y;
// };

// struct circle {
//     struct point center;
//     float radius;
// };

// struct triangle {
//     struct point a, b, c;
// };

// struct parallelogram {
//     struct point a, b, c, d;
// };

// float distance(struct point p1, struct point p2) {
//     return sqrt((p2.x - p1.x)*(p2.x - p1.x) + 
//                 (p2.y - p1.y)*(p2.y - p1.y));
// }

// float triangle_area(struct triangle t) {
//     float x1=t.a.x, y1=t.a.y;
//     float x2=t.b.x, y2=t.b.y;
//     float x3=t.c.x, y3=t.c.y;

//     return fabs(0.5 * (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
// }

// float parallelogram_area(struct parallelogram p) {
//     // area = |AB x AD|
//     float ABx = p.b.x - p.a.x;
//     float ABy = p.b.y - p.a.y;
//     float ADx = p.d.x - p.a.x;
//     float ADy = p.d.y - p.a.y;

//     return fabs(ABx*ADy - ABy*ADx);
// }

// int is_right(float a, float b, float c) {
//     return (fabs(a*a + b*b - c*c) < 0.001 ||
//             fabs(a*a + c*c - b*b) < 0.001 ||
//             fabs(b*b + c*c - a*a) < 0.001);
// }

// int main() {
//     int n;
//     printf("Enter Number of Shapes: ");
//     scanf("%d", &n);

//     printf("Enter Shapes:\n");

//     for (int i = 1; i <= n; i++) {
//         char type;
//         scanf(" %c", &type);

//         if (type == 'C') {
//             struct circle c;
//             scanf("%f %f %f", &c.center.x, &c.center.y, &c.radius);

//             float area = M_PI * c.radius * c.radius;
//             float peri  = 2 * M_PI * c.radius;

//             printf("Shape %d: Circle, Radius: %.0f\n", i, c.radius);
//             printf("Area: %.3f square units, Perimeter: %.3f units\n\n",
//                     area, peri);
//         }

//         else if (type == 'T') {
//             struct triangle t;
//             scanf("%f %f %f %f %f %f",
//                 &t.a.x, &t.a.y,
//                 &t.b.x, &t.b.y,
//                 &t.c.x, &t.c.y);

//             float AB = distance(t.a, t.b);
//             float BC = distance(t.b, t.c);
//             float CA = distance(t.c, t.a);

//             float peri = AB + BC + CA;
//             float area = triangle_area(t);

//             int isIso = (fabs(AB-BC)<0.001 || fabs(BC-CA)<0.001 || fabs(CA-AB)<0.001);
//             int isEqui = (fabs(AB-BC)<0.001 && fabs(BC-CA)<0.001);
//             int isRightAngle = is_right(AB, BC, CA);

//             printf("Shape %d: Triangle\n", i);
//             printf("Area: %.1f square units, Perimeter: %.0f units\n", area, peri);
//             printf("right-angled: %s, isosceles: %s, equilateral: %s\n\n",
//                 isRightAngle? "YES":"NO",
//                 isIso? "YES":"NO",
//                 isEqui? "YES":"NO");
//         }

//         else if (type == 'P') {
//             struct parallelogram p;
//             scanf("%f %f %f %f %f %f %f %f",
//                 &p.a.x, &p.a.y,
//                 &p.b.x, &p.b.y,
//                 &p.c.x, &p.c.y,
//                 &p.d.x, &p.d.y);

//             float AB = distance(p.a,p.b);
//             float BC = distance(p.b,p.c);
//             float CD = distance(p.c,p.d);
//             float DA = distance(p.d,p.a);

//             float peri = AB + BC + CD + DA;
//             float area = parallelogram_area(p);

//             int isRectangle = (fabs(distance(p.a,p.c) - distance(p.b,p.d)) < 0.01);
//             int isSquare = isRectangle && fabs(AB-BC) < 0.01;

//             printf("Shape %d: Parallelogram\n", i);
//             printf("Area: %.1f square units, Perimeter: %.0f units\n", area, peri);

//             if (isSquare) printf("Type: Square\n\n");
//             else if (isRectangle) printf("Type: Rectangle\n\n");
//             else printf("Type: Neither\n\n");
//         }
//     }

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int* collatzSequence(int n){
    int *p;
    p=(int*)malloc(10*sizeof(int));
    int *pi=p;
    *p=n;p++;
    while(n!=1){

    if(n%2==0){
       n=n/2; *p=n;p++;
    }
    else{
          n=(3*n)+1;*p=n;p++;
    } 
  } *(p+1)=-1; return pi;
}
int main(){
     int n=0;
     int* ptr;
    while(n!=-1){
         printf("\nEnter number: ");
         scanf("%d",&n);
         ptr=collatzSequence(n);
         for(int i=0;ptr[i]!=-1;i++){
            printf(" %d",ptr[i]);
         }
         
    }free(ptr);
    return 0;
}
