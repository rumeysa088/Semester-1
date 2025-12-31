#include<stdio.h>
void analysis(int arr[10][10]){
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){              
            if(arr[i][j]==0){count[i]++;}
        }
    }int max=-1;int countDisabled=0;int maxRow;
    for(int i=0;i<10;i++)
    {
         if(count[i]>max){max=count[i];maxRow=i;}
    }
    printf("Max empty spaces are in the row %d\n ",maxRow+1);
//-----------------------------------------------------------------//
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){              
            if(arr[i][j]==3){countDisabled++;}
        }
    }
    if(countDisabled>=10){printf(" 10%% of parking spaces are disabled\n");}
    else
    printf("Less than 10%% of parking spaces are disabled\n");
//-----------------------------------------------------------------//
int contRow = 0;
int largest = 0;

for (int i = 0; i < 10; i++) {
    contRow = 0;largest=0;
    for (int j = 0; j < 10; j++) {
        if (arr[i][j] == 0) {       //00002
            contRow++;
            if (contRow > largest)
                {largest = contRow;}
        } else {
            contRow = 0;  // reset count when a non-zero value is found
        }
    }if(largest >= 4){printf("The largest contiguous horizontal block of empty spaces is %d at row number %d\n", largest,i);}
}

// if (largest >= 4)
//     printf("The largest contiguous horizontal block of empty spaces is %d\n", largest);
// else
//     printf("No contiguous horizontal block of 4 or more empty spaces found (max = %d)\n", largest);

    return;
}
#include<stdio.h>
int main()
{

int arr[][10] = {
{1, 0, 0, 2, 3, 0, 4, 0, 0, 1},
{0, 0, 0, 9, 1, 0, 2, 0, 0, 0},
{2, 1, 0, 0, 0, 4, 3, 4, 0, 0},
{0, 1, 1, 0, 0, 1, 0, 1, 0, 2},
{3, 4, 0, 0, 0, 1, 0, 0, 0, 0}, //
{0, 0, 0, 3, 2, 1, 3, 0, 1, 0},
{1, 2, 3, 4, 0, 0, 0, 0, 1, 2},
{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
{1, 2, 3, 0, 3, 0, 0, 4, 1, 0},
{0, 0, 0, 0, 1, 0, 0, 0, 0, 0}};

int count[10]={0};
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(arr[i][j]==0)count[i]++;
        else if(count[i]>=4)break;
        else count[i]=0;
    }
}int max=-1;int maxr;
for(int i=0;i<10;i++){
  if(count[i]>max){max=count[i];maxr=i;}
}printf("largest continous block is %d spaces long in row %d",max,maxr+1);
return 0;
}
int main(){

    int arr[10][10];
    printf("Enter elements for array within (0-4)");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    analysis(arr);
    return 0;
}
/*
1 0 2 4 3 1 0 4 2 0
0 3 1 4 2 0 1 3 4 1
4 1 0 2 3 4 0 1 2 3
2 4 1 0 3 2 4 0 1 4
0 0 3 1 4 2 3 0 2 1
3 2 4 0 1 4 2 3 0 4
1 4 2 3 0 1 4 2 3 0
0 3 0 2 4 1 0 4 3 2
2 1 4 3 0 2 1 0 4 3
4 0 3 1 2 4 3 0 1 2  */

#include<stdio.h>
int maxHeightgain(int size,int heights[size]){
    int segment=0;int max=0;
    for(int i=0;i<size-1;i++)
    {
        if(heights[i+1]>heights[i]){segment=segment+(heights[i+1]-heights[i]);}
        else{if(segment>max){max=segment;}segment=0;}
    }
    return max;
}
int main(){
       int heights[]={100,180,260,310,40,535,695};
       int size=sizeof(heights)/sizeof(heights[0]);
       printf("Max height gain is %d\n",maxHeightgain(size,heights));
       
    return 0;
}