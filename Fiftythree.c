#include<stdio.h>
void main() {
    int a =5;
    int b =5;
    for (int k = 1; k<=b; k++) {
    for(int i=a-k; i>=1; i--)  {
        printf(" ");
    }
    for(int j=1; j<=a; j++) {
        printf("*");
    }
    printf("\n");
    }
    
}