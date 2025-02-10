//piyush jharariya/problem 01/CRT
#include <stdio.h>
int main() {
    int Num1, Num2;
    int sum, difference, product;
    float quotient;
	printf("Enter the first integer: ");
    scanf("%d", &Num1);
    printf("Enter the second integer: ");
    scanf("%d", &Num2);
	sum = Num1 + Num2;
    difference = Num1 - Num2;
    product = Num1 * Num2; 
	if (Num2 != 0) {
        quotient = (float)Num1 / Num2; 
    } else {
        printf("Division by zero is not allowed.\n");
    }
    printf("Sum:- %d\n", sum);
    printf("Difference:- %d\n", difference);
    printf("Product:- %d\n", product);
    printf("Quotient:- %f\n", quotient);
}

