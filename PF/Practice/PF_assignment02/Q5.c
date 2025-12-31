#include<stdio.h>
void encode(char message[256],int *count){
               printf("Enter the message you want to encode: \n");
               scanf(" %[^\n]",message);
              int i=0;int temp;
         while(message[i]!='\0')
         {  
            (*count)++;i++;
         }
         for(int j=0,k=(*count)-1;j<k;j++,k--)
         {
            temp=message[j]; 
            message[j]=message[k];  
            message[k]=temp;  
         }
         for(int i=0;i<*count;i++)
         {
            message[i]=message[i]^ (1 << 1); 
            message[i]=message[i]^ (1 << 4);      
         }
         printf("ENCODED MESSAGE: ");
         for(int i=0;i<*count;i++)
         {
           printf("%c",message[i]); 
         }
         printf("\n");
  return;
}
void decode(char message[256],int count){
                 int temp;
      for(int i=0;i<count;i++)
         {
            message[i]=message[i]^ (1 << 1);  //LBA
            message[i]=message[i]^ (1 << 4);      
         }
      for(int j=0,k=count-1;j<k;j++,k--)
         {
            temp=message[j]; 
            message[j]=message[k];  
            message[k]=temp;  
         } 
      printf("DECODED MESSAGE: ");
         for(int i=0;i<count;i++)
         {
           printf("%c",message[i]); 
         }       
         printf("\n");
  return;
}
int main(){
            int opt;char message[256];int count=0;
  do{
  printf("\t\t=======MENU OPTIONS========\t\t\n");
  printf("\nSelect one from below\n");
  printf("1:Encode message\n2:Decode message\n3:Exit\n");
  scanf("%d",&opt);

  switch(opt)
  {
    case 1:  //encode
           encode(message,&count);
    break;

    case 2:  //decode
           decode(message,count);
    break;

    case 3:break;

    default:
            printf("Invalid Option try again\a\n");
    break;
  }
  }while(opt!=3);


    return 0;
}