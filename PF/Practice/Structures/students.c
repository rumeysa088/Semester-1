#include <stdio.h>
#include <string.h>

// Define struct BEFORE using it
struct stdens {
    int roll;
    char name[20];
    char dept[10];
    char course[10];
    int year;
};

// Now the struct is known
void fun(struct stdens a, struct stdens b) {
    if (strcmp(a.dept, b.dept) == 0)
        printf("Same");
    else
        printf("Not Same");
}

int main() {

    struct stdens a, b;

    a.roll = 202;
    strcpy(a.name, "Ali");
    strcpy(a.dept, "CS");
    strcpy(a.course, "ICT");
    a.year = 2025;

    b.roll = 204;
    strcpy(b.name, "Saad");
    strcpy(b.dept, "commerce");
    strcpy(b.course, "Finance");
    b.year = 2024;

    fun(a, b);

    return 0;
}
