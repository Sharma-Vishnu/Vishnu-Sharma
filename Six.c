#include<stdio.h>
void main() {
    float a,b,c,d,e;
    printf("Enter the marks of all five subjects\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float total = a+b+c+d+e;
    printf("Total of the Numbers is %.2f\n",total);
    float avg = total/5;
    printf("Average of the marks is %.2f\n",avg);
    float percentage = avg;
    printf("Percentage of the marks is %.2f\n",percentage);

    
}