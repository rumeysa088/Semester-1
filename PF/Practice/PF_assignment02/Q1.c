#include<stdio.h>  //LBA:LOOK BACK AT
void addBook(int isbns[],char titles[][50],float prices[],int quantities[],int *bookCount,int temp)
{   int found;
             found=0;
                for(int i=0;i<*bookCount;i++)
                {
                   if(isbns[i]==temp){found=1;break;}
                    
                }if(found==0)
                {
                    isbns[*bookCount]=temp;
                    printf("Enter book title: ");
                   scanf(" %[^\n]",titles[*bookCount]); //LBA
                   printf("Enter book Price: ");
                   scanf("%f",&prices[*bookCount]);
                   printf("Enter book's quantity: ");
                   scanf("%d",&quantities[*bookCount]);
                    (*bookCount)++;                      //LBA
                }if(found==1)printf("Book already exists\n");
                return;
}
void processSale(int isbns[],int quantities[],int *bookCount,int temp,int copies)
{
    int found;
             found=0;
                for(int i=0;i<*bookCount;i++)
                {
                   if(isbns[i]==temp)
                   {
                    found=1;if(copies>quantities[i]){printf("Error: Not enough stock available.\n");}
                    else{quantities[i]-=copies;break;}
                   }
                    
                }if(found==0)
                {
                    printf("Book Not Found\n\a");
                }
    return;
}
void lowStock(int isbns[],char titles[][50],int quantities[],int *bookCount)
{    printf("Following Books are low on stock\n");
     for(int i=0;i<*bookCount;i++)
     {
        if(quantities[i]<5){printf("ISBN: %d, Title: %s, Quantity: %d\n", isbns[i], titles[i], quantities[i]);
}
     }
    return;
}
int main(){
               int isbns[100];  int opt; int bookCount=0;
               char titles[100][50];int temp,copies;
               float prices[100];
               int quantities[100];
        do{
        printf("\t\t\t\tMENU OPTIONS\t\t\n");
        printf("1: Add new Book\n2: Process a Sale\n3: Generate low stock report\n4: Exit\n");
        scanf("%d",&opt);

        switch(opt)
        {
          case 1:
                printf("Enter Book's ISBN");
                scanf("%d",&temp);
                addBook(isbns,titles,prices,quantities,&bookCount,temp); //LBA
                
          break;

          case 2:
                printf("Enter Book's ISBN");
                scanf("%d",&temp);
                printf("How many copies have been sold?");
                scanf("%d",&copies);
                processSale(isbns,quantities,&bookCount,temp,copies);

          break;

          case 3:
                 lowStock(isbns,titles,quantities,&bookCount);
          break;

          case 4:
          break;

          default:
                 printf("Invalid Menu Option\a\n");
          break;
        }
  }while(opt!=4);

    return 0;
}