#include<stdio.h>
// void acceptData(struct studentData *s1);
// void displayData(struct studentData s1);
// void writeNewFile(struct studentData s1);

struct studentData
{
    char studentName[20];
    int rollNo;
    int age ;
    int marks ;
};

 void acceptData(struct studentData *s1){
    printf("Enter name of student : ");
    scanf("%s", &s1->studentName);

    printf("enter roll no of student : ");
    scanf("%d",&s1->rollNo);

    printf("enter age of student : ");
    scanf("%d",&s1->age);

    printf("enter marks of student : ");
    scanf("%d",&s1->marks);
}

void displayData(struct studentData s1){
    printf("Name :%s\n",s1.studentName);
    printf("roll no : %d\n",s1.rollNo);
    printf("age : %d\n",s1.age);
    printf("marks : %d\n",s1.marks);
}

void writeNewFile(struct studentData s1){
    FILE *pfile =NULL;
    pfile= fopen("student.txt","w");
    if (pfile==NULL)
    {
        printf("this file is not open");
    }
    fprintf(pfile,"Name :%s\n", s1.studentName);
    fprintf(pfile,"rollno :%d\n", s1.rollNo);
    fprintf(pfile,"age :%d\n", s1.age);
    fprintf(pfile,"marks :%d\n", s1.marks);
    fclose(pfile);

}

void readFile(){
    FILE *pfile =NULL;
    pfile=fopen("student.txt","r");
    if (pfile==NULL)
    {
        printf("file not open");
        return;
    }
    struct studentData s;
    char buffer[100];
    while (fgets(buffer,100,pfile)!= NULL)
    {
        printf("%s",buffer);
    }
    fclose(pfile);
}

int main()
{   struct studentData s1;
    //acceptData(&s1);
    // displayData(s1);
   //writeNewFile(s1);
   readFile();
    return 1;
}
