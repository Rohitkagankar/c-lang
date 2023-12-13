#include<stdio.h>

int main(){
    FILE *fptr;
    fptr= fopen("text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("charactor = %c",ch);
    fclose(fptr);
    return 0;
}