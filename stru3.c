#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};


void printinfo(struct student s2);
int main(){
    struct  student s2={11,9.5,"rohit"};
    printinfo(s2);
   
   

}
void printinfo(struct student s2){
    printf("student information: \n");
    printf("student.roll =%d\n",s2.roll);
    printf("student cgpa: %f\n",s2.cgpa);
    printf("student name: %s\n",s2.name);
}

