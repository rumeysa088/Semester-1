#include<stdio.h>
int main(){
 char str[20];int count[23]={0};
 printf("Input DNA sequence: ");
 scanf("%s",str);
 for(int i=0; str[i]!='\0';i++)
 {
     int index=str[i]-'A';
     count[index]++;
 }  printf(" A: ");
 for(int j=1;j<=count[0];j++)
 {
        printf(" *");
 }printf("\n");printf(" C: ");
 for(int j=1;j<=count[2];j++)
 {
        printf(" *");
 }printf("\n");
 printf(" G: ");
 for(int k=1;k<=count[6];k++)
 {
        printf(" *");
 }printf("\n");
 printf(" T: ");
 for(int j=1;j<=count[19];j++)
 {
        printf(" *");
 }printf("\n");
return 0;
}

#include <stdio.h>

int main() {
    char id[9];
    int charges;

    printf("Enter id: ");
    scanf("%s", id);

    // find length of ID
    int i = 0;
    while(id[i] != '\0') { 
        i++;
    }

    // extract last digits
    int LastTwo = (id[i-2]-'0')*10 + (id[i-1]-'0');  
    int LastThree = (id[i-3]-'0')*100 + (id[i-2]-'0')*10 + (id[i-1]-'0'); 
    int cities = (id[i-1]-'0') + 2;
    int buses = LastTwo;
    int ticketSales = LastThree;

    printf("Enter total ticket price: ");
    scanf("%d", &charges);

    int age[ticketSales];
    int amount[ticketSales];
    int busTotals[cities][buses]; // store total per bus

    // initialize bus totals
    for(int j = 0; j < cities; j++)
        for(int k = 0; k < buses; k++)
            busTotals[j][k] = 0;

    // collect passenger data and calculate amounts
    for(int j = 0; j < cities; j++){
        for(int k = 0; k < buses; k++){
            for(int m = 0; m < ticketSales; m++){
                int ageInput;
                printf("Enter age for City %d Bus %d Passenger %d: ", j+1, k+1, m+1);
                scanf("%d", &ageInput);

                int ticketAmount = charges;
                if(ageInput > 60) ticketAmount = (int)(charges * 0.7);
                else if(ageInput < 6) ticketAmount = (int)(charges * 0.5);

                age[m] = ageInput;
                amount[m] = ticketAmount;
                busTotals[j][k] += ticketAmount;

                printf("City %d Bus %d Passenger %d %d %d rupees\n", j+1, k+1, m+1, age[m], amount[m]);
            }
        }
    }

    // print total sales per bus
    printf("\nTotal sales for each bus in each city:\n");
    printf("City Bus Total Sales\n");
    for(int j = 0; j < cities; j++){
        for(int k = 0; k < buses; k++){
            printf("City %d Bus %d %d rupees\n", j+1, k+1, busTotals[j][k]);
        }
    }

    return 0;
}
#include <stdio.h>
int main() {
    int input[5][5] = {
        {1, 2, 3, 4, 5},
       {1, 2, 3, 4, 5},
       {1, 2, 3, 4, 5},
       {1, 2, 3, 4, 5},
       {1, 2, 3, 4, 5},
    };

    int filter[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };
     
    int result[3][3];

    for (int i = 0; i <=2; i++) {
        for (int j = 0; j <=2; j++) {
            int sum = 0;
            for (int m= 0;m< 3;m++) {  //m=1
                for (int k= 0;k< 3;k++) {
                    sum +=input[i+m][j+k] * filter[m][k];
                }
            }
            result[i][j] = sum;
        }
    }

    printf("Result of convolution:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main() {
      int input[4][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12},
  {13, 14, 15, 16}
};   int fil[2][2]={{1,1},{1,1}}; int res[3][3];
  
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){ int sum=0;  //j=1
          for(int m=0;m<2;m++){
              for(int k=0;k<2;k++){
                 sum=sum+(input[i+m][j+k]*fil[m][k]);
              }
          }res[i][j]=sum;
      }                           // sum of all 2x2 matrices present
  }
    printf("Result of convolution:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char color[20];
    int pos;
    printf("Colours= ");
    scanf("%s", color);

    int size = 0;
    while (color[size] != '\0') {
        size++;
    }

    int turn = 1;
    while (turn != 0) {
        int moved = 0;
        if (turn == 1) {
            for (int i = 0; i < size - 2; i++) {
                if (color[i] == 'y' && color[i + 1] == color[i] && color[i + 1] == color[i + 2]) {
                    pos = i + 1;
                    for (int j = pos; j < size - 1; j++) {
                        color[j] = color[j + 1];
                    }
                    size--;
                    printf("Yasir removes piece y at index %d\n", i + 2);
                    turn = 2;
                    moved = 1;
                    break;
                }
            }
            if (!moved) { printf("Yasir has no moves left, he lost\n"); turn = 0; }
        }
        int moved2 = 0;
        if (turn == 2) {
            for (int i = 0; i < size - 2; i++) {
                if (color[i] == 'b' && color[i + 1] == color[i] && color[i + 1] == color[i + 2]) {
                    pos = i + 1;
                    for (int j = pos; j < size - 1; j++) {
                        color[j] = color[j + 1];
                    }
                    size--;
                    printf("Binish removes piece b at index %d\n", i + 2);
                    turn = 1;
                    moved2 = 1;
                    break;
                }
            }
            if (!moved2) { printf("Binish has no moves left, she lost\n"); turn = 0; }
        }
        color[size] = '\0';
        printf("%s\n", color);
    }
    return 0;
}
