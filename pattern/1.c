#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Assume num1, num2, num3, and num4 are your 4-digit numbers
    printf("Enter the first 4-digit number: ");
    scanf("%d", &num1);

    printf("Enter the second 4-digit number: ");
    scanf("%d", &num2);

    printf("Enter the third 4-digit number: ");
    scanf("%d", &num3);

    printf("Enter the fourth 4-digit number: ");
    scanf("%d", &num4);

    // Using the ternary operator to compare and print the result
    ((num1 == num2) && (num2 == num3) && (num3 == num4)) ? printf("All numbers are equal.\n") :
    ((num1 >= num2) && (num1 >= num3) && (num1 >= num4)) ? printf("%d is the greatest.\n", num1) :
    ((num2 >= num1) && (num2 >= num3) && (num2 >= num4)) ? printf("%d is the greatest.\n", num2) :
    ((num3 >= num1) && (num3 >= num2) && (num3 >= num4)) ? printf("%d is the greatest.\n", num3) :
    printf("%d is the greatest.\n", num4);

    return 0;
}