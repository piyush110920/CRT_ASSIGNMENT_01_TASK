//piyush jharariya/problem 03/CRT
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
