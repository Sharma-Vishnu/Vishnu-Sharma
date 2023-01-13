#include<stdio.h>
void main() {
    int a =5;
    int b =5;
    for(int i=1; i<=b; i++) {
        for(int j1=a-i; j1>=1; j1--) {
            printf(" ");
        }
        for(int j2 =1; j2<=a; j2++) {
            if (i==1 || i == b || j2 == 1 || j2 == a) 
            {
                printf("*");
            } else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}