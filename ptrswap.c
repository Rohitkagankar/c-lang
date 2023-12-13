#include<stdio.h>

void swap(int a, int b);
void _swap(int *r,int *s);
int main(){
   int p=3 ,q=5;
   //call by value 
   swap(p,q);
   printf("p=%d, q=%d\n",p,q);
   
   //call by reference
   _swap(&p,&q);
   printf("p=%d, q=%d\n",p,q);


   return 0;
     

}
//call by value:
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d, b=%d\n",a,b);
}
//call by value:
void _swap(int *a, int *b){
    int l=*a;
    *a=*b;
    *b=l;
    printf("*a=%d, *b=%d\n",*a,*b);

}
