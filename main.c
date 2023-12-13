#include <stdio.h>
#include<math.h>

float squar(float side);
float circle(float radius);
float rectangle(float l, float b);
int main() { 
    float l= 10.0;
    float b= 5.0;
    printf ("area of rectangle is : %f",rectangle(l,b));
    printf("area of square is : %f",squar(l));
    printf("area of circle is : %f", circle(b));
    return 0;
    
}
float squar(float side){
    return side * side;
}

float circle ( float radius){
    return 3.14 * pow(radius,2);
}

float rectangle (float l, float b){
    return l * b;
}
