#include<stdio.h>


float perc(float a,float b,float c);
int main(){
    float p,q,r;
    printf("write mark in of three sub :");
    scanf("%f %f %f",&p,&q,&r);
    printf("total percentage is %f",perc(p,q,r));
    return 0;
    

}
float perc(float a,float b,float c){
   float tper=(a+b+c)/3;
   return tper;
    
}