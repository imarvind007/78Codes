#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num % 5 == 0) && (num % 11 == 0))
        printf("Yes, %d is divisible by 5 and 11.\n", num);
    else
        printf("No, %d is not divisible by 5 and 11.\n", num);
    return 0;
}
