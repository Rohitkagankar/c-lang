#include<stdio.h>


float pFt(float n);
int main(){
    float c;
    printf("write celcius temp :");
    scanf("%f",&c);
    printf("fahrenheit temp is %f",pFt(c));
    return 0;
    

}
float pFt(float n){
   float f=(n*1.8)+32;
   return f;
    
}