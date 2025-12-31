#include <stdio.h>

void simulate(int arr[3][3], int r, int c, int k) {
    for (int z = 0; z < k; z++) {
        int temp[3][3]; // temporary array for this round

        // iterate through each cell
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int empty = 0, filled = 0;

                // check all neighbors
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        if (x == i && y == j) continue; // skip self
                        if (x >= 0 && x < r && y >= 0 && y < c) {
                            if (arr[x][y] == 0) empty++;
                            else filled++;
                        }
                    }
                }

                // apply rules
                if (arr[i][j] == 1) {
                    // student leaves if 3 or more empty neighbors
                    if (empty >= 3)
                        temp[i][j] = 0;
                    else
                        temp[i][j] = 1; // stays
                } else {
                    temp[i][j] = arr[i][j]; // empty seat stays empty
                }
            }
        }

        // copy temp back to arr for next round
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                arr[i][j] = temp[i][j];
    }

    // print final matrix
    printf("Final matrix after %d rounds:\n", k);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {0, 1, 1}
    };
    int r = 3, c = 3, k = 2;

    simulate(arr, r, c, k);
    return 0;
}


// #include<stdio.h>
// int main(){
//     float arr[]={3.1, 2.5, 3.1, 3.7, 3.7, 3.7, 2.0};int index;int max=0;
//     for(int i=0;i<7;i++){int count=0;
//         for(int j=0;j<7;j++){
//             if(arr[i]==arr[j]){count++;if(count>max){max=count;index=i;}}
//         }
//     }
//     printf("gpa with max freq is %f appears  %d times",arr[index],max);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[]={4, 2, -5, 3, 1, -1, 4};int max=arr[0];int count=0;int sum=0;

//     for(int i=0;i<7;i++){
//         if(i>0 && arr[i-1]<0 &&arr[i]<0){sum=0;}
//         sum+=arr[i];if(sum>max){max=sum;} //6
//     }
//    printf("Max sum: %d",max);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[]={1,1,1,0,0,0,1,1,1,1,0,0,0};

//     for(int i=0;i<13;i++){int count=1;  //i=3
//         for(int j=i+1;j<13;j++){
//             if(arr[i]==arr[j])count++;
//             else {printf(" %d:%d ",arr[i],count);break;}  //count=
//         }i+=count;i--;
//     }
  
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[][2]={{1,2},
//                   {3,4},
//                   {5,6}};

//     int rows=sizeof(arr)/sizeof(arr[0]);
//      int col=sizeof(arr[0])/sizeof(arr[0][0]);
//     printf("Rows: %d",rows);
//      printf("Column: %d",col);
//     return 0;

// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct candidate {
//     char *name;   // dynamic name
//     int *votes;   // dynamic array of votes per region
// };

// // Increment votes using . operator
// void incVote(struct candidate *c, int region) {
//     (*c).votes[region]++; // pointer to struct, then .votes
// }

// // Recursive function to sum votes for one candidate
// int totalVotesCandidate(struct candidate *c, int regions, int start) {
//     if (start >= regions) return 0;
//     return (*c).votes[start] + totalVotesCandidate(c, regions, start + 1);
// }

// // Recursive function to sum all candidates
// int totalVotesAll(struct candidate *arr, int n, int regions, int start) {
//     if (start >= n) return 0;
//     return totalVotesCandidate(arr + start, regions, 0) + totalVotesAll(arr, n, regions, start + 1);
// }

// // Find winner using only . operator
// struct candidate* findWinner(struct candidate *arr, int n, int regions) {
//     struct candidate *winner = arr;
//     for (struct candidate *p = arr; p < arr + n; p++) {
//         int votesP = totalVotesCandidate(p, regions, 0);
//         int votesWinner = totalVotesCandidate(winner, regions, 0);
//         if (votesP > votesWinner) winner = p;
//     }
//     return winner;
// }

// int main() {
//     int n = 2;
//     int regions = 3;

//     struct candidate *arr = malloc(n * sizeof(*arr));

//     char *names[] = {"Alice", "Bob"};
//     for (struct candidate *p = arr; p < arr + n; p++) {
//         int idx = p - arr;
//         (*p).name = malloc(strlen(names[idx]) + 1);
//         strcpy((*p).name, names[idx]);
//         (*p).votes = calloc(regions, sizeof(int));
//     }

//     // Increment votes
//     incVote(arr, 0);        // Alice region 0
//     incVote(arr + 1, 1);    // Bob region 1
//     incVote(arr + 1, 1);    // Bob region 1 again

//     // Print winner
//     struct candidate *winner = findWinner(arr, n, regions);
//     printf("Winner: %s\n", (*winner).name);

//     // Free memory
//     for (struct candidate *p = arr; p < arr + n; p++) {
//         free((*p).name);
//         free((*p).votes);
//     }
//     free(arr);

//     return 0;
// }

#include<stdio.h>
struct member{

    char* name;
};
struct Team{
   struct member *p;
};
void insertNew(struct member *p,char str[]){
  strcpy((*p).name,str);p++;
}
void del(struct member *p,struct member *pos,int size){
    int index=pos-p;
  for( i=index;i<size;i++){
     (*p+i).name=(*p+i+1).name;
  }
  
}
void print(struct member *p,int size){
      for( i=0;i<size;i++){
     printf("%s ",(*p+i).name);
  }
}
int main(){
    int n;
    struct member *p=malloc(n*sizeof(*p));
    return 0;
}

// #include<stdio.h>
// int main(){

//     int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d",arr[j][i]);
//         }printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {  int r,c;
//     printf("enter the number of ROWS");
//     scanf("%d",&r);
//     printf("enter the number of COLUMNS");
//     scanf("%d",&c);
    
//     int arr[r][c];
   
//      for(int i=0;i<r;i++)    
//      {
//        for(int j=0;j<c;j++)
//        {
//           scanf("%d",&arr[i][j]);
//        } 
//      }
//      for(int i=0;i<r;i++)    
//      {
//        for(int j=i;j<c;j++) // TRANSPOSE within same array
//        {
//          int temp=arr[i][j];
//           arr[i][j]=arr[j][i];
//           arr[j][i]=temp;
//        } 
//      }for(int i=0;i<c;i++)    
//      {
//        for(int j=0;j<r;j++)
//        {
//           printf("%d ",arr[i][j]);
//        } printf("\n");
//      }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int n=3;
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d",arr[j][i]);
//         }printf("\n");
//     }

//     for(int i=0;i<3;i++){
//        int temp=arr[i][i];
//        arr[i][i]=arr[i][n-1-i];
//         arr[i][n-1-i]=temp;
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d",arr[j][i]);
//         }printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int n=3;
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d",arr[i][j]);
//         }printf("\n");
//     }
//  for(int i=0;i<3;i++)    
//      {
//        for(int j=i;j<3;j++) // TRANSPOSE within same array
//        {
//          int temp=arr[i][j];
//           arr[i][j]=arr[j][i];
//           arr[j][i]=temp;
//        } 
//      }
//    for(int i=0;i<3;i++)    
//      {
//        for(int j=0,k=2;j<k;j++,k--) 
//        {
//          int temp=arr[i][j];
//           arr[i][j]=arr[i][k];
//           arr[i][k]=temp;
//        } 
//      }
// printf("\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d",arr[i][j]);
//         }printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {

//     int arr[3][3] = { {1,2,3},
//                       {4,5,6},
//                       {7,8,9} };

//     int top = 0, bottom = 2;
//     int left = 0, right = 2;
//     int i;

//     while (top <= bottom && left <= right) {

//         // 1. LEFT → RIGHT (top row)
//         for (i = left; i <= right; i++) {
//             printf("%d ", arr[top][i]);
//         }
//         top++;

//         // 2. TOP → BOTTOM (right column)
//         for (i = top; i <= bottom; i++) {
//             printf("%d ", arr[i][right]);
//         }
//         right--;

//         // 3. RIGHT → LEFT (bottom row)
//         if (top <= bottom) {
//             for (i = right; i >= left; i--) {
//                 printf("%d ", arr[bottom][i]);
//             }
//             bottom--;
//         }

//         // 4. BOTTOM → TOP (left column)
//         if (left <= right) {
//             for (i = bottom; i >= top; i--) {
//                 printf("%d ", arr[i][left]);
//             }
//             left++;
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 0, 6},
//         {7, 8, 9}
//     };

//     int m = 3, n = 3;

//     int row[10] = {0};
//     int col[10] = {0};

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }
//        for(int i=0;i<m;i++){
//         if(row[i]==1)
//         for(int j=0;j<n;j++){
//             arr[i][j]=0;
//         }
//     }
//     for(int j=0;j<n;j++){
//         if(col[j]==0)
//         for(int i=0;i<m;i++){
//             ar[i][j]=0;
//     }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 0, 6},
//         {7, 8, 9}
//     };

//     int m = 3, n = 3;
//     int r = 0, c = 0;
//     int count = 0;
//     int tne = m * n;
//     int dir = 1; // 1 = up-right, -1 = down-left

//     // print original matrix
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nDiagonal Traverse: ");

//     while(count < tne){  // <-- fixed
//         printf("%d ", arr[r][c]);
//         count++;

//         if(dir == 1){ // moving up-right
//             if(c == n-1){ r++; dir = -1; }  // right boundary
//             else if(r == 0){ c++; dir = -1; }  // top boundary
//             else{ r--; c++; }  // normal move
//         } else { // moving down-left
//             if(r == m-1){ c++; dir = 1; }  // bottom boundary
//             else if(c == 0){ r++; dir = 1; }  // left boundary
//             else{ r++; c--; }  // normal move
//         }
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 1, 6},
        {7, 8, 1}
    };

    int m = 3, n = 3,flag=0;
    // print original matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int diag=arr[n/2][m/2];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j && arr[i][j]!=diag)flag=1;
        }
    }
if(flag==0)printf("teoplitz matrix");
else printf(" NOT teoplitz matrix");
    return 0;



#include<stdio.h>

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 1, 6},
        {7, 8, 1}
    };

    int m = 3, n = 3,flag=0;
    // print original matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }int res[2][2]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){ int sum=0;
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                   sum+=arr[i+k][j+l];
                }
            }res[i][j]=sum;
        }
    }

      for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

void dfs(int arr[5][5], int i, int j) {
    if(i < 0 || i >= 5 || j < 0 || j >= 5 || arr[i][j] != 1) return;

    arr[i][j] = 0; // mark visited

    // Visit all 4 neighbors recursively
    dfs(arr, i+1, j);
    dfs(arr, i-1, j);
    dfs(arr, i, j+1);
    dfs(arr, i, j-1);
}
int main(){
    int arr[5][5] = {
        {1, 0, 0, 1, 0},
        {0, 1, 1, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 1, 1, 0},
        {1, 0, 0, 0, 1}
    };

    int m = 5, n = 5;int count=0;
    // print original matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){ 
           if(arr[i][j]==1){dfs(arr,i,j);count++;
        }
    }
    }printf("No of islands: %d",count);
    return 0;
}


#include<stdio.h>

void dfs(int arr[3][3], int i, int j,int oldColor,int newColor) {
    if(i < 0 || i >= 3 || j < 0 || j >= 3 || arr[i][j] != oldColor) return;

    arr[i][j] = newColor; // mark visited

    // Visit all 4 neighbors recursively
    dfs(arr, i+1, j,oldColor,newColor);
    dfs(arr, i-1, j,oldColor,newColor);
    dfs(arr, i, j+1,oldColor,newColor);
    dfs(arr, i, j-1,oldColor,newColor);
}
int main(){
   int arr[3][3] = {
        {1,1,1},
        {1,1,0},
        {1,0,1}
    };
    int sr = 1, sc = 1, newColor = 2;

    int m = 3, n = 3;
    // print original matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     int oldColor=arr[sr][sc];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){ 
           if(arr[i][j]==1){dfs(arr,i,j);count++;
        }
    }
    printf("\n");if(oldColor == newColor);
    dfs(arr,sr,sc,oldColor,newColor);
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//    int arr[3][3] = {
//         {1,1,1},
//         {1,1,0},
//         {1,0,1}
//     };

//     int m = 3, n = 3;
//     // print original matrix
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){ 
//            if(i==j){sum+=arr[i][j];}
//         }
//     }int sumP=sum;sum=0;

//      for(int i=0;i<m;i++){
        
//            sum+=arr[i][n-1-i];
        
//     }int sumS=sum;sum=0;

//     sum=sumP+sumS-arr[m/2][n/2];
//     printf("\n");
//    printf("Sum is : %d",sum);
//     return 0;
// }


// #include<stdio.h>
// int sum(int n){
//     if(n%10==n)return n;
//    int tot=n%10;
//    return tot+sum(n/10);
// }
// int main(){
//     int num;  //123
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("\nsum is %d",sum(num));
// }

#include<stdio.h>
#include<string.h>
char* rev(char str[],int start,int end){
    if(start>=end)return str;
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;end--;
    return rev(str,start,end);
}
int main(){
    char str[20];  //123
    printf("Enter a string: ");
    scanf(" %[^\n]",str);
    int size=strlen(str);
    printf("\nreversed is :%s ",rev(str,0,size-1));
}

// #include<stdio.h>
// #include<string.h>
// int mazeSolver(int m,int n, int arr[m][n],int cr,int cc){

//     if(cr==(m-1) && cc==(n-1))return 1;
    
//     int rightways=0;int downways=0;
//     if(cr+1 < m&&arr[cr+1][cc]==1){downways+=mazeSolver(m,n,arr,cr+1,cc);}
//     if(cc+1 <n&&arr[cr][cc+1]==1){rightways+=mazeSolver(m,n,arr,cr,cc+1);}

//     return rightways+downways;
// }
// int main(){
//     int arr[3][3] = {
//         {1,1,1},
//         {1,1,0},
//         {1,1,1}
//     };

//     int m = 3, n = 3;
//     // print original matrix
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Total ways are %d",mazeSolver(m,n,arr,0,0));

// }

// #include<stdio.h>

// void dfs(int arr[3][3], int i, int j,int oldColor,int newColor,int* count) {
//     if(i < 0 || i >= 3 || j < 0 || j >= 3 || arr[i][j] != oldColor) return;

//     arr[i][j] = newColor; count++// mark visited

//     // Visit all 4 neighbors recursively
//     dfs(arr, i+1, j,oldColor,newColor,&count);
//     dfs(arr, i-1, j,oldColor,newColor,&count);
//     dfs(arr, i, j+1,oldColor,newColor,&count);
//     dfs(arr, i, j-1,oldColor,newColor,&count);
//     dfs(arr, i+1, j+1,oldColor,newColor,&count);
//     dfs(arr, i-1, j-1,oldColor,newColor,&count);
//     dfs(arr, i-1, j+1,oldColor,newColor,&count);
//     dfs(arr, i+1, j-1,oldColor,newColor,&count);
// }
// int main(){
//    int arr[3][3] = {
//         {1,1,1},
//         {1,1,0},
//         {1,0,1}
//     };
//     int sr = 1, sc = 1, newColor = 2,count=0;

//     int m = 3, n = 3;
//     // print original matrix
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//      int oldColor=arr[sr][sc];
//     printf("\n");
//     dfs(arr,sr,sc,oldColor,newColor,&count);
//      for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int len=0,size=50;
    
//     char (*str)[size]=malloc(size);
  
//     printf("Enter string :");
//     char c=getchar();str[len]=c;str[len+1]='\0';
//     len++;

//     if(len>size-1){
//         p=realloc(p,size*2);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size=10;int k;
//     int* arr=(int*)malloc(size*sizeof(int));
//     printf("Enter elemenets: ");
//     for(int i=0;i<size;i++){
//         scanf("%d",(arr+i));
//     }
//     printf("Any elements to remove?");
//     scanf("%d",&k);
//     size=size-k;
//     arr=realloc(arr,size*sizeof(int));
//      for(int i=0;i<size;i++){
//         printf(" %d",*(arr+i));
//     }free(arr);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size=10;int n,i=0;
//     int* arr=(int*)malloc(size*4);
//     printf("Enter scores");
//     while((n=getchar())!=-1){
//         arr[i++]=n;
//         if(i>size-1){
//             size*=2;
//             arr=realloc(arr,size*4);
//         }

//     }int sum=0;
//     for(int j=0;j<i;j++){
//         sum+=arr[j];
//     }int avg=sum/i;
//    free(arr);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char srt[]="rumaisa is so fun";
//     char *str=strtok(srt," ");
//     printf(" %s",str);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int brr[]={2,4,5,6};
int inter[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i]==brr[j])inter[i]=arr[i];break;
        }
    }
    for(int i=0;i<2;i++){
        printf("%d ",inter[i]);
    }
    return 0;
}