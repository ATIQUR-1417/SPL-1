
#include <stdio.h>
#include "standard.h"
#include "scientific.h"


#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
#define MODULO 5
#define SQUARE 6
#define SQUARE_ROOT 7
#define CUBE 8
#define CUBIC_ROOT 9
#define SINE 10
#define COSINE 11
#define TANGENT 12
#define NATURAL_LOG 13
#define BASE_10_LOG 14
#define ANTILOG 15
#define EXP 16
#define FACTORIAL 17
#define PERMUTATION 18
#define COMBINATION 19
#define EXIT 20

int main() {
    int choice; 
    double x, y; 
    double result; 
    int n, r; 
    int base; 

    printf("Welcome to the scientific calculator program\n"); 
    printf("Please select an operation from the following menu:\n"); 

    
    printf("%d. Add\n", ADD);
    printf("%d. Subtract\n", SUBTRACT);
    printf("%d. Multiply\n", MULTIPLY);
    printf("%d. Divide\n", DIVIDE);
    printf("%d. Modulo\n", MODULO);
    printf("%d. Square\n", SQUARE);
    printf("%d. Square root\n", SQUARE_ROOT);
    printf("%d. Cube\n", CUBE);
    printf("%d. Cubic root\n", CUBIC_ROOT);
    printf("%d. Sine\n", SINE);
    printf("%d. Cosine\n", COSINE);
    printf("%d. Tangent\n", TANGENT);
    printf("%d. Natural logarithm\n", NATURAL_LOG);
    printf("%d. Base-10 logarithm\n", BASE_10_LOG);
    printf("%d. Antilogarithm\n", ANTILOG);
    printf("%d. Exponential function\n", EXP);
    printf("%d. Factorial\n", FACTORIAL);
    printf("%d. Permutation\n", PERMUTATION);
    printf("%d. Combination\n", COMBINATION);
    printf("%d. Exit\n", EXIT);

    scanf("%d", &choice); 

    if (choice != EXIT) { 
        switch (choice) { 
            case ADD: 
                printf("Enter two numbers to add:\n"); 
                scanf("%lf %lf", &x, &y); 
                result = add(x, y); 
                printf("The sum of %lf and %lf is %lf\n", x, y, result); 
                break; 
            case SUBTRACT: 
                printf("Enter two numbers to subtract:\n"); 
                scanf("%lf %lf", &x, &y); 
                result = sub(x, y); 
                printf("The difference of %lf and %lf is %lf\n", x, y, result); 
                break; 
            case MULTIPLY: 
                printf("Enter two numbers to multiply:\n"); 
                scanf("%lf %lf", &x, &y); 
                result = mul(x, y); 
                printf("The product of %lf and %lf is %lf\n", x, y, result); 
                break; 
            case DIVIDE: 
                printf("Enter two numbers to divide:\n"); 
                scanf("%lf %lf", &x, &y); 
                result = divide(x, y); 
                printf("The quotient of %lf and %lf is %lf\n", x, y, result); 
                break; 
            case MODULO: 
                printf("Enter two integers to calculate the modulo:\n"); 
                scanf("%d %d", &n, &r); 
                result = mod(n, r); 
                printf("The modulo of %d and %d is %d\n", n, r, (int)result); 
                break; 
            case SQUARE: 
                printf("Enter a number to calculate its square:\n"); 
                scanf("%lf", &x); 
                result = sqr(x); 
                printf("The square of %lf is %lf\n", x, result); 
                break; 
            case SQUARE_ROOT: 
                printf("Enter a number to calculate its square root:\n"); 
                scanf("%lf", &x); 
                result = sqrt(x); 
                printf("The square root of %lf is %lf\n", x, result); 
                break; 
            case CUBE: 
                printf("Enter a number to calculate its cube:\n"); 
                scanf("%lf", &x); 
                result = cube(x); 
                printf("The cube of %lf is %lf\n", x, result); 
                break; 
            case CUBIC_ROOT: 
                printf("Enter a number to calculate its cubic root:\n"); 
                scanf("%lf", &x); 
                result = cbrt(x); 
                printf("The cubic root of %lf is %lf\n", x, result); 
                break; 
            case SINE: 
                printf("Enter an angle in radians to calculate its sine:\n"); 
                scanf("%lf", &x); 
                result = sin(x); 
                printf("The sine of %lf radians is %lf\n", x, result); 
                break; 
            case COSINE: 
                printf("Enter an angle in radians to calculate its cosine:\n"); 
                scanf("%lf", &x); 
                result = cos(x); 
                printf("The cosine of %lf radians is %lf\n", x, result); 
                break; 
            case TANGENT: 
                printf("Enter an angle in radians to calculate its tangent:\n"); 
                scanf("%lf", &x); 
                result = tan(x); 
                printf("The tangent of %lf radians is %lf\n", x, result); 
                break; 
            case NATURAL_LOG: 
                printf("Enter a number to calculate its natural logarithm:\n"); 
                scanf("%lf", &x); 
                result = ln(x); 
                printf("The natural logarithm of %lf is %lf\n", x, result); 
                break; 
            case BASE_10_LOG: 
                printf("Enter a number to calculate its base-10 logarithm:\n"); 
                scanf("%lf", &x); 
                result = log10(x); 
                printf("The base-10 logarithm of %lf is %lf\n", x, result); 
                break; 
            case ANTILOG: 
                printf("Enter a number and a base to calculate its antilogarithm:\n"); 
                scanf("%lf", &x); 
                result = antilog_10(x); 
                printf("The antilogarithm of %lf with base 10 is %lf\n", x, result); 
                break; 
            case EXP: 
                printf("Enter a number to calculate its exponential function:\n"); 
                scanf("%lf", &x); 
                result = exp(x); 
                printf("The exponential function of %lf is %lf\n", x, result); 
                break; 
            case FACTORIAL: 
                printf("Enter an integer to calculate its factorial:\n"); 
                scanf("%d", &n); 
                result = fact(n); 
                printf("The factorial of %d is %d\n", n, (int)result); 
                break; 
            case PERMUTATION: 
                printf("Enter two integers n and r to calculate nPr:\n"); 
                scanf("%d %d", &n, &r); 
                result = perm(n, r); 
                printf("The permutation of %d and %d is %d\n", n, r, (int)result); 
                break; 
            case COMBINATION: 
                printf("Enter two integers n and r to calculate nCr:\n"); 
                scanf("%d %d", &n, &r); 
                result = comb(n, r); 
                printf("The combination of %d and %d is %d\n", n, r, (int)result); 
                break;
        }
    }
}