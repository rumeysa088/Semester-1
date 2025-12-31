#include<stdio.h>
void rev(char** str,int n){
    for(int i=0;i<n;i++){
    int size=strlen(str[i])-1;
    char* s=str[i];char* e=str[i]+size;
    int start=0,end=e-str[i];
    char s1=str[i];
    while(start<=end){
       char temp=s1[start];
       s1[start]=s1[end];
       s1[end]=temp;
       start++;end--;
    }str[i]=s1;
}
}
void sort(char** str,int n){
    for(int i=0;i<n;i++){
    for(int i=0;i<n-1;i++){
        if(strcmp(*(str[i]),*(str[i+1]))>0){
            char temp[100]=*(str[i]);
            *(str[i])=*(str[i+1]);
            *(str[i+1])=temp;
        }
    }}
}
char* concat(char** str,int n){
    int size=100;
   char* cat=malloc(size*sizeof(char));
   cat[0] = '\0';int p=0;
   for(int i=0;i<n;i++){
     if(strlen(str[i])>size-p){size+=strlen(str[i])+1;cat=realloc(cat,size);}
     strcat(cat,str[i]); p+=strlen(str[i]);
   }return cat;
}
int main(){
    int n=7;
    char** str=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        str[i]=malloc(100);
    }
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    rev(str,n);
    sort(str,n);
    concat(str,n);
     for(int i=0;i<n;i++){
        free(str[i]);
    }
    free(str);
    
    return 0;
}

#include<stdio.h>
struct employee{
    char* name;
    char* designation;
    float salary;
};
int main(){
    n=50;
    char** name=(char**)malloc(n*sizeof(char*));
    char** designation=malloc(n*sizeof(char*));
    struct employee *arr=(struct employee*)malloc(n*sizeof(*arr));

    for(int i=0;i<n;i++){
        arr[i].name=name[i];
        arr[i].designation=designation[i];
    }

    return 0;
}

#include<stdio.h>
typedef struct{
    char* title;
    char* name;
    int pages;
}lib;
int main(){
    char** title=malloc(n*sizeof(char*));
    char** author=malloc(n*sizeof(char*));
    lib* arr=malloc(n*sizeof(*arr));
    for(int i=0;i<n;i++){
       arr[i].title=title[i];
       arr[i].author=author[i];
    }
    return 0;
}

#include<stdio.h>
void dfs(int arr[][3],int i,int j,int r,int c){
   if(i>=r || j>=c || i<0 || j<0 || arr[i][j]!=oldcolor)return;
   int newColor=2;
   arr[i][j]=newColor;

   dfs(arr,i+1,j,3,3,1);
   dfs(arr,i-1,j,3,3,1);
   dfs(arr,i,j+1,3,3,1);
   dfs(arr,i,j-1,3,3,1);
}
int main(){
    int arr[3][3] = {
    {1, 1, 1},
    {1, 1, 0},
    {1, 0, 1}
}; 
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");

  }int oldcolor=1;
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       if(arr[i][j]==oldcolor){dfs(arr,i,j,3,3,1);}
    }

  }

    return 0;
}

#include<stdio.h>
typedef struct{
    int num;
    char name[20];
}person;
void insert(person arr[],int* index){
    if(index>=50){printf("Cant add");return;}
   printf("Enter ticket number: "); char str[30];
   scanf("%d",&arr[index].num);
   printf("enter name: ");
   scanf("%s",str);
   strcpy(arr[index].name,str);index++;
}
void select(person arr[],char* str,int n){
     for(int i=0;i<n;i++){
        if(strcmp(arr[i].name,str)==0)sindex=i;
     }
}
int main(){
    person arr[50];int index=0;
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int** arr=malloc(10*sizeof(int*));int c;int rowsize[10];
    for(int i=0;i<10;i++){
        printf("How many columns? ");
        scanf("%d",&c);
        arr[i]=malloc(c*sizeof(int));
        rowsize[i]=c;
        for(int j=0;j<c;j++){
            arr[i][j]=i+1;
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<rowsize[i];j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
     for(int i=0;i<10;i++){
       free(arr[i]);
    }free(arr);
    return 0;
}

#include<stdio.h>
void dfs(int arr[][5],int ir,int ic,int r,int c){
    if(ir<0 || ic<0 || ir>r || ic>c || arr[ir][ic]==1)return;
    arr[ir][ic]=0;

    dfs(arr,ir+1,ic,r,c);
    dfs(arr,ir-1,ic,r,c);dfs(arr,ir,ic+1,r,c);dfs(arr,ir,ic-1,r,c);
}
int find(int ir,int ic,int r,int c,int arr[][5]){
  if(ir<0 || ic<0 || ir>r || ic>c || arr[ir][ic]==1)return 0;
  else if(arr[ir][ic] ==2)dfs(arr,ir,ic,r,c);
  else if(ir==r && ic==c)return 1;
  if(find(ir+1,ic,r,c,arr) || find(ir-1,ic,r,c,arr) || find(ir,ic+1,r,arr) ||find(ir,ic-1,r,arr))return 1;
}
int main(){
    int grid[5][5] = {
        {0, 1, 0, 0, 2},
        {0, 1, 0, 1, 0},
        {0, 0, 2, 1, 0},
        {1, 0, 0, 0, 0},
        {2, 1, 0, 1, 0}
    };

    if(find(0,0,4,4,grid))printf("Path exists");
    else printf("Path dsnt exist");
    return 0;
}

#include <stdio.h>

int fill(int mat[4][5], int sr, int sc, int color, int K) {
    // boundary checks
    if(sr < 0 || sr >= 4 || sc < 0 || sc >= 5) return 0;
    if(mat[sr][sc] != color) return 0;
    if(K <= 0) return 0;

    mat[sr][sc] = -1; // mark as filled
    int count = 1;    // current cell filled

    // recursively fill neighbors
    count += fill(mat, sr+1, sc, color, K-1);
    count += fill(mat, sr-1, sc, color, K-1);
    count += fill(mat, sr, sc+1, color, K-1);
    count += fill(mat, sr, sc-1, color, K-1);

    return count;
}

int main() {
    int mat[4][5] = {
        {1, 1, 2, 2, 3},
        {1, 2, 2, 3, 3},
        {1, 1, 2, 2, 3},
        {3, 3, 3, 3, 3}
    };

    int K = 5;        // max paint units
    int sr = 0, sc = 0; // starting cell

    int maxFill = fill(mat, sr, sc, mat[sr][sc], K);
    printf("Maximum cells filled: %d\n", maxFill);

    return 0;
}

#include<stdio.h>
#include<limits.h>
int min(int a, int b,int c) {
    if(a<b && a<c)return a;
    else if(b<a && b<c)return b;
    else return c;
}
int steps(int n){
    if(n==1)return 0;
      int res2=INT_MAX,res3=INT_MAX,res1=INT_MAX;
    if(n%2==0){res2=steps(n/2);}
    else if(n%3==0){ res3=steps(n/3);}
    else {res1=steps(n-1);}
      
   
    return  1+min(res1,res2,res3);
}
int main(){
    printf("Minimal steps are : %d",steps(10));
    return 0;
}


#include <stdio.h>
#include<limits.h>
int min(int a, int b, int c) {
    int m;
    if (a < b)
        m = a;
    else
        m = b;
    if (c < m)
        m = c;
    return m;
}
int steps(int x,int arr[]){
    if(x<0)return INT_MAX;
    if(x==0)return 0;
    int res1=INT_MAX,res2=INT_MAX,res3=INT_MAX;
    res1=steps(x-arr[0],arr);
    res2=steps(x-arr[1],arr);
    res3=steps(x-arr[2],arr);
    
    return 1+min(res1,res2,res3);
}
int main() {
   int arr[]={1,5,7};
   printf("Number of minimal coins is :%d",steps(11,arr));
    return 0;
}

#include<stdio.h>
#include<string.h>
char* revs(char str[],char rev[],int start,int end){
    if(start<=0){strcat(rev," ");strncat(rev,str,end-start); return rev;};
    if(str[start]==' '){
         if(strlen(rev)!=0){strcat(rev," ");}
         strncat(rev,str+start,end-start);
         end=start;
         
    }start--;
    revs(str,rev,start,end);
}
void merge(char* str,char word[],char rep[]){
   char* posP=strstr(str,word);
   int pos=posP-str;
   for(int i=pos,j=0;i<strlen(rep);j++,i++){
     str[i]=rep[j];
   }
   printf("%s",str);
}
int main(){
    char str[90]="This is test string"; int size=strlen(str);char rev[size+1];
    char* endp=str+size; char* sp; 
    printf("Rev string is : %s\n",revs(str,rev,size,size));char word[50];char rep[50];
  
//    for(int i=0;i<size/2;i++){
//      char temp=str[i];
//      str[i]=str[size-1-i];
//      str[size-i]=temp;
//    }str[size+1]='\0';
//    printf("Totally Rev string is : %s",str);
 printf("Enter word to replace: ");
  scanf("%s",word);
   printf("Enter word to insert: ");
  scanf("%s",rep);
  merge(str,word,rep);
}

 #include<stdio.h>
#include<string.h>
#include<ctype.h>
void remSub(char str[],char sub[]){
   
  printf("string is : %s",str);
}
int main(){
    char str[20];char sub[20];
    printf("Enter string: ");
    scanf("%[^\n]",str);
    printf("Enter string: ");
    scanf("%s",sub);
    remSub(str,sub);
    return 0;
}

#include<stdio.h>
typedef struct{
  char* code;
   int credit;
   int marks;
}subject;
typedef struct{
  int semNo;
    int subjectCount;
    Subject *subjects;  // dynamic array
    float sgpa;
}semester;
typedef struct{
  int roll;
  char* name;
  int semcount;
  semester s;
}student;

student* add(int* n,student* arr,int s){
    int roll;char s[];int count;int num;int sbcount;int subgpa;
    printf("Enter roll to add" );
    scanf("%d",&roll);
   for(int i=0;i<n;i++){
      if(arr[i].roll==roll){printf("Student alr exists");return 0;}
   }
    printf("Enter name" );
    scanf("%s",s);
   student* arr=realloc(arr,n+1);
   arr[n-1].roll=roll;
   strcpy(arr[n-1].name,s);
   arr[n-1].semcount=count;
   arr[n-1].s.semNo=num;
   arr[n-1].s.subjectCount=sbcount;
   arr[n-1].s.sgpa=subgpa;
   for(int i=0;i<s;i++){
      arr[n-1].s.subjects[i].code=code;
   }
   
   return student* arr;
}

int main(){
    int n=2; int subs=2;int s=1;
    char** code=malloc(subs*sizeof(*code));
    student* arr=malloc(n*sizeof(*arr));
    char** name=malloc(n*sizeof(*name));
      
    for(int i=0;i<n;i++){
        name[i]=malloc(100);
    }
     for(int i=0;i<subs;i++){
        code[i]=malloc(100);
    }
    subject* subjects=malloc(subs*sizeof(*subjects));
    semester* sarr=malloc(s*sizeof(*sarr));
  
    
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    int roll;
    char* name;
    int subs;
    int* marks;
    float avgMarks;
}student;
student* create(int n){
   student* arr=malloc(n*sizeof(*arr));
   return arr;
}
void read(student* arr,int n,int s){
      char st[50];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",st);
        strcpy(arr[i].name,st);
        scanf("%d",&arr[i].subs);
        for(int j=0;j<arr[i].subs;j++){
           scanf("%d",&arr[i].marks[j]);
        }
         scanf("%f",&arr[i].avgMarks);
     }
}
void calcAvg(student* arr,int n,int s){
   for(int i=0;i<n;i++){int sum=0;
     for(int j=0;j<arr[i].subs;j++){
         sum+=arr[i].marks[j];
     }arr[i].avgMarks=sum/s;
   }
}
void print(student* arr,int n,int s){
    printf("Enter limit ");int limit;
    scanf("%d",&limit);
   for(int i=0;i<n;i++){int sum=0;
     for(int j=0;j<arr[i].subs;j++){
         sum+=arr[i].marks[j];
     }if(arr[i].avgMarks>limit){printf("Roll %d\n Name %s ",arr[i].roll,arr[i].name);}
   }
}
int main(){
    int n=2;int s=3;

    student *arr = malloc(n * sizeof(student));
    char** name=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        name[i]=malloc(50);
    }
    int** marks=malloc(n*sizeof(int*));
     for(int i=0;i<n;i++){
       marks[i]=malloc(s*sizeof(int));
    }
     for(int i=0;i<n;i++){
        arr[i].name=name[i];
        arr[i].marks=marks[i];
    }

     
   
  
     for(int i=0;i<n;i++){
        free(name[i]);
    }
      for(int i=0;i<n;i++){
        free(marks[i]);
    }
    free(name);free(marks);  
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int capacity=10;
    char* sent=malloc(capacity);
    int ch;int length=0;
     printf("Enter a string: ");
    while((ch = getchar()) != '\n'){
         if(length>capacity-1){
            capacity*=2;
            char* temp=realloc(sent,capacity);
            if(temp==NULL){printf("\nmemory allocation failed");free(sent);return 1;}
            sent=temp;
         }sent[length]=ch;length++;
    }sent[length]='\0';

     printf("You entered: %s\n", sent);
    printf("Total characters: %d\n", length);
   free(sent);

    return 0;
}

 #include<stdio.h>
#include<stdlib.h>
int main(){
    int z=3,y=2,x=2;
    int*** matrix=malloc(z*sizeof(int**));
    for(int i=0;i<z;i++){
        matrix[i]=malloc(x*sizeof(*matrix));
        for(int j=0;j<x;j++){
            matrix[i][j]=malloc(y*sizeof(int));
        }
    }
    for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){
                matrix[i][j][k]=i+j+k;
            }
        }
    }
     for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){
                printf("%d ",matrix[i][j][k]);
            }printf("\n");
        }printf("\n");
    }int sum=0;
      for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){
                sum+=matrix[i][j][k];
            }
        }
    }
    printf("\n Sum of matrix: %d",sum);
       for(int i=0;i<z;i++){
        for(int j=0;j<x;j++){
            free(matrix[i][j]);
        }free(matrix[i]);
    }
free(matrix);
    return 0;
}

#include<stdio.h>
 #include<stdlib.h>
 typedef struct{
    int id;
    char name[50];
    int marks;
 }student;
void input(student** arr,int class,int stud){
    for(int i=0;i<class;i++){
        for(int j=0;j<stud;j++){
            scanf("%d",&arr[i][j].id);  //(*(*(arr+i)+j)).id
            scanf("%s",arr[i][j].name);
            scanf("%d",&arr[i][j].marks);
        }
    }
     for(int i=0;i<class;i++){
        for(int j=0;j<stud;j++){
          printf("ID: %d\nName: %s\nMarks: %d\n",arr[i][j].id,arr[i][j].name,arr[i][j].marks);
        }
    }
}
int main(){
    int class=2;int stud=2;
    student** arr=malloc(class*sizeof(student*));
    for(int i=0;i<class;i++){
        arr[i]=malloc(stud*sizeof(student));
    }

     for(int i=0;i<class;i++){
       free(arr[i]);
    }
    free(arr);
    return 0;
}

#include<stdio.h>
 #include<stdlib.h>
 typedef struct{
    int pId;
    char name[50];
    int quantity;
 }product;
void input(product** arr,int warehouse, int products){
  for(int i=0;i<warehouse;i++){
    for(int j=0;j<products;j++){
        scanf("%d",&arr[i].pId);
        scanf("%[^\n]",arr[i].name);
        scanf("%d",&arr[i].quantity);
    }
  }
  for(int i=0;i<warehouse;i++){
    for(int j=0;j<products;j++){
        printf("Pid: %d Name: %s Quantity: %d\n",arr[i].pId,arr[i].name,arr[i].quantity);
    }
  }
}
int main(){
  int warehouse=2,products=3;
  product** arr=malloc(warehouse*sizeof(product*));
  for(int i=0;i<warehouse;i++){
     arr[i]=malloc(product*sizeof(product));
  }
  input(arr;warehouse,products);
   for(int i=0;i<warehouse;i++){
     free(arr[i]);
  }free(arr);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        arr[i]=i*i;
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;int m=4;
    int *arr=malloc(n*sizeof(int));
    int *brr=malloc(m*4);
    int *crr=malloc((n+m)*sizeof(int));
    
    for(int i=0;i<n;i++){
        arr[i]=i*i;
    }
    for(int i=0;i<m;i++){
        brr[i]=i*i;
    }
     for(int i=0;i<n;i++){
        crr[i]=arr[i];
    }

     for(int i=n;i<n+m;i++){
        crr[i]=brr[i];
    }printf("Arr1: ");
     for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }printf("\nArr2: ");
    for(int i=0;i<m;i++){
        printf(" %d ",brr[i]);
    }printf("\nArr3: ");
    for(int i=0;i<n+m;i++){
        printf(" %d ",crr[i]);
    }

    free(arr);free(brr);free(crr);
    return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
void cap(char str[]){
    int start=0,end=strlen(str)-1;
    while(start<=end){
        if(end==start)str[end]=toupper(str[end]);
        if(str[end]==' '){
           str[end+1]=toupper(str[end+1]);
        }end--;
    }
    printf("%s",str);
}
int main(){ char str[100];
    printf("Enter string: ");
    scanf(" %[^\n]",str);
    cap(str);
    return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int cap(int arr[][3],int r,int c){
  if(r==3){ return 0;}
   
  if(c==3)return cap(arr,r+1,0);

  return (arr[r][c]==1)+ cap(arr,r,c+1);
  
}
int main(){ 
    int arr[][3]={{1,2,1},{4,1,1},{1,0,0}};
    printf("The number of 1s is %d",cap(arr,0,0));
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){ 
    int n;
    printf("How many names u wanna enter? ");
    scanf("%d",&n); char old[100];char new[100];
    char** names=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        *(names+i)=malloc(100);
        scanf(" %[^\n]",*(names+i));
    }
    printf("Enter name to replace: ");
    scanf("%s",old);
    printf("Enter name to replace with: ");
    scanf("%s",new);
    for(int i=0;i<n;i++){
        if(strcmp(old,*(names+i))==0){
            if(strlen(new)>strlen(old) || strlen(new)<strlen(old) ){char* temp=realloc(*(names+i),strlen(new)+1); if(temp==NULL)return 0; else *(names+i)=temp;}
            strcpy(*(names+i),new);}
    }
    for(int i=0;i<n;i++){
        printf("%s  ",*(names+i));
    }
     for(int i=0;i<n;i++){
        free(*(names+i));
    }free(names);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){ 
    int n;int flag=0;char find[30];
    printf("How many strings u wanna enter? ");
    scanf("%d",&n); 
    char** strings=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){

        *(strings+i)=malloc(100);
        scanf(" %[^\n]",*(strings+i));

    int size=strlen(*(strings+i))-1;

    for(int j=0,k=size;j<=size/2;j++,k--){
       if(*(*(strings+i)+j)!=*(*(strings+i)+k)){printf("Not a palindrome!");flag=1;break;}
    }if(flag==0)printf("Palindrome!");
    printf("What word do u wanna search for?");
    scanf("%s",find);
    for(int k=0;k<n;k++){
        if(strstr(*(strings+i),find)){printf("Word foound!");break;}
    }
}

    
    
     for(int i=0;i<n;i++){
        free(*(strings+i));
    }free(strings);
    return 0;
}

#include<stdio.h>
void getData(int n,int arr[]){
    
    for(int i=0;i<n;i++){
        printf("enter no of card %d: ",i);
        scanf("%d",&arr[i]);
    }
}
void sort(int n,int arr[]){
    int sumArr[n];
  for(int i=0;i<n;i++){
    int sum=0;
        int temp = arr[i];
       while(temp > 0){
       sum += temp % 10;
       temp /= 10;
      }sumArr[i]=sum;
    }for(int j=0;j<n;j++){
    for(int i=0;i<n-1;i++){
        if(sumArr[i]>sumArr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            int temp2=sumArr[i];sumArr[i]=sumArr[i+1];sumArr[i+1]=temp2;
        }
    }}
}
void display(int n,int arr[]){
     for(int i=0;i<n;i++){
        printf("Card no %d  : %d\n",i,arr[i]);
    }
}
int main(){
     int n;
    printf("How many cards do u have?");
    scanf("%d",&n);
    int arr[n];
    getData(n,arr);
    sort( n, arr);
    display( n, arr);
    return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int border(int arr[][3],int r,int c){
   if(r==3)return 0;
   
    if(c==3) return border(arr,r+1,0);

    if(r==0 || r==2 || c==0 || c==2)return arr[r][c]+border(arr,r,c+1);
     else return border(arr,r,c+1);
}
int main(){ 
    int arr[][3]={{1,2,1},{4,1,6},{9,0,0}};
    printf("The sum of border elements is %d",border(arr,0,0));
    return 0;
}