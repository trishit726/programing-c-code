// Type Content here...
// Program to find roots and nature of a quadratic equation
#include <stdio.h>   // For printf() and scanf()
#include <math.h>    // For sqrt() function

int main() {
    // Declare variables to store coefficients and calculated values
    double a, b, c;               // Coefficients of the quadratic equation
    double discriminant;          // Value of b² - 4ac
    double root1, root2;          // Real roots (if discriminant >= 0)
    double realPart, imagPart;    // For storing real and imaginary parts if roots are complex

    // Prompt user for input
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c); // Read three floating-point numbers

    // Calculate the discriminant: D = b² - 4ac
    discriminant = b * b - 4 * a * c;

    // Case 1: Roots are real and different (D > 0)
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // First root
        root2 = (-b - sqrt(discriminant)) / (2 * a); // Second root
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2); // Display with 2 decimal places
    }
    // Case 2: Roots are real and the same (D == 0)
    else if (discriminant == 0) {
        root1 = -b / (2 * a); // Both roots are equal
        printf("root1 = root2 = %.2lf\n", root1); // Display root
    }
    // Case 3: Roots are complex (D < 0)
    else {
        realPart = -b / (2 * a);                  // Real part of complex roots
        imagPart = sqrt(-discriminant) / (2 * a); // Imaginary part (positive value)
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n",
               realPart, imagPart, realPart, imagPart); // Display roots in a±bi form
    }

    return 0; // Indicate successful program termination
}








