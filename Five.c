#include<stdio.h>
#include<math.h>
void main() {
    float a;
    printf("Enter the number\n");
    scanf("%f",&a);
    float power = pow(a,2);
    printf("Squire of the number is %.3f\n",power);
    float squireroot = pow(a,0.5);
    printf("Squireroot of the number is %.3f\n",squireroot);
}