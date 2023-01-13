#include<stdio.h>
void main() {
    int a = 5;
    int b = 5;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++) {
            printf("*");
        }
        printf("\n");
    }
}