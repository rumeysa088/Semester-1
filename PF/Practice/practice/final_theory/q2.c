#include<stdio.h>
int main(){

    int choosen[6];
    int drawn[7]; int prize;int count=0,addFlag=0;
    printf("\nEnter 6 choosen numbers: ");
    for(int i=0;i<6;i++){
    scanf("%d",&choosen[i]);
    }
     printf("\nEnter 7 drawn numbers: ");
    for(int i=0;i<7;i++){
    scanf("%d",&drawn[i]);
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
             if(choosen[i]==drawn[j]){count++;break;}
        }
    }
     for(int i=0;i<6;i++){
       if(choosen[i]==drawn[6])addFlag=1;
    }
    if(count==6)printf("\nPRIZE 1!");
    else if(count==5 && addFlag==1)printf("\nPRIZE 2!");
    else if(count==5 && addFlag==0)printf("\nPRIZE 3!");
    else printf("\nNo prize!");
    return 0;
}