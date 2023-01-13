#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter the first angle of the triangle \n");
    scanf("%d",&a);
    printf("Enter the second angle of the triangle \n");
    scanf("%d",&b);
    c = 180-a-b;
    printf("Third angle of the triangle is %d",c);


}