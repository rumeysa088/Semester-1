// #include<stdio.h>
// #include<string.h>     //null term  b
// char* recursiveConcat(char dest[],char src[]){

//     if (*src == '\0') return dest;

//     // Move ptrD to the end of current dest string
//     char* ptrD = dest;
//     while (*ptrD != '\0') ptrD++;

//     char* ptrS = src;  // pointer to current char in src

//     *ptrD = *ptrS;      // copy character
//     *(ptrD + 1) = '\0'; // keep null terminator

//     recursiveConcat(ptrD + 1, ptrS + 1); // recurse for next character
//     return dest;
// }
// int main(){
//     char s1[50]="Rumaisa";
//     char s2[]="Abbasi";
    
//     printf(" Appended string is %s",recursiveConcat(s1,s2));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>     
// char* recursiveCopy(char dest[],char src[]){
     
//    if(*src=='\0')return dest;

//    char* ptrD = dest;
//    char* ptrS = src;
    
//    *ptrD = *ptrS;
//    *(ptrD+1)='\0';
//   recursiveCopy(ptrD+1,ptrS+1);
  
//   return dest;
// }
// int main(){
//     char s1[]="Rumaisa";
//     char s2[]="Abbasi";
    
//     printf("Before copying : %s\n",s1);
//     printf("After copying : %s\n",recursiveCopy(s1,s2));
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct team{

//      int teamID;
//      char name[50];
//      int totalWins;
//      int totalLoss;
// }Team;

// int main(){
//     int n,opt,id,index=-1,max=-1;
//     printf("how many insertions to make?");
//     scanf("%d",&n);
//     Team* ptr;
//     ptr=calloc(n,sizeof(Team));
//     for(int i=0;i<n;i++){
//         printf("\nEnter team ID");
//         scanf("%d",&ptr[i].teamID);
//         printf("\nEnter team name");
//         scanf("%s",ptr[i].name);
//         printf("\nEnter team wins");
//         scanf("%d",&ptr[i].totalWins);
//         printf("\nEnter team losses");
//         scanf("%d",&ptr[i].totalLoss);
//     }
//     printf("\nDo you want to update wins or losses (1/2)");
//     scanf("%d",&opt);
//     printf("\ninput team id: ");
//     scanf("%d",&id);
//     for(int i=0;i<n;i++){
//         if(ptr[i].teamID==id){index=i;break;}
//     }
//     if(opt==1 && (index!=-1))
//     {
//         (ptr[index].totalWins)++;
//     }
//     else if(opt==2 && (index!=-1))
//     {
//          (ptr[index].totalLoss)++;
//     }
//      for(int i=0;i<n;i++){
//         if(ptr[i].totalWins>max){index=i;max=ptr[i].teamID;}
//     }
//     printf("Team with max wins is %s with wins= %d\n",ptr[index].name,max);
//     free(ptr);
//     return 0;
// }

#include<stdio.h>
int main(){
    int r,c;
    printf("\nEnter number of rows: ");
    scanf("%d",&r);
    printf("\nEnter number of columns: ");
    scanf("%d",&c);

    int arr[r][c];
     printf("\nEnter elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nmatrix: \n");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    } int sum=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){sum+=arr[i][j];}
        }
    }
     printf("\nSum is : %d ",sum);
    return 0;
}