#include <stdio.h>
#include <string.h>

// Define struct BEFORE using it
struct stdens {
    
    char name[20];
    int marks;
};

// Now the struct is known
struct stdens fun(struct stdens arr[],int n) {
    int max;
   for(int i=0;i<n-1;i++){
     if(arr[i].marks>arr[i+1].marks) max=i;
   }
   return arr[max];
}

int main() {

    struct stdens arr[3]={
         {"Ali",81},
         {"Saad",91}
    };
  
   struct stdens topper= fun(arr,3);
   printf("Max marks are %d scored by %s",topper.marks,topper.name);
    return 0;
}
