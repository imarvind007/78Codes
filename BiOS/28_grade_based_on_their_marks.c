#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0)
        printf("Invalid marks entered!\n");
    else if (marks >= 90)
        printf("Grade: A (Excellent)\n");
    else if (marks >= 80)
        printf("Grade: B (Very Good)\n");
    else if (marks >= 70)
        printf("Grade: C (Good)\n");
    else if (marks >= 60)
        printf("Grade: D (Average)\n");
    else if (marks >= 50)
        printf("Grade: E (Pass)\n");
    else
        printf("Grade: F (Fail)\n");
    return 0;
}

