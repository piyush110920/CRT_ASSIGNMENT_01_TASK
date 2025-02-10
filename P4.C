//piyush jharariya/problem 04/CRT
#include <stdio.h>
int main() {
    float num1, num2, num3, num4;
    printf("Enter four numbers:\n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    float largest;
    if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
        largest = num2;
    } else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
        largest = num3;
    } else {
        largest = num4;
    }
    printf("The largest number is: %f\n", largest);
}

