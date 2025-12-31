#include<stdio.h>
#include<string.h>
struct Movie{
char title[50];
char genre[20];
char director[30];
int year;
float rating;
};
void displayMovies(struct Movie m[],int count){
 for(int i=0;i<count;i++)
    printf("Title:%s\nGenre:%s\nDirector:%s\nYear:%d\nRating:%.1f\n\n",m[i].title,m[i].genre,m[i].director,m[i].year,m[i].rating);
}
void addMovie(struct Movie m[],int *count){
    printf("Enter title: ");scanf(" %[^\n]",m[*count].title);
    printf("Enter genre: ");scanf(" %[^\n]",m[*count].genre);
    printf("Enter director: ");scanf(" %[^\n]",m[*count].director);
    printf("Enter year: ");scanf(" %d",&m[*count].year);
    printf("Enter rating: ");scanf(" %f",&m[*count].rating);
    (*count)++;
}
void searchByGenre(struct Movie m[],int count,char *g){
    int found=0;for(int i=0;i<count;i++){if(strcmp(m[i].genre,g)==0){printf("Title:%s\nGenre:%s\nDirector:%s\nYear:%d\nRating:%.1f\n\n",m[i].title,m[i].genre,m[i].director,m[i].year,m[i].rating);found=1;}}
    if(!found)printf("No movies found in genre %s\n",g);
}
int main(){
    struct Movie movies[100];
    int count=0,choice;
    char genre[20];
while(1){
printf("1.Add movie 2.Search by genre 3.Display all 4.Exit\n");
scanf("%d",&choice);
    if(choice==1)addMovie(movies,&count);
    else if(choice==2){printf("Enter genre to search: ");scanf(" %[^\n]",genre);searchByGenre(movies,count,genre);}
    else if(choice==3)displayMovies(movies,count);
    else break;
}
return 0;
}
