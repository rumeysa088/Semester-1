#include<stdio.h>
#include<string.h>
void encrypt(char* *usernames,char** passwords){
    for(int i=0;i<100;i++){
        for(int j=0;usernames[i][j]!='\0';j++){
              usernames[i][j]+=i;
        }
    }
     for(int i=0;i<100;i++){
        for(int j=0;passwords[i][j]!='\0';j++){
             passwords[i][j]+=i;
        }
    }
}
void decrypt(char* *usernames,char** passwords){
    for(int i=0;i<100;i++){
        for(int j=0;usernames[i][j]!='\0';j++){
              usernames[i][j]-=i;
        }
    }
     for(int i=0;i<100;i++){
        for(int j=0;passwords[i][j]!='\0';j++){
             passwords[i][j]-=i;
        }
    }
}
int find(char* *usernames,char** passwords,char* dbusername,char* dbpass){
     decrypt(usernames,passwords);
       int found=0;
       for(int i=0;i<100;i++){
       if((strcmp(usernames[i],dbusername)==0)&& (strcmp(passwords[i],dbpass)==0)){found=1;return 1;}
       
    }
    encrypt(usernames,passwords);
    if(found==0)return 0;
}
int main(){
   char* usernames[100];char* password[100];
   usernames=malloc(100*sizeof(char*));
   for(int i=0;i<100;i++){
    usernames[i]=malloc(50);
   }
    return 0;
}