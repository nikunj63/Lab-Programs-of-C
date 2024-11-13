// Write a program to copy one array to another using pointer.
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, *p1, *p2;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements for the first array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    p1 = arr1;
    p2 = arr2;
    for (int i = 0; i < n; i++)
        *(p2 + i) = *(p1 + i);

    printf("Elements of the second array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}