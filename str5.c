#include<stdio.h>
#include<string.h>
void checkChar(char str[],char ch);
int main(){
    char str[]="hello world";
    char ch='w';
    checkChar(str,ch);

}
void checkChar(char str[],char ch){
    for(int i=0; str[i] != '\0'; i++ ){
        if(str[i]==ch){
            printf("charactor is present.\n");
            return;
        }
    }
    printf("charactor is not present.\n");
}