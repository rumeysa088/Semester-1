#include <stdio.h>
#include <string.h>

// Define struct BEFORE using it
struct points{
    
    int x;
    int y;
}a,b,d;


struct points fun(struct points a,struct points b,struct points *p) {
    
    d.x=b.x-a.x;
    d.y=b.y-a.y;
   return d;
}

int main() {
  
    a.x=10;
    a.y=10;

    b.x=20;
    b.y=20;
  
   struct points distance = fun(a,b,&d);
   printf("distance form x to x is %d and y to y is %d",d.x,d.y);
    return 0;
}


#include <stdio.h>
#include <math.h>   // for sqrt and pow functions

// Define struct for a point
struct Point {
    int x;
    int y;
};

// Function to calculate distance between two points
double distance(struct Point a, struct Point b) {
    int dx = b.x - a.x;
    int dy = b.y - a.y;
    return sqrt(dx*dx + dy*dy);  // Euclidean distance
}

int main() {
    struct Point p1, p2;

    // Input points
    printf("Enter coordinates of first point (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    // Calculate and print distance
    double dist = distance(p1, p2);
    printf("Distance between points = %.2lf\n", dist);

    return 0;
}
