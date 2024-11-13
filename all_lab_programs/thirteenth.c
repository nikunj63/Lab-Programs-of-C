// Write a program to input and print array elements using pointer.
#include <stdio.h>

int main() {
    int arr[100], n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    printf("Array elements are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    return 0;
}