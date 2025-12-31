#include <stdio.h>

int main() {
    int n = 121;
    int original = n;
    int reversed = 0;

    while(n > 0) {
        int digit = n % 10;         
        reversed = reversed * 10 + digit;  
        n = n / 10;                  
    }

    if(original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
#include<stdio.h>

int main() {
    int num, sum = 0, dig, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (count < 10 && num != 1) {
        sum = 0;  

        while (num > 0) {
            dig = num % 10;
            sum = sum + (dig * dig);
            num = num / 10;
        }

        num = sum;  
        count++;
    }

    if (sum == 1)
        printf("NUMBER IS X NUMBER\n");
    else
        printf("NUMBER IS not X NUMBER\n");

    return 0;
}


#include <stdio.h>

int main() {
    int num, dig, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;

    while(num > 0) {
        dig = num % 10;
        fact = 1; // Reset factorial for each digit

        for(i = 1; i <= dig; i++) {
            fact *= i;
        }
                                      //strong number
        sum += fact;
        num = num / 10;
    }

    if (sum == original)
        printf("NUMBER IS a STRONG number\n");
    else
        printf("NUMBER IS NOT a STRONG number\n");

    return 0;
}

  
#include<stdio.h>

int main() {
    int num,dig,sumE=0,sumO=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    int original=num;
     while(num>0)
     {
       dig=num%10;
       if(dig%2==0)sumE=sumE+dig;     //abs diff of sum of even dgs of num and odd digs
       else
       {sumO=sumO+dig;}
       num=num/10;
     }
     printf(" the diiference is %d",sumE-sumO);
    return 0;
}

#include<stdio.h>

int main() {
    int num,dig,i,count=0,countP=0;

    printf("Enter a number: ");       //counting how many prime nos in a digit
    scanf("%d", &num);
    int original=num;
     while(num>0)
     { count=0;
       dig=num%10;
       for(i=1;i<=dig;i++)
       {
         if(dig%i==0)count++;  
       }if(count==2)countP++;
       num=num/10;
     }
     printf(" the number of prime nos is %d",countP);
    return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
    int num,dig,i=0,sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    int original=num;
     while(num>0)
     { 
       dig=num%10;
       num=num/10;           //ARMSTRONG NUMBER
       i++;
     }num=original;
     while(num>0)
     {
       dig=num%10;
       sum=sum+pow(dig,i);
       num=num/10;  
     }
     
     if(sum==original)
     printf(" %d is armstrong number ",original);
     else
     printf(" %d is not armstrong number",original);
    return 0;
}

#include<stdio.h>
#include<math.h>

int main() {
    int num,last_two,square;

    printf("Enter a number: ");
    scanf("%d", &num);
    int original=num;                         //AUTOMORPHIC NUMBER
     square=pow(num,2);
     last_two=square%100;
     if(last_two==num)
     printf(" %d is automorphic number ",original);
     else
     printf(" %d is not automorphic number",original);
    return 0;
}

#include<stdio.h>
int main(){
            int a=4,b=3,i;
            
            a=a^b;
            b=b^a;
            a=a^b;                     //binary conversion by btwise
            for(i=7;i>=0;i--){
                printf("%d",(a>>i)&1);
            }
    
    printf("a is %d b is %d",a,b);
    
    
    
    return 0;}
    #include<stdio.h>
int main()
{
    char service_type;int hrs,charges,slot;
    printf("Input service type");
    scanf("%c",&service_type);
     if(service_type=='r' || service_type=='R')
    {
        printf("Enter hours used");
        scanf("%d",&hrs);
        if(hrs<=10)
        {
           charges=(hrs-1)*50;
           
        }else
        {
            charges=9*50;
            charges=charges+((hrs-10)*60);
            
        }
        
    }
    else if(service_type=='l' ||service_type=='l')
    {
      printf("Enter hours used");
        scanf("%d",hrs);  
      printf("enter slot used \n1: 6am-6pm\n2:6pm-6am");
      scanf("%d",&slot);
      if(slot==1 && hrs<=10)
      {
         charges=(hrs-1)*60;
      }
      else if(slot==1 && hrs>10)  
      {
          charges=9*60;
          charges=charges+(hrs-10)*20.5;
      }  
      else if(slot==2 && hrs<=2.5)  
      {
         charges=0; 
      }  
      else if(slot==2&& hrs>2.5) 
      {
          charges=(hrs-2.5)*7.4;
      }
    }else{printf("INVALID SERVICE TYPE");}
    printf("Your service type is %c\n",service_type);
    printf("You user the car for %d hours\n",hrs);
    printf("Your service charges are %d\n",charges);
    
return 0;}

#include <stdio.h>

int main() {
    int code, toggle;

    printf("Enter code: ");
    scanf("%d", &code);

    toggle = code ^ 2;               //TOGGLE 2ND BIT

    printf("before %d\n", code);
    printf("after %d\n", toggle);

    return 0;
}
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        if ((num & 1) == 1) {  // Check least significant bit //COUNT NUMBER OF 1S
            count++;
        }
        num = num >> 1;  // Right shift to check next bit
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of two.\n", num);    //NUMBER IS POWER OF TWO
    } else {
        printf("%d is NOT a power of two.\n", num);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int amount, count500 = 0, count100 = 0, count50 = 0, count20 = 0, count10 = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    while (amount > 0) {
        if (amount >= 500) {
            amount -= 500;
            count500++;
        } else if (amount >= 100) {
            amount -= 100;
            count100++;
        } else if (amount >= 50) {
            amount -= 50;
            count50++;
        } else if (amount >= 20) {
            amount -= 20;
            count20++;
        } else if (amount >= 10) {
            amount -= 10;
            count10++;
        } else {
            // If amount is not divisible by smallest note (10)
            printf("Remaining amount %d cannot be dispensed.\n", amount);
            break;
        }
    }

    printf("Notes of 500: %d\n", count500);
    printf("Notes of 100: %d\n", count100);
    printf("Notes of 50:  %d\n", count50);
    printf("Notes of 20:  %d\n", count20);
    printf("Notes of 10:  %d\n", count10);

    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
           int i=0,flag=0;char pass[20];char dbpass[]="123";
     while(flag==0 && i<3)
     {           printf("Enter password");
                 scanf("%s",&pass);i++;                              //PASSWORD CHECKER
         if(strcmp(pass,dbpass)==0){printf("ACCESS GRANTED");flag=1;}
     }      
   if(flag==0)  printf("ACCOUNT LOCKED");    
return 0;}

#include<stdio.h>
int main(){
          int num,dig,sum=0;
  printf("Enter a number");
  scanf("%d",&num);
 while(num>10){sum=0;
     while(num>0){            //REDUCE NUM TO SINGLE DIGIT
            dig=num%10;
          num=num/10;
          sum+=dig;
  }  num=sum;}
  printf(" sum is %d",sum);
return 0;}

#include<stdio.h>
int main(){
            int num,dig,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0){
               dig=num%10;
               num=num/10;
              if(dig==1)count1++;
         else if(dig==2)count2++;
         else if(dig==3)count3++;
         else if(dig==4)count4++;
         else if(dig==5)count5++;
         else if(dig==6)count6++;
         else if(dig==7)count7++;       //NUMBER FREQUENCY
         else if(dig==8)count8++;
         else if(dig==9)count9++;
          
     }printf("one occurs %d time\n",count1);
     printf("two occurs %d time\n",count2);
     printf("three occurs %d time\n",count3);
     printf("4 occurs %d time\n",count4);
     printf("5 occurs %d time\n",count5);
     printf("6 occurs %d time\n",count6);
     printf("7 occurs %d time\n",count7);
     printf("8 occurs %d time\n",count8);
     printf("9 occurs %d time\n",count9);
return 0;}

#include<stdio.h>
#include<math.h>
int main(){
            int num,dig,sum=0,newnum,i=0;
    printf("enter a number");
    scanf("%d",&num);
    int orig=num;
    while(num>0){
               dig=num%10;  //SUM RAISED TO POWER OF DIGS
               num=num/10;
              sum+=dig;
              i++;
     } newnum=pow(sum,i);
     printf("%d\n",newnum);
return 0;}

#include<stdio.h>
int main()
{
   int degree_level,dept_code;
   printf("Enter you degree level'n1:Undergraduate\n2:post graduate");
   scanf("%d",&degree_level);
   switch(degree_level)
   {
        case 1:
        printf("Enter you dept code\n1:CS\n2:electronics\n3:mechanical");
        scanf("%d",&dept_code);
        switch(dept_code)
        {
          case 1:
          printf("Your track name is AI Basics");
          break;

          case 2:
          printf("Your track name is IOT with C");
          break;

          case 3:
          printf("Your track name is CAD Simulation");
          break;

          default:
        printf("invalid year");
        break;
        }
        break;

        case 2:
        printf("Enter you dept code\n1:DS\n2:embedded systems\n3:robotics");
        scanf("%d",&dept_code);
        switch(dept_code)
        {
          case 1:
          printf("Your track name is machine learning");
          break;

          case 2:
          printf("Your track name is RTOS engineering");
          break;

          case 3:
          printf("Your track name is Advanced robotics");
          break;

          default:
        printf("dept code");
        break;
        }
        break;

        default:
        printf("invalid year");
        break;

   }


}
#include<stdio.h>
int main(){
            int code,remd,bin=0,place=1;
            printf("enter code");
            scanf("%d",&code);
            
          
          printf("Access permissions enabled:\n");
          
            if((code&1)==1)printf("internet access\n");
            if((code&2)==2)printf("Report generation\n");
            if((code&4)==4)printf("Software Deployment\n");
            if((code&8)==8)printf("Admin Console Access\n");
            if((code&16)==16)printf("Database Write Permission\n");
            if((code&32)==32)printf("Database Read Permission\n");
            if((code&64)==64)printf("Lab entry\n");
            if((code&128)==128)printf("Server Room Access\n");
          return 0;
}

#include<stdio.h>
int main(){
           int num,i,sum=0;
           printf("ENTER the range of digits you wanna print");
           scanf("%d",&num);
           for(i=1;i<=num;i++)           //Triangular Series
           {
             sum=sum+i;
             printf("%d\t",sum);
           }
return 0;}
#include<stdio.h>
int main(){
           int num,a=1,b=1,c=2,i,d;
           printf("ENTER the range of digits you wanna print");
           scanf("%d",&num);
           printf("%d\t%d\t%d\t",a,b,c);
           for(i=4;i<=num;i++)
           {                    //SERIES WHERE NEXT NUM IS SUM OF PREVIOUS THREE
             d=a+b+c;
             printf("%d\t",d);
             a=b;b=c;c=d;
           }
return 0;}
#include<stdio.h>
int main(){
           int num,i,init=2;
 printf("ENTER the range of digits you wanna print");
          scanf("%d",&num);
          printf("%d\t",init);
           for(i=2;i<=num;i++)
           {                     /*if odd position *3 if even *2*/
            if(i%2==0)init*=2;
            else{init*=3;}printf("%d\t",init);
           }
return 0;}