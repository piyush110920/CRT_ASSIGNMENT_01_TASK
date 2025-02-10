//piyush jharariya/problem 05/CRT
#include <stdio.h>
int main() {
    int n,i;
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
    }
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
