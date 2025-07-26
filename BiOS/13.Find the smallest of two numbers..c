#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a;
    c = a * b;
    printf("The square value of %d is %d\n", a, c);

    return 0;
}

