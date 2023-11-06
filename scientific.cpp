#include <iostream>
#include "standard.h"
#include "scientific.h"

using namespace std;



double sin(double x) {

  x = x * PI / 180.0;

  double sum = 0;
  double term = 0;

  int n = 100;

  for (int i = 0; i < n; i++) {

    term = power(-1, i) * power(x, 2 * i + 1) / fact(2 * i + 1);

    sum += term;
  }

  return sum;
}

double cos(double x) {

  x = x * PI / 180.0;

  double sum = 0;
  double term = 0;

  int n = 100;

  for (int i = 0; i < n; i++) {

    term = power(-1, i) * power(x, 2 * i) / fact(2 * i);

    sum += term;
  }

  return sum;
}

double tan(double x) {

  double s = sin(x);
  double c = cos(x);

  if (c == 0) {

    cout << "Math Error" << endl;
  }
  else {

    return s / c;
  }
}




// ln(x) = (x - 1) / x - (x - 1)^2 / 2x^2 + (x - 1)^3 / 3x^3 - …

double ln(double x) {

  if (x <= 0) {
    cout << "Math Error" << endl;
  }

  double result = 0;
  double term = (x - 1) / x;
  int power = 1;

  while (term > 1e-6) {
    result += term / power;
    power++;
    term *= (x - 1) / x;
  }
  return result;
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

//exp(x) = 1 + x + x^2 / 2! + x^3 / 3! + …

double exp(double x) {
  double result = 0.0;
  int n = 100; // The number of terms to use in the series
  for (int i = 0; i < n; i++) {
    result += power(x, i) / fact(i);
  }
  return result;
}

double fact(int n) {

  if (n == 0 || n == 1) {
    return 1;
  }

  else {
    return n * fact(n - 1);
  }
}


double perm(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        printf("Error: Invalid arguments\n");
        return 0;
    }
    return fact(n) / fact(n - r);
}

double comb(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        printf("Error: Invalid arguments\n");
        return 0;
    }
    return fact(n) / (fact(r) * fact(n - r));
}
