#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter your name: ");
    scanf("%s",name);
    printf("enter your age: ");
    scanf("%d",&age);
    printf("Enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"name: %s\n",name);
    fprintf(fptr,"age: %d\n",age);
    fprintf(fptr,"cgpa: %f\n",cgpa);

    fclose(fptr);
    return 0;

}