#include <iostream>
#include "standard.h"
#include "scientific.h"


double sin(double x) {

    double sum = 0;
    int sign = 1;
    int n = 1;
    int k = 1;
    double term;
    do {
        term = power(x, n) / fact(n);
        sum += sign * term;
        sign *= -1;
        n += 2;
        k++;
    } while (term > 0.000001 && k < 100);
    return sum;
}

double cos(double x) {

    double sum = 0;
    int sign = 1;
    int n = 0;
    int k = 1;
    double term;
    do {
        term = power(x, n) / fact(n);
        sum += sign * term;
        sign *= -1;
        n += 2;
        k++;
    } while (term > 0.000001 && k < 100);
    return sum;
}

double tan(double x) {

    double s = sin(x);
    double c = cos(x);
    if (c == 0) {
        printf("Error: Undefined value\n");
        return 0;
    }
    return s / c;
}

double ln(double x) {
    if (x <= 0) {
        printf("Error: Non-positive argument\n");
        return 0;
    }

    double y = (x - 1) / (x + 1);
    double sum = 0;
    int n = 1;
    int k = 1;
    double term;
    do {
        term = power(y, n) / n;
        sum += term;
        n += 2;
        k++;
    } while (term > 0.000001 && k < 100);
    return 2 * sum;
}

double log10(double x) {
    if (x <= 0) {
        printf("Error: Non-positive argument\n");
        return 0;
    }

    return ln(x) / ln(10);
}

double antilog_10(double x) {

    return exp(x * ln(10));
}

double exp(double x) {

    double sum = 0;
    int n = 0;
    int k = 1;
    double term;
    do {
        term = power(x, n) / fact(n);
        sum += term;
        n++;
        k++;
    } while (term > 0.000001 && k < 100);
    return sum;
}


int fact(int n) {

  if (n == 0 || n == 1) {
    return 1;
  }

  else {
    return n * fact(n - 1);
  }
}


int perm(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        printf("Error: Invalid arguments\n");
        return 0;
    }
    return fact(n) / fact(n - r);
}

int comb(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        printf("Error: Invalid arguments\n");
        return 0;
    }
    return fact(n) / (fact(r) * fact(n - r));
}
