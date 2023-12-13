#include<stdio.h>
#include<string.h>

struct vector 
{
    /* data */
    int x;
    int y;

};
void printsum( struct vector v1, struct vector v2, struct vector sum);


int main(){
    struct vector v1={5,10};
    struct vector v2={3,2};
    struct vector sum={0};
    printsum(v1,v2,sum);
    
}
void printsum( struct vector v1, struct vector v2, struct vector sum){
    sum.x=v1.x + v2.x;
    sum.y=v1.y + v2.y;
    printf("sum of x is : %d\n",sum.x);
    printf("sum of y is : %d\n",sum.y);
}