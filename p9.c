//piyush jharariya/problem 09/CRT
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int isSorted = 1; 
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; 
            break;
        }
    }
    if (isSorted) {
        printf("Array is sorted\n");
    } else {
        printf("Array is not sorted\n");
    }
    return 0;
}
