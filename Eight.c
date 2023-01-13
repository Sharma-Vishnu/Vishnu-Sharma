#include<stdio.h>
void main() {
    int a,b;
    printf("Ente the first number\n");
    scanf("%d",&a);
    printf("Ente the second number\n");
    scanf("%d",&b);

    // using third variable
    int c;
    c = a;
    a = b;
    b = c;

    printf("Values after swaping are %d and %d\n\n",a,b);

    printf("Ente the first number\n");
    scanf("%d",&a);
    printf("Ente the second number\n");
    scanf("%d",&b);
    // without using third variable

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Values after swaping are %d and %d",a,b);
    
}