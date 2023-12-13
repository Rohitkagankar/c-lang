#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("Enter numbers(3): ");
    for(int i=0; i<3; i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,5);
    printf("Enter numbers(5): "); 
    for(int i=0; i<5; i++){
        scanf("%d",&ptr[i]);
    }
    //print
    for(int i=0; i<5; i++){
        printf("number %d is %d\n",i,ptr[i]);
    }


}