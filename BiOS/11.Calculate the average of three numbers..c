#include <stdio.h>
int main() {
    float num1, num2, num3, average;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average of %.2f, %.2f and %.2f is %.2f\n", num1, num2, num3, average);
    return 0;
}

