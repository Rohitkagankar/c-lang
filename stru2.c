#include<stdio.h>
#include<string.h>

struct student
{
    /* data */
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1={1,9.2,"rohit"};
    printf("student roll =%d\n",s1.roll);

    struct student *ptr = &s1;
    printf("student.roll with ptr =%d\n",(*ptr).roll);
    printf("student->roll =%d\n",ptr->roll);
    printf("student name is : %s",ptr->name);
    printf("student cgpa is = %f",ptr->cgpa);
    return 0;

}