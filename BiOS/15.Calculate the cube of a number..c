#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a * a * a;
    printf("Cube of %d = %d\n", a, b);

    return 0;
}

