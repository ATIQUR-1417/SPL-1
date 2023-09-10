#include <iostream>
#include "standard.h"
#include "scientific.h"
using namespace std;

int main() {
    int choice;
    double x, y;
    double result;
    int n, r;


    printf("Welcome to the scientific calculator program\n");
    printf("Please select an operation from the following menu:\n");


    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulo\n");
    printf("6. Square\n");
    printf("7. Square root\n");
    printf("8. Cube\n");
    printf("9. Cubic root\n");
    printf("10. Sine\n");
    printf("11. Cosine\n");
    printf("12. Tangent\n");
    printf("13. Natural logarithm\n");
    printf("14. Base-10 logarithm\n");
    printf("15. Antilogarithm\n");
    printf("16. Exponential function\n");
    printf("17. Factorial\n");
    printf("18. Permutation\n");
    printf("19. Combination\n");
    printf("0. Exit\n");

    scanf("%d", &choice);

    if (choice != 0) {
        switch (choice) {
            case 1:
                printf("Enter two numbers to add:\n");
                scanf("%lf %lf", &x, &y);
                result = add(x, y);
                printf("The sum of %lf and %lf is %lf\n", x, y, result);
                break;
            case 2:
                printf("Enter two numbers to subtract:\n");
                scanf("%lf %lf", &x, &y);
                result = sub(x, y);
                printf("The difference of %lf and %lf is %lf\n", x, y, result);
                break;
            case 3:
                printf("Enter two numbers to multiply:\n");
                scanf("%lf %lf", &x, &y);
                result = mul(x, y);
                printf("The product of %lf and %lf is %lf\n", x, y, result);
                break;
            case 4:
                printf("Enter two numbers to divide:\n");
                scanf("%lf %lf", &x, &y);
                result = divide(x, y);
                printf("The quotient of %lf and %lf is %lf\n", x, y, result);
                break;
            case 5:
                printf("Enter two integers to calculate the modulo:\n");
                scanf("%d %d", &n, &r);
                result = mod(n, r);
                printf("The modulo of %d and %d is %d\n", n, r, (int)result);
                break;
            case 6:
                printf("Enter a number to calculate its square:\n");
                scanf("%lf", &x);
                result = sqr(x);
                printf("The square of %lf is %lf\n", x, result);
                break;
            case 7:
                printf("Enter a number to calculate its square root:\n");
                scanf("%lf", &x);
                result = sqrt(x);
                printf("The square root of %lf is %lf\n", x, result);
                break;
            case 8:
                printf("Enter a number to calculate its cube:\n");
                scanf("%lf", &x);
                result = cube(x);
                printf("The cube of %lf is %lf\n", x, result);
                break;
            case 9:
                printf("Enter a number to calculate its cubic root:\n");
                scanf("%lf", &x);
                result = cbrt(x);
                printf("The cubic root of %lf is %lf\n", x, result);
                break;
            case 10:
                printf("Enter an angle in radians to calculate its sine:\n");
                scanf("%lf", &x);
                result = sin(x);
                printf("The sine of %lf radians is %lf\n", x, result);
                break;
            case 11:
                printf("Enter an angle in radians to calculate its cosine:\n");
                scanf("%lf", &x);
                result = cos(x);
                printf("The cosine of %lf radians is %lf\n", x, result);
                break;
            case 12:
                printf("Enter an angle in radians to calculate its tangent:\n");
                scanf("%lf", &x);
                result = tan(x);
                printf("The tangent of %lf radians is %lf\n", x, result);
                break;
            case 13:
                printf("Enter a number to calculate its natural logarithm:\n");
                scanf("%lf", &x);
                result = ln(x);
                printf("The natural logarithm of %lf is %lf\n", x, result);
                break;
            case 14:
                printf("Enter a number to calculate its base-10 logarithm:\n");
                scanf("%lf", &x);
                result = log10(x);
                printf("The base-10 logarithm of %lf is %lf\n", x, result);
                break;
            case 15:
                printf("Enter a number and a base to calculate its antilogarithm:\n");
                scanf("%lf", &x);
                result = antilog_10(x);
                printf("The antilogarithm of %lf with base 10 is %lf\n", x, result);
                break;
            case 16:
                printf("Enter a number to calculate its exponential function:\n");
                scanf("%lf", &x);
                result = exp(x);
                printf("The exponential function of %lf is %lf\n", x, result);
                break;
            case 17:
                printf("Enter an integer to calculate its factorial:\n");
                scanf("%d", &n);
                result = fact(n);
                printf("The factorial of %d is %d\n", n, (int)result);
                break;
            case 18:
                printf("Enter two integers n and r to calculate nPr:\n");
                scanf("%d %d", &n, &r);
                result = perm(n, r);
                printf("The permutation of %d and %d is %d\n", n, r, (int)result);
                break;
            case 19:
                printf("Enter two integers n and r to calculate nCr:\n");
                scanf("%d %d", &n, &r);
                result = comb(n, r);
                printf("The combination of %d and %d is %d\n", n, r, (int)result);
                break;
        }
    }
}
