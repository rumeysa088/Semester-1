#include<stdio.h>
#include<stdlib.h>
int main(){
    int c; int n=0;int rowCount=0;int cap=10;
    printf("\nEnter columns");
    scanf("%d",&c);
    int (*mat)[c];
    mat=malloc(cap*sizeof(*mat));
    // int *matI=mat;
    while(n!=-1){
        if(rowCount==cap){cap+=10;mat=realloc(mat,cap*sizeof(*mat));}

        printf("Enter first number of row %d (or -1 to stop): ", rowCount);
        scanf("%d", &n);  // Read into n
        if(n == -1) break; 
         mat[rowCount][0]=n;
       printf("\nEnter num");
       for(int i=1;i<c;i++){
          scanf("%d",&mat[rowCount][i]);
       }
       rowCount++;
    }
int (*matN)[c-2];
matN=malloc((rowCount-2)*sizeof(*matN));   

    for(int i=0;i<rowCount-2;i++){
        for(int j=0;j<c-2;j++){
          int sum=0;
          for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                sum+=mat[i+x][j+y];
            }
          }
            matN[i][j]=sum;
        }
    }
     for(int i=0;i<rowCount-2;i++){
        for(int j=0;j<c-2;j++){
         printf(" %d",matN[i][j]);
        }printf("\n");
    }
    
    free(mat);
    free(matN);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct gameChar{
    char dbname[80];
    int hp;
    int dp;
    int ap;
};
void display(int i,struct gameChar arr[]){
     for(int j=0;j<i;j++){
        printf("\nChar name : %s",arr[j].dbname);
        printf("\nChar health : %d",arr[j].hp);
         printf("\nChar defense : %d",arr[j].dp);
          printf("\nChar attack : %d",arr[j].dp);
     }
}
void battleSim(int i,struct gameChar arr[]){
    char name1[80];char name2[80];int index1,index2;
    printf("\nWhich two characters do u want to fight? ");
    scanf("%s %s",name1,name2);
    for(int j=0;j<i;j++){
       if(strcmp(arr[j].dbname,name1)==0)index1=j;
    }
     for(int j=0;j<i;j++){
       if(strcmp(arr[j].dbname,name2)==0)index2=j;
    }
    do{
    if(arr[index1].dp>arr[index2].dp){arr[index2].hp-=arr[index1].ap}
    else{arr[index1].hp-=index2].ap}}while(arr[index1].hp==0 || arr[index1].hp==0 );
}
int main(){
    struct gameChar arr[80];char name[80];int h,d,a,i=0,opt;
    do{
        printf("\nDo you want to input? -1 for no 1 for yes");
        scanf("%d",&opt);
        printf("\nEnter character name: ");
        scanf("%s",name);
        printf("\nEnter character nhealth: ");
        scanf("%d",&h);
        printf("\nEnter character attack: ");
        scanf("%d",&a);
        printf("\nEnter character defense: ");
        scanf("%d",&d);
        if((h+a+d)==10 && h!=a && a!=d &&h!=d && a>0 && h>0 && d>0 && a<=5 && h<=5 && d<=5 && strlen(name)<80)
        {
          strcpy(arr[i].dbname,name);
          arr[i].hp=h;
          arr[i].dp=d;
          arr[i].ap=a;
          i++;
        }
    }while(opt!=-1);

    display( i, arr);
    return 0;
}