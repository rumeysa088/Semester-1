#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct dates{
    int year;
    int month;
    int day;
} Date;
typedef struct studentData{
     int studentID;
     char name[100];
     char batch[100];
     char membershipType[50];
    Date registrationDate;
    Date dateOfBirth;
     char interestIn[100];
}Student;

Student *arr;
int count;
void saveDatabase(const char *filename){
       FILE *fpt = fopen(filename, "wb");
    if (fpt == NULL) {
        printf("Can't open file! to write\n");
        return;
    } 
    
 fwrite(arr, sizeof(Student), count, fpt);
   fclose(fpt);
}
void loadDatabase(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        arr = NULL;
        count = 0;
        printf("Can't open file! to read\n");
        return;
    }
    fseek(fp, 0, SEEK_END); //take ptr from start to end
    long fileSize = ftell(fp);  //how many bytes 
    fseek(fp, 0, SEEK_SET); // SEEK_SET takes to start SEEK_END to end and SEEK_CUR to current pos

    count = fileSize / sizeof(Student);  //totalsize/size of one struct gives n

    arr = calloc(count,sizeof(Student));

    fread(arr, sizeof(Student), count, fp);  //(pointer to where store info,size of element,no of elements,pointer to open file)
  
    fclose(fp);
}

void addStudent( Student s,const char *filename){
    int studentID;
    printf("\nEnter Student ID: ");
    scanf("%d",&studentID);
       for (int i = 0; i < count; i++) {
       if (arr[i].studentID==studentID) {
              printf("Student with ID %d already exists!\n",studentID);
              return; }
       }
       s.studentID = studentID; 
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]",s.name);
    printf("\nEnter Student Batch: ");
    scanf(" %[^\n]",s.batch);
    printf("\nEnter membership type: ");
    scanf(" %[^\n]",s.membershipType);
    printf("\nEnter Registration Date (YYYY MM DD): ");
    scanf("%d %d %d", &s.registrationDate.year, &s.registrationDate.month, &s.registrationDate.day);

    printf("\nEnter Date of Birth (YYYY MM DD): ");
    scanf("%d %d %d", &s.dateOfBirth.year, &s.dateOfBirth.month, &s.dateOfBirth.day);
    printf("\nEnter Interests: ");
    scanf(" %[^\n]", s.interestIn);
  
    arr=realloc(arr,(count+1)*sizeof(Student));
    arr[count]=s;count++;
    saveDatabase("members.dat");
}
void updateStudent(int studentID,const char *filename){
       int op,index;

          int found=0;
          for (int i = 0; i < count; i++) {
          if (arr[i].studentID==studentID) {
               found=1; index=i;break;
               }
          }
          if(found==0){printf("\nStudent not found");return;}
       printf("\nWhat do you want to update? 1 -> Membership Type 2 -> Batch:  ");
       scanf("%d",&op);
       if(op==1){
          
          printf("\nEnter ur new Membership Type: ");
          scanf(" %[^\n]",arr[index].membershipType);
       }
       else if(op==2){
           
           printf("\nEnter ur new Student Batch: ");
           scanf(" %[^\n]",arr[index].batch);
       }
              else {
       printf("Invalid option!\n");
       return;
}
   saveDatabase("members.dat");
}
void deleteStudent(int studentID){
       int found=0;int index;
    for (int i = 0; i < count; i++) {
          if (arr[i].studentID==studentID) {
               found=1; index=i;break;
               }
          }if(found==0){printf("\nStudent not found");return;}
   for(int i=index;i<count-1;i++){
       arr[i]=arr[i+1];
   } count--;
    saveDatabase("members.dat");
}
void printData() {
    if (count == 0) {
        printf("No students registered yet.\n");
        return;
    }
    printf("\n%-10s %-20s %-15s %-15s %-30s %-30s %-30s\n", 
           "ID", "NAME", "BATCH", "MEMBERSHIP", "REGISTRATION DATE", "DATE OF BIRTH", "INTERESTS");
    printf("------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
       
        printf("%-10d %-20s %-15s %-15s %-2d.%2d.%4d  \t\t\t  %-2d.%2d.%4d  \t\t\t %-30s\n",
               arr[i].studentID, 
               arr[i].name, 
               arr[i].batch, 
               arr[i].membershipType, 
               arr[i].registrationDate.day, arr[i].registrationDate.month, arr[i].registrationDate.year,
               arr[i].dateOfBirth.day, arr[i].dateOfBirth.month, arr[i].dateOfBirth.year,
               arr[i].interestIn);
    }
}


void generateReport(){
       char temp[50];int opt,found=0;
  printf("\nWhich Batch? ");
  scanf("%s",temp);
  printf("\nDo you want to filter only 1.IEEE 2.ACM or 3. show BOTH? ");
  scanf("%d",&opt);
  switch(opt){
        case 1:
                 printf("\n ID  \t\t  NAME  \t\t  BATCH  \t\t  MEMBERSHIP  \t\t REGISTRATION DATE \t\t Date of Birth  \t\t  INTERESTS\n" );
                            printf("---------------------------------------------------------------------------------------------------------------\n");
                            found=0;
               for(int i=0;i<count;i++){
                     if((strcmp(arr[i].batch,temp)==0)&& (strcmp(arr[i].membershipType,"IEEE")==0)){
                            found=1;
                            printf("\n %d  \t\t  %s  \t\t  %s  \t\t  %s  \t\t %d.%d.%d \t\t %d.%d.%d  \t\t  %s\n",arr[i].studentID,arr[i].name,arr[i].batch,arr[i].membershipType,arr[i].registrationDate.year,arr[i].registrationDate.month,arr[i].registrationDate.day,arr[i].dateOfBirth.year, arr[i].dateOfBirth.month, arr[i].dateOfBirth.day,arr[i].interestIn);
                     }
               }if(found==0)printf("\nCould not find any students");
        break;

        case 2:
                printf("\n ID  \t\t  NAME  \t\t  BATCH  \t\t  MEMBERSHIP  \t\t REGISTRATION DATE \t\t Date of Birth  \t\t  INTERESTS\n" );
                            printf("---------------------------------------------------------------------------------------------------------------\n");
                            found=0;
               for(int i=0;i<count;i++){
                     if((strcmp(arr[i].batch,temp)==0) && (strcmp(arr[i].membershipType,"ACM")==0)){
                            found=1;
                            printf("\n %d  \t\t  %s  \t\t  %s  \t\t  %s  \t\t %d.%d.%d \t\t %d.%d.%d  \t\t  %s\n",arr[i].studentID,arr[i].name,arr[i].batch,arr[i].membershipType,arr[i].registrationDate.year,arr[i].registrationDate.month,arr[i].registrationDate.day,arr[i].dateOfBirth.year, arr[i].dateOfBirth.month, arr[i].dateOfBirth.day,arr[i].interestIn);
                     }
               }if(found==0)printf("\nCould not find any students");
        break;

        case 3:
                 printf("\n ID  \t\t  NAME  \t\t  BATCH  \t\t  MEMBERSHIP  \t\t REGISTRATION DATE \t\t Date of Birth  \t\t  INTERESTS\n" );
                            printf("---------------------------------------------------------------------------------------------------------------\n");
                            found=0;
                 for(int i=0;i<count;i++){
                     if(strcmp(arr[i].batch,temp)==0 && (strcmp(arr[i].membershipType,"BOTH")==0)){
                            found=1;
                            printf("\n %d  \t\t  %s  \t\t  %s  \t\t  %s  \t\t %d.%d.%d \t\t %d.%d.%d  \t\t  %s\n",arr[i].studentID,arr[i].name,arr[i].batch,arr[i].membershipType,arr[i].registrationDate.year,arr[i].registrationDate.month,arr[i].registrationDate.day,arr[i].dateOfBirth.year, arr[i].dateOfBirth.month, arr[i].dateOfBirth.day,arr[i].interestIn);
                     }
               }if(found==0)printf("\nCould not find any students");
        break;

        default:
        printf("INVALID OPTION\n");
        break;

  }
}

int main(){
    int opt;int studentID;
   loadDatabase("members.dat");
//-------------------------------------------------------------------------------//
    do{
    printf("Select an option:\n"
       "1. Register a new student.\n"
       "2. Update membership type or batch.\n"
       "3. Delete a student registration.\n"
       "4. View all registrations.\n"
       "5. Generate batch-wise reports.\n"
       "6. Exit the program\n");

    scanf("%d",&opt);
    switch(opt)
    {
       case 1:
              Student s; 
              addStudent(s,"members.dat");
       break;
       case 2:
                printf("Enter Student ID to update: ");
               scanf("%d", &studentID);
              updateStudent(studentID, "members.dat");
       break;
       case 3:
               printf("Enter Student ID to delete: ");
               scanf("%d", &studentID);
              deleteStudent(studentID);
       break;
       case 4:
              printData();
       break;
       case 5:
              generateReport();
       break;
       case 6:
       break;
       default:
       printf("INVALID OPTION\n");
       break;
    }
}while(opt!=6);

//-------------------------------------------------------------------------------//

    return 0;
}

//109 DONE
/*ID	Name	Batch	Membership	Registration Date	Date of Birth	Interest
101	Ali Khan	CS	IEEE	2023-01-10	2003-05-15	IEEE
102	Sara Ahmed	SE	ACM	2023-02-12	2003-06-20	ACM
103	Omar Farooq	AI	IEEE	2023-03-15	2003-03-05	Both
104	Hina Raza	Cyber Security	ACM	2023-01-25	2003-04-18	ACM     *
105	Bilal Qureshi	CS	IEEE	2023-02-05	2003-02-28	IEEE
106	Maryam Ali	SE	Both	2023-03-01	2003-07-07	Both
107	Ahmed Shah	AI	ACM	2023-01-18	2003-05-30	ACM
108	Sana Javed	Cyber Security	IEEE	2023-02-20	2003-06-12	IEEE
109	Usman Khalid	CS	ACM	2023-03-11	2003-01-25	ACM
110	Ayesha Tariq	SE	IEEE	2023-01-22	2003-02-14	IEEE
111	Fahad Iqbal	AI	Both	2023-02-08	2003-03-18	Both                  *
112	Rabia Khan	Cyber Security	IEEE	2023-03-19	2003-04-10	IEEE
113	Imran Saeed	CS	Both	2023-01-30	2003-05-03	Both
114	Nida Hussain	SE	ACM	2023-02-14	2003-06-21	ACM
115	Kamran Ahmed	AI	IEEE	2023-03-05	2003-07-17	IEEE
116	Zoya Malik	Cyber Security	Both	2023-01-28	2003-08-22	Both
117	Salman Rafiq	CS	IEEE	2023-02-16	2003-01-30	IEEE
118	Laiba Naseer	SE	Both	2023-03-02	2003-02-09	Both                   *
119	Daniyal Akhtar	AI	ACM	2023-01-20	2003-03-27	ACM
120	Fatima Iqbal	Cyber Security	IEEE	2023-02-25	2003-04-12	IEEE*/