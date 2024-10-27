#include <stdio.h>
#include <math.h>

void solveLinearEquation(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Infinite solutions\n");
        } else {
            printf("No solution\n");
        }
    } else {
        float x = -b / a;
        printf("Solution: x = %.2f\n", x);
    }
}

void solveQuadraticEquation(float a, float b, float c) {
    float discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        float x1 = (-b + sqrt(discriminant)) / (2*a);
        float x2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Two real solutions: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminant == 0) {
        float x = -b / (2*a);
        printf("One real solution: x = %.2f\n", x);
    } else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Two complex solutions: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;
    char choice;
    
    printf("Enter 'l' for linear equation or 'q' for quadratic equation: ");
    scanf(" %c", &choice);
    
    if (choice == 'l') {
        printf("Enter coefficients a and b for ax + b = 0: ");
        scanf("%f %f", &a, &b);
        solveLinearEquation(a, b);
    } else if (choice == 'q') {
        printf("Enter coefficients a, b, and c for ax^2 + bx + c = 0: ");
        scanf("%f %f %f", &a, &b, &c);
        solveQuadraticEquation(a, b, c);
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}