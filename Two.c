#include<stdio.h>
void main() {
    float a ,b,c ;
    printf("Enter the hight of the triangle \n");
    scanf("%f",&a);
    printf("Enter the base of the triangle\n");
    scanf("%f",&b);
    c = 0.5*a*b;
    printf("Area of the triangle is %.3f",c);
}