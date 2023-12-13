#include<stdio.h>
#include<string.h>

struct complex
{
    /* data */
    int real;
    int img;
};

int main(){
    struct complex x1={5,3};
    struct complex *ptr=&x1;
    printf("complex no is: %d+%di",x1.real,x1.img);



}