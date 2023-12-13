#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(fptr);

    }
    printf("\n");
    fclose(fptr);
    
    /*fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    fclose(fptr);
    */
    return 0;

}