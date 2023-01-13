#include <stdio.h>        
int main()    
{    
    int length ;
    printf("Enter the length of the array");
    scanf("%d",&length);
    int arr1[length];
    printf("Enter the elements of the array");
    for(int i=0; i<5; i++) {
        scanf("%d",&arr1[i]);
    } 
    int arr2[length];  
        
    for (int i = 0; i < length; i++) {     
        arr2[i] = arr1[i];     
    }      
        
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr1[i]);    
    }    
        
    printf("\n");    
        
    printf("Elements of new array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}    