#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    if(num1 > num2) {
        printf("%d", num1);
    } else if(num2 > num1) {
        printf("%d", num2);
    } else {
        printf("Both are Equal\n");
    }
}

