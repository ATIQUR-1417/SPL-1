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

        //sinx = x - (x^3)/3! + (x^5)/5! - .......

    term = power(-1, i) * power(x, 2 * i + 1) / fact(2 * i + 1);

    sum += term;
  }

  return sum;
}




double cos(double x) {

  x = x * PI / 180.0;

  double sum = 0.0;
  double term = 0.0;
  int n = 100;

  for (int i = 0; i < n; i++) {

    // cosx = 1 - (x^2)/2! + (x^4)/4! - .......
    term = power(-1, i) * power(x, 2 * i) / fact(2 * i);

    sum += term;

  }

  return sum;
}



int tan(double x) {


    //double s = sin(x);
    //double c = cos(x);

    if (cos(x) == 0) {

    cout << "Math Error" << endl;
  }
    else {
    cout << " The tangent of " << x << " degree is " << sin(x)/cos(x) << endl;
    return 0;
  }
}





double ln(double x)
{
    double old_sum = 0.0;
    double numerator = (x - 1) / (x + 1);
    double numerator_2 = numerator * numerator;
    double denom = 1.0;
    double frac = numerator;
    double term = frac;
    double sum = term;

    while ( sum != old_sum )
    {
        old_sum = sum;
        denom += 2.0;
        frac *= numerator_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}



double log10(double x) {

    return ln(x) / ln(10);
}

double antilog_10(double x) {

    return exp(x * ln(10));
}

//exp(x) = 1 + x + x^2 / 2! + x^3 / 3! + …

double exp(double x) {
  double result = 0.0;
  int n = 100;
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

    return fact(n) / fact(n - r);
}

double comb(int n, int r) {

    return fact(n) / (fact(r) * fact(n - r));
}
