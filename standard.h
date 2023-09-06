



double add(double x, double y); 
double sub(double x, double y); 
double mul(double x, double y); 
double divide(double x, double y); 
int mod(int x, int y); 
double power2(double base, double exp);
double sqr(double x); 
double sqrt(double x); 
double cube(double x); 
double cbrt(double x); 


double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return x / y;
}

int mod(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return x % y;
}
double power2(double base, double exp) {
    if (exp == 0) { 
        return 1; 
    }
    else if (exp > 0) { 
        double result = base; 
        for (int i = 1; i < exp; i++) { 
            result *= base; 
        }
        return result; 
    }
    else { 
        return 1 / power2(base, -exp); 
    }
}

double sqr(double x) {
    return power2(x, 2); 
}

double sqrt(double x) {
    if (x < 0) {
        printf("Error: Negative argument\n");
        return 0;
    }
    
    double guess = 1; 
    double epsilon = 0.000001; 
    while (guess * guess - x > epsilon || guess * guess - x < -epsilon) {
        guess = (guess + x / guess) / 2; 
    }
    return guess;
}

double cube(double x) {
    return power2(x, 3); 
}

double cbrt(double x) {
    
    double guess = 1; 
    double epsilon = 0.000001; 
    while (guess * guess * guess - x > epsilon || guess * guess * guess - x < -epsilon) {
        guess = (2 * guess + x / (guess * guess)) / 3; 
    }
    return guess;
}
