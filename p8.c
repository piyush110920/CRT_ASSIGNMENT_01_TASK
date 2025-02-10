//piyush jharariya/problem 08/CRT
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int frequency[n]; 
    int counted[n]; 
    int countIndex = 0; 
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        frequency[i] = -1;
    }
    for (i = 0; i < n; i++) {
        int count = 1;
        if (frequency[i] == -1) { 
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    frequency[j] = 0;
                }
            }
            frequency[i] = count; 
        }}
    printf("Element Frequency\n");
    for (i = 0; i < n; i++) {
        if (frequency[i] != 0) { 
            printf("%d        %d\n", arr[i], frequency[i]);
        }}
    return 0;
}
