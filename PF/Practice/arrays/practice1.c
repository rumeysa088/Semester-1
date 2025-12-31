#include <stdio.h>

int main() {
            int arr[]={1,2,3,4,5,6,7,8};int count=0;int x=12;
            for(int i=0;i<8;i++)
            {
              for(int j=i+1;j<8;j++)
              {
                  if(arr[i]+arr[j]==x){count++;
                  printf("(%d,%d)\n",arr[i],arr[j]);}
              }
            }printf("%d",count);

    return 0;
}


#include <stdio.h>

int main() {
            int arr[]={1,2,3,4,5,6,7,8};int count=0;int x=12;
            for(int i=0;i<8;i++)
            {
              for(int j=i+1;j<8;j++)
              {
                 for(int k=j+1;k<8;k++)       //TRIPLETS
                 {
                     if(arr[i]+arr[j]+arr[k]==x)
                     {count++;
                      printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                     }
                 }
              }
            }printf("%d",count);

    return 0;
}

#include <stdio.h>
int main() { 
             char str[]="hi my name is rumaisa";
             int count[26]={0};
         for(int i=0;str[i]!='\0';i++)
         {
            int index=str[i]%'a';
             count[index]++;                       //no. of OCCURENCES
         } printf(" no of a's is %d\n",count[0]); 
           printf(" no of b's is %d\n",count[1]);
           printf(" no of c's is %d\n",count[2]);
           printf(" no of d's is %d\n",count[3]);
           printf(" no of e's is %d\n",count[4]);
    return 0;
}
#include <stdio.h>
int main() { 
             char str[]="hi my name is rumaisa";
             
         for(int i=0;str[i]!='\0';i++)
         {
            if(str[i]==' '){str[i+1]=str[i+1]-32;}
         } printf("%s",str);
    return 0;
} 

#include<stdio.h>
int main(){
            int arr[]={5,4,3,2,1,6,9,2,5,67,23};
            int size=sizeof(arr)/sizeof(arr[0]);
           
    for(int k=0;k<size;k++){
    for(int i=0;i<size;i++)
    {
       if(arr[i]>arr[i+1])
       {
          int temp=arr[i];           //BUBBLE SORT
          arr[i]=arr[i+1];
          arr[i+1]=temp;
       }
     
    }}
    for(int i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }
    
    return 0;
}  