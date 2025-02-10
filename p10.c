//piyush jharariya/problem 10/CRT
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0; 
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    float average = (float)sum / n;
    printf("The average of the array elements is: %f\n", average);
    return 0;
}
