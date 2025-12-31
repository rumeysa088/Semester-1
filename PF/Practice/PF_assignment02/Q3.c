#include<stdio.h>
void updateStatus(int row,int column,int grid[row][column])
{     int x,y,opt,bitPos;
    printf("Enter the coordinates of the element you want to change: (x,y) ");
    scanf("%d %d",&x,&y);
    if (x < 0 || x >= row || y < 0 || y >= column) {
    printf("Invalid coordinates!\n");
    return;
    }
    printf("do you want to set or clear a specific status flag?1 for set 0 for clear ");
    scanf("%d",&opt);
    printf("Which status do you want to update?\n");
    printf("0: Power\n1: Overload\n2: Maintenance\n");
    scanf("%d", &bitPos);
    if(opt==0){grid[x][y]=grid[x][y]&~(1<< bitPos) ;}
    else if(opt==1){ grid[x][y]=grid[x][y]|(1<< bitPos) ;}
   
    return;
}
void sectorStatus(int row,int column,int grid[row][column]){
                    int x,y;
    printf("Enter the coordinates of the element you want to check status of:(x,y) \n");
    scanf("%d %d",&x,&y);
    if (x < 0 || x >= row || y < 0 || y >= column) {
    printf("Invalid coordinates!\n");
    return;
    }

    if((grid[x][y]&1)==1){printf("Power Status ON\n");}else{printf("Power Status OFF\n");}
     if((grid[x][y]&2)==2){printf("OVERLOADED WARNING\n");}else{printf("overload status : NORMAL\n");}
     if((grid[x][y]&4)==4){printf("MAINTENANCE REQUIRED \n");}else{printf("Maintenance is not required\n");}
    return;
}
void runSystemDiagnostics(int row,int column,int grid[row][column]){
      int countMaintenance=0,countOverload=0;
           for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
              if((grid[i][j]&4)==4){countMaintenance++;}
              if((grid[i][j]&2)==2){countOverload++;}
            }
           }
           printf("\n\t\t\t\tSystem Diagnostic Report \t\t\n");
           printf("The number of sectors that Require Maintenance is: %d\n",countMaintenance);
           printf("The number of sectors that are overloaded is: %d\n",countOverload);
           return  ;
}
int main(){
              int row,column,opt;
           printf("Enter the number of rows for grid:\n ");
           scanf("%d",&row);
           printf("Enter the number of column for grid:\n ");
           scanf("%d",&column);
        int grid[row][column];
        printf("Enter initial status for sector [i,j] (0-7): ");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    do{
    printf("Select an option\n");
    printf("\n1. Update Sector Status\n2. Query Sector Status\n3. Run System Diagnostic\n4. Exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:  //Update Sector Status:
            updateStatus(row,column,grid);   
      break;

      case 2: // Query Sector Status:
              sectorStatus(row,column, grid);
      break;

      case 3:  // Run System Diagnostic:
               runSystemDiagnostics(row,column,grid);
      break;

      case 4:
      break;

      default:
              printf("Invalid Option try again\a\n");
      break;
    }
}while(opt!=4);
    
    return 0;
}