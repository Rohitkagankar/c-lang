#include<stdio.h>

int countodd(int arr[],int n);
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("odd no. count=%d",countodd(arr,10));
   

    return 0;
}
int countodd(int arr[],int n){
    int a=0;
    for(int i=0; i<n; i++ ){
        if(arr[i]%2 !=0){
            a++;
        }
    }
    return a;
}