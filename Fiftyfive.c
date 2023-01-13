#include<stdio.h>
void main() {
    int a = 5;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=i; j++) {
            if (j==1 || j==i || i == a)
            {
                printf("*");
            } else {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}