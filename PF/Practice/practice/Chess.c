#include<stdio.h>

int case1(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx+3 >4 || *newy+1 > 4) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx+3][*newy+1] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx+=3;*newy+=1;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case2(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx-1 < 0 || *newy+2 > 4) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx-1][*newy+2] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx-=1;*newy+=2;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;

}
int case3(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx+2 > 4 || *newy+1 > 4) 
      {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx=*x][*newy+1] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx+=2;*newy+=1;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case4(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx+1 > 4 || *newy+2 > 4) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx+1][*newy+2] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx+=1;*newy+=2;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case5(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx-2 < 0 || *newy-1<0) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx-2][*newy-1] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx-=2;*newy-=1;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case6(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx-1 < 0 || *newy-2 <0) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx-1][*newy-2] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx-=1;*newy-=2;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case7(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx+2 >4 || *newy-1 <0) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx+2 >4][*newy-1] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx+=2;*newy-=1;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int case8(char dung[5][5], int *flag, int *x, int *y, int *newx, int *newy) {
    *newx=*x;*newy=*y;
    if(*newx+1>4 || *newy-2<0) 
        {*flag = 0;printf("Out of Bounds\n");}
    else if(dung[*newx+1][*newy-2] == 'T') {
        printf("TRAP got u\n");
        *flag = 1;
    } else {
        *newx+=1;*newy-=2;
        *x = *newx;
        *y = *newy;
        printf("New position (%d,%d)\n", *x, *y);*flag=0;
        dung[*x][*y]='K';
    }
    if(*x==4&&*y==3){printf("YOU WON");*flag=1;}
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }
    return *flag;
}
int main() {
  char dung[5][5] = {
    {'_', '_', '_', '_', '_'},
    {'_', 'T', '_', 'T', '_'},
    {'_', '_', '_', '_', '_'},
    {'T', '_', '_', '_', '_'},
    {'_', '_', '_', 'E', '_'}
};

printf("TRY TO EXIT THE DUNGEON\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",dung[i][j]);
        }printf("\n");
    }

    int flag = 0;
    int x = 0, y = 0;
    int newx = 0, newy = 0;
    int move;

    do { 
        printf("Enter your move (1–8):\n"
               "1. 3 Down + 1 Right\n"
               "2. 1 Up + 2 Right\n"
               "3. 2 Down + 1 Right\n"
               "4. 1 Down + 2 Right\n"
               "5. 2 Up + 1 Left\n"
               "6. 1 Up + 2 Left\n"
               "7. 2 Down + 1 Left\n"
               "8. 1 Down + 2 Left\n");
        scanf("%d", &move);

        switch (move) {
            case 1:  
                      case1(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 2:  
                      case2(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 3:
                      case3(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 4:
                      case4(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 5:
                      case5(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 6:
                      case6(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 7:
                       case7(dung,&flag,&x,&y,&newx,&newy);
                break;
            case 8:
                      case8(dung,&flag,&x,&y,&newx,&newy);
                break;
            default:
                printf("Invalid Option, try again\a\n");
                break;
        }
    } while(flag == 0);

    return 0;
}
