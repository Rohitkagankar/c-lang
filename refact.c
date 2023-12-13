#include<stdio.h>


int pR(int n);
int main(){
    
    printf(" is: %d",pR(5));
    return 0;
    

}
int pR(int n){
    
    if(n==1){
        return 1;
    }
    int p=pR(n-1)*n;

    return p;
    
    
}