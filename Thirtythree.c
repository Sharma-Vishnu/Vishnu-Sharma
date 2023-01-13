#include <stdio.h> 
int main()
{
    int arr[100];
    int pos, n ;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");

    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Array is - \n");
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
        printf("\n");

    printf("enter the position on which you want to insert the element\n");
    scanf("%d",&pos);

    int x ;
    printf("enter the element which you want to insert the element\n");
    scanf("%d",&x);
 
    n++;
 
    for (int i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    arr[pos - 1] = x;
 
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}