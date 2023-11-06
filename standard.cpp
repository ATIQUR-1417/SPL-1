#include <iostream>
#include "standard.h"

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



 double abs(double x){

  if (x < 0) {
    return -x;
  }

  else {
    return x;
  }
}



double sqrt(double x) {

  double approx = x / 2;


  double tol = 1e-6;

  while (abs(approx * approx - x) > tol) {

    approx = (approx + x / approx) / 2;
  }

  return approx;
}





double power(double base, double exp) {
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
        return 1 / power(base, -exp);
    }
}

double sqr(double x) {
    return power(x, 2);
}


double cube(double x) {
    return power(x, 3);
}


double cbrt(double x) {

  double approx = x / 3;

  double tol = 1e-6;

  while (abs(approx*approx*approx - x) > tol) {

    approx = approx - (approx*approx*approx - x) / (3 * approx*approx);
  }

  return approx;
}







