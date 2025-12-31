// #include<stdio.h>
// struct result{
//     char name[20];
//     int mid;
//     int final;
//      int total;
//      char grade;
// };
// void calct(struct result *a ){
//     return (*a).mid+(*a).final;
// }
// void gradeCalc(struct result *a){
//     if (*a).total<=85 return 'A';
//     else if(*a).total<=70 return 'B';
//     else if(*a).total<=60 return 'C';
//     else return 'F';
// }

// int main(){
   
//     // int mid=55;
//     // int final=70;
//     // int total=calct(mid,final);
//     // char grade=gradeCalc(total);
    
// }

// #include<stdio.h>
// struct products{
//    char name[20];
//    int price;
//    int quantity;
// }
// void get_info(int cheapness){
//     if(cheapness==0){
//         for(int i=0;i<8;i++){
//             if(arr[i].price<20){
//             printf("%s",arr[i].name);
//             printf("%d",&arr[i].price);
//             printf("%d",&arr[i].quantity);
//             }
//         }
//     }
// }
// int main(){
//      struct products arr[8];int cheap;
//      for(int i=0;i<8;i++){
//         scanf("%s",arr[i].name);
//          scanf("%d",&arr[i].price);
//           scanf("%d",&arr[i].quantity);
//      }
//  printf("Enter cheapness level: 0 cheap 1 mod 2 exp");""
//  scanf("%d",&cheap);
// return 0; 
// }

// #include<stdio.h>
// int main(){ int sum=0;int max=0;int index;
//      int arr[5][4];
//      for(int i=0;i<5;i++){
//         for(int j=1;j<4;j++){
//            sum+=arr[i][j];
//         }if(sum>max){max=sum;index=i;}sum=0;
//      }
//  printf("Max profit is %d of district %d",max,index);
// return 0; 
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<ctype.h>
// bool isVowel(char c){
//     if(c=='a'||c=='e'|| c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
//     else return false;
// }
// bool isCapital( char c){
//     if(c>='A'&& c<='Z')return true;
//     else return false;
// }
// int main(){ 
//     char str[50];int index;int flag=0;
//     printf("Enter word: ");
//     scanf(" %s",str);
//     int size=strlen(str);
//    char temp[50]="";
//    if(strstr(str,"sch")!=NULL){strncpy(temp,str+3,size-3);strcat(temp,"sk");  strcat(temp,"ay");printf("String is : %s", temp);return 0;}
//   if(isCapital(str[0])){flag=1;str[0]=tolower(str[0]);}
//  for(int i = 0; i < size; i++){

//         if(isVowel(str[i])) {
//             index = i;
//             break;  
//         }
//     }
    
//     if(index == 0){ 
//         // Starts with vowel
//         strcpy(temp, str);
//         strcat(temp, "way");
//     }
//     else if(index > 0){ 
//     // Starts with consonants
    
//     // Add part from vowel to end
//     int pos = 0;  // Current position in temp
//     for(int i = index; i < size; i++){
//         temp[pos] = str[i];
//         pos++;
//     }
    
//     // Add initial consonants
//     for(int i = 0; i < index; i++){
//         temp[pos] = str[i];
//         pos++;
//     }
//     if(flag==1){temp[0]=toupper(temp[0]);}
//     strcat(temp,"ay");
// } 
  

//     printf("String is : %s", temp);
//     return 0; 
// }

// #include<stdio.h>
// void add_app(app a){
//     app* ptr=a;
//     scanf("%s",(*(ptr)).pname);
//     scanf("%d",&(*(ptr)).token);
//     scanf("%d",&(*(ptr)).sever);
//     scanf("%s",(*(ptr)).dname);
// }
// void highest_sever(app arr,int size){
//     int max=0;int index;
//     for(int i=0;i<size;i++){
//       if(arr[i].sever>max){max=arr[i].sever;index=i;}
//     }
//     printf("Patient : %s  severity %d",arr[index].pname,arr[index].sever  );
// }
// typedef struct Appointment{

//     char pname[30];
//     int token;
//     int sever;
//     char dname[30];
// }app;
// int main(){
//     return 0;
// }

// #include<stdio.h>
// int etime(int n){
//     if(n==1)return 2;
//     int time=n*2;
//     time+=etime(n-1);
//     return time;
// }
// int main(){
//     printf("time for 2 floors will be: %d",etime(2));
//     return 0;
// }

// #include<stdio.h>
// int ways(int current,int final,int k){
//     if(k==0){if(current==final)return 1;else return 0;}
//     return ways(current-1,final,k-1)+ways(current+1,final,k-1)+ways(current+2,final,k-1);
// }
// int main(){
//     printf("To go from 2 to 4 in %d ways :",ways(2,4,3));
//     return 0;
// }

// #include <stdio.h>

// // Recursive function to count number of 1s in a 2D array from (0,0) to (r,c)
// int countOnes(int arr[][2], int r, int c) {
//     // Base case: if indices are out of bounds
//     if (r < 0 || c < 0) return 0;

//     // Current cell + cells above + cells left - double-counted top-left
//     return arr[r][c] 
//            + countOnes(arr, r - 1, c) 
//            + countOnes(arr, r, c - 1) 
//            - countOnes(arr, r - 1, c - 1);
// }

// int main() {
//     int arr[2][2] = {
//         {1, 0},
//         {0, 1}
//     };

//     int rows = 2, cols = 2;

//     int totalStudents = countOnes(arr, rows - 1, cols - 1);
//     printf("There are %d students\n", totalStudents);

//     return 0;
// }



// #include<stdio.h>
//  #include<string.h>
// int parse(char str[],int index){

    
//     if(str[index]=='B'){printf("Burgers b x %c",str[index]);}
//     if(str[index]=='A'){printf("Apple pie a x %c",str[index]);}
//     if(str[index]=='C'){printf("Chips c x %c",str[index]);}
// }
// int main(){
//     char str[20];
//     printf("Enter string: ");
//     scanf("%s",str);
//     // int index=strlen(str);
//     parse(str,0);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// bool isVowel(char c){
//     if(c=='a'||c=='e'|| c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
//     else return false;
// }
// void rev(char str[], int index){
//     if(str[index]=='\0')return;
//     rev(str,index+1);
//     if(isVowel(str[index]))printf("%c ",str[index]);
// }
// int main(){
//     char str[20];
//     printf("Enter string: ");
//     scanf("%s",str);
//     rev(str,0);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// bool isVowel(char c){
//     if(c=='a'||c=='e'|| c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
//     else return false;
// }
// char* reverseVowels(char str,int end) {
//    int start=0
//      while (start< end) {
//         while (start < end && isVowel(s[start]) == 0) {
//             start++;
//         }
//         while ( start < end && isVowel(s[end]) == 0) {
//             end--;
//         }
//         char temp = s[start];
//         s[start] = s[end];
//         s[end] = temp;

//         left++;
//         right--;
//     }
//    return str;
// }
// int main(){
//     char str[20];
//     printf("Enter string: ");
//     scanf("%s",str);
//   int size=strlen(str);
//    printf("Reversed voweled string: %s",reverseVowels(str,size));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[5][8]={"abc","car","ada","racecar","cool"};
//     for(int i=0;i<5;i++){  //i=2
//         int flag=0;
//         int k=strlen(str[i])-1; //k=2
//         int j=0;
//         while(j<k){  //1<=1
//             if(str[i][j]!=str[i][k]){flag=1;}
//             k--;j++;
//         }if(flag==0){printf("%s is palindrome",str[i]);break;}
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     int arr[]={1,0,2,0,0,4}; //120040
//     for(int i=0;i<6;i++){
//         if(arr[i]==0){
//             for(int j=i;j<6;j++){
//                 arr[j]=arr[j+1];
//             }arr[5]=0;
//         }
//     }
//     for(int i=0;i<6;i++){
//         printf(" %d",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){

//     char s[]="hello";
//     int size=strlen(s)-1;
//     for(int i=0,j=size;i<j;i++,j--){
//         char temp=s[i];
//         s[i]=s[j];
//         s[j]=temp;
//     }
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//   int arr[]={1,2,2,3,4,4};
//  int n=6;
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             for(int k=j;k<n;k++){
//                 arr[k]=arr[k+1];
//             }n--;
//         }
//     }
//   }
//     for(int i=0;i<n;i++){
//         printf(" %d",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int isNum(char c){
//     if(c=='1' || c=='2'|| c=='3' || c=='4'|| || c=='5'|| || c=='6'|| || c=='7'|||| c=='8'|| || c=='9' ) return 1;else return 0;
// }
// int ifValid(char str[]){
//     int size=strlen(str);
//     int flag=0;int flag1=0;
//     for(int i=0;i<size;i++){
//        if(str[i]!=tolower(str[i]))flag=1;
//     }if(flag==1)return 0; 
//      for(int i=0;i<size-1;i++){
//        if(isNum(str[i+1])==0)flag1=1;
//     }if(flag1==1)return 0; else return 1;

// }
// int main(){
//     char str[20];
//  printf("Enter string: ");
//  scanf("%d",str);
// if( ifValid(str);)printf("Valid");else printf("Inalid");
//     return 0;
// }

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rev(char str[]){
    char res[100] = "";
     int wordEnd= strlen(str);
    
    for(int i =strlen(str)-1; i >= 0; i--) {
        if(str[i] == ' ') {
            if(strlen(res) > 0) {
                strcat(res," ");
            }
            strncat(res, str + i + 1, wordEnd - i - 1);
            wordEnd = i;
        }
    }
    if(strlen(res) > 0) {
        strcat(res," ");
    }
    strncat(res, str, wordEnd);
    printf("%s", res);
}
int main(){
    char str[20];;
    printf("Enter string: ");
    scanf("%[^\n]",str);
   rev(str);
    return 0;
}

//  #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// void remSub(char str[],char sub[]){
//     int size=strlen(str);
//     char *pos=strstr(str,sub);
//     int index=pos-str;
//    int sublen=strlen(sub);
    
//     for(int i=index;i<size;i++){
//         str[i]=str[i+sublen];
//     }
//   printf("string is : %s",str);
// }
// int main(){
//     char str[20];char sub[20];
//     printf("Enter string: ");
//     scanf("%[^\n]",str);
//     printf("Enter string: ");
//     scanf("%s",sub);
//     remSub(str,sub);
//     return 0;
// }

//  #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int main(){
//     char str1[20];char str2[20];char common[10];
//     printf("Enter string: ");
//     scanf("%s",str1);
//     printf("Enter string: ");
//     scanf("%s",str2);
// int size=strlen(str1);int index=0;
//     for(int i=0;i<size;i++){
//        if(strncmp(str1,str2,i)==0)index=i;
//     }
//     strncat(common,str1,index);
//     printf(" length %d common: %s",index,common);
    
//     return 0;
// }

 #include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str1[]="Rumaisa";char str2[]="Ali Khan";
   strcat(str1,str2+3);
   printf("%s",str1);
    return 0;
}

#include <stdio.h>
#include <string.h>

int firstUniqChar(char* s) {
    int freq[26] = {0};
    int n = strlen(s);

    for (int i = 0; i < n; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; i < n; i++)
        if (freq[s[i] - 'a'] == 1)
            return i;

    return -1;
}

int main() {
    char s[30] = "leetcode";
    printf("%d", firstUniqChar(s));
    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
  char str1[20];char str2[20];  int freq1[26];int freq2[26];
   
     for(int i=0;i<26;i++){
       freq1[i]=0; freq2[i]=0;
    }
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    int size1=strlen(str1);
    int size2=strlen(str2);

    for(int i=0;i<size1;i++){
        freq1[str1[i]-'a']++;
    }
     for(int i=0;i<size1;i++){
        freq2[str2[i]-'a']++;
    }
     for(int i=0;i<26;i++){
        if(freq2[i]!=freq1[i]){printf("anagrams not possible");return 0; }
    }
    printf("anagrams possible");
    return 0;
}

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct Student{
    char *name;
    int* marks;
    int subjects;
};
int totalMarks(int** marks, int n, int subjects) {
    int total = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < subjects; j++)
            total += marks[i][j];
    return total;
}
void print(int** marks, char** name, int n, int subjects) {
    for(int i = 0; i < n; i++) {
        printf("Name: %s\nMarks: ", name[i]);
        for(int j = 0; j < subjects; j++)
            printf("%d ", marks[i][j]);
        printf("\n");
    }
}
int main() {
    int n=7;int subjects=5;
    struct Student *p=malloc(n*sizeof(*p));
    int** marks=malloc(n*sizeof(*marks));
   for(int i=0;i<n;i++){
        marks[i]=malloc(subjects*sizeof(int));
    }  
    char** name=malloc(n*sizeof(*name));
    for(int i=0;i<n;i++){
        name[i]=malloc(50);
    }

   totalMarks(marks,n);
   print(marks,name,n);
   free(marks);
   free(p);
   free(name);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct Book {
    char *title;
    char *author;
    int pages;
};
void find(char** title ,int n){
    char str[10];int found=0;
    printf("Enter book title you wanna find: ");
    scanf("%[^\n]",str);
    for(int i=0;i<n;i++){
        if(strcmp(title[i],str)==0)found=1;
    }if(found==1)printf("\nBook found");
    else printf("\nBook NOT found");
}
void print(struct Book* p,int n){
    for(int i=0;i<n;i++){
        printf("Name: %s Author: %s pages: %d",p[i].title,p[i].author,p[i].pages);
    }
}
int main() {
    int n=7;
   struct Book* p;
   p=malloc(n*sizeof(*p));
   
   char** title=malloc(n*sizeof(*title));
   for(int i=0;i<n;i++){
     title[i]=malloc(10);
   }
    char** author=malloc(n*sizeof(*author));
   for(int i=0;i<n;i++){
     author[i]=malloc(10);
   }
   for (int i = 0; i < n; i++) {
    p[i].title = title[i];
    p[i].author = author[i];
}
    find(title,n);
   print(p,n);
     for(int i=0;i<n;i++){
     free(title[i]);
   }
   for(int i=0;i<n;i++){
     free(author[i]);
   }
   free(p);
   free(title);
   free(author);
    
   
    return 0;
}

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void update(int** p,int i,int j){int num;
    printf("what is the updates value? ");
    scanf("%d",&num);
    *(*(p+i)+j)=num;
}
int total_treasure(int **p,int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=p[i][j];
        }
    }
    return sum;
}scanf("%d",&arr[i][j].id);
int main() {
    int m=5,n=5;

    int** p=malloc(m*sizeof(*p));
    for(int i=0;i<m;i++){
        p[i]=calloc(n,sizeof(int));
    }

    update(p,1,2);
    printf("Total Treasure: %d ",total_treasure(p,m,n));
     for(int i=0;i<m;i++){
        free(p[i]);
    }
    free(p);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct Employee {
    char *name;
    char *designation;
    float salary;
};
void inc(struct Employee *b,int per){
   (*p).salary+= ((*p).salary)*per;
}
int main() {
   int n=5;
   struct Employee* p=malloc(n*sizeof(*p));
   char **name=malloc(n*sizeof(*name));
     char **desig=malloc(n*sizeof(*desig));
   for(int i=0;i<n;i++){
     name[i]=malloc(10);
     desig[i]=malloc(10);
   }
   for(int i=0;i<n;i++){
     p[i].name= name[i];
     p[i].designation=desig[i];
   }
   free(p);
   free(name);
   free(desig);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *name;
    int subjects;
    int *marks;
};

// ----------------------------------------------
// 1) Swap by Value (original structs unchanged)
// ----------------------------------------------
void swapByValue(struct Student s1, struct Student s2) {
    struct Student temp = s1;
    s1 = s2;
    s2 = temp;

    printf("\nInside swapByValue():\n");
    printf("Student1 = %s, Student2 = %s\n", s1.name, s2.name);
}

// ----------------------------------------------
// 2) Swap by Reference (actual swap)
// ----------------------------------------------
void swapByReference(struct Student *s1, struct Student *s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

// ----------------------------------------------
// 3) Swap using Pointer-to-Pointer
// ----------------------------------------------
void swapByPointerToPointer(struct Student **p1, struct Student **p2) {
    struct Student *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// ----------------------------------------------
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Subjects: %d\n", s.subjects);
    printf("Marks: ");
    for (int i = 0; i < s.subjects; i++)
        printf("%d ", s.marks[i]);
    printf("\n");
}
// ----------------------------------------------

int main() {

    struct Student s1, s2;

    // Allocate memory
    s1.name = malloc(20);
    s2.name = malloc(20);

    s1.subjects = 3;
    s2.subjects = 3;

    s1.marks = malloc(s1.subjects * sizeof(int));
    s2.marks = malloc(s2.subjects * sizeof(int));

    // Assign test data
    strcpy(s1.name, "Ali");
    s1.marks[0] = 10; s1.marks[1] = 20; s1.marks[2] = 30;

    strcpy(s2.name, "Sara");
    s2.marks[0] = 40; s2.marks[1] = 50; s2.marks[2] = 60;

    printf("\nBefore ANY swap:\n");
    printStudent(s1);
    printStudent(s2);

    // ------------------------------------------
    // Swap by VALUE (does NOT change originals)
    // ------------------------------------------
    swapByValue(s1, s2);

    printf("\nAfter swapByValue (original unchanged):\n");
    printStudent(s1);
    printStudent(s2);

    // ------------------------------------------
    // Swap by REFERENCE (actual swap)
    // ------------------------------------------
    swapByReference(&s1, &s2);

    printf("\nAfter swapByReference (original swapped):\n");
    printStudent(s1);
    printStudent(s2);

    // ------------------------------------------
    // Swap using pointer-to-pointer
    // ------------------------------------------
    struct Student *p1 = &s1;
    struct Student *p2 = &s2;

    swapByPointerToPointer(&p1, &p2);

    printf("\nAfter swapByPointerToPointer (pointers swapped again):\n");
    printStudent(*p1);
    printStudent(*p2);

    // Free memory
    free(s1.name);
    free(s2.name);
    free(s1.marks);
    free(s2.marks);

    return 0;
}
