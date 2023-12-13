#include<stdio.h>
#include<string.h>

int main(){
   char pass[100];
   scanf("%s",pass);
   char test[100]="123";
   char newpass[200];
   strcpy(newpass,pass);

   strcat(newpass,test);
   puts(newpass);
    return 0;
}