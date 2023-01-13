#include<stdio.h>
void main() {
    int a,b;
    int c,d,e,f;
    int g;
    printf("Enter the two numbers - \n");
    scanf("%d%d",&a,&b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    g = a%b;
    printf("Addition of both numbers is - %d\n",c);
    printf("Substraction of both numbers is - %d\n",d);
    printf("Multiplication of both numbers is - %d\n",e);
    printf("Division of both numbers is - %d\n",f);
    printf("Reminder after deviding of both numbers is - %d\n",g);
}