#include<stdio.h>

int fib(int n);
int main(){

    printf("fibonacu of number is : %d",fib(9));


    return 0;
}
int fib(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int figo=fib(n-2)+fib(n-1);
    return figo;
    
}