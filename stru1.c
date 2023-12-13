#include<stdio.h>
#include<string.h>
struct  student
{
    /* data */
    int rollno;
    char name[100];
    float cgpa;
};


int main(){
    struct student s;
    {
        /* data */
        s.rollno=66;
        s.cgpa=9.45;
        strcpy(s.name,"rohit");

    };
    printf("student name=%s\n",s.name);
    printf("student roll no=%d\n",s.rollno);
    printf("student cgpa =%f\n",s.cgpa);
    printf("\n");
    
    struct student s1;
    {
        /* data */
        s1.rollno=1;
        s1.cgpa=8.5;
        strcpy(s1.name,"ranjit");
    };
    printf("student name=%s \n",s1.name);
    printf("student roll no is : %d\n",s1.rollno);
    printf("student cgpa is =%f \n",s1.cgpa);
    

}