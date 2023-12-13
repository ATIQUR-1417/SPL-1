#include <iostream>
#include "standard.h"
#include "scientific.h"
#include "conversion.h"

using namespace std;

int main() {
    int choice;
    double x, y;
    double result;
    int n, r;

  do{

    cout << "\n\t----------------------------------------\n";
    cout << "\t        SCIENTIFIC CALCULATOR         \n";
    cout << "\t-----------------------------------------\n\n";


    cout << "\t1. Add\t\t\t" << "11. Sine" << endl;
    cout << "\t2. Subtract\t\t" << "12. Cosine" << endl;
    cout << "\t3. Multiply\t\t" << "13. Tangent" << endl;
    cout << "\t4. Divide\t\t" << "14. Natural logarithm" << endl;
    cout << "\t5. Modulo\t\t" << "15. Base-10 logarithm" << endl;
    cout << "\t6. Square\t\t" << "16. Antilogarithm" << endl;
    cout << "\t7. Square root\t\t" << "17. Exponential function" << endl;
    cout << "\t8. Cube\t\t\t" << "18. Permutation" << endl;
    cout << "\t9. Cubic root\t\t" << "19. Combination" << endl;
    cout << "\t10. Factorial\t\t" << "20. Base Conversion" << endl;
    cout << "\t0. Exit" << endl;



        cout << "\nSelect an option to continue." << endl;
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter two numbers to add:\n" ;
                cin >> x >> y;
                result = add(x, y);
                cout << "The sum of " << x << " and " << y << " is " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers to subtract:\n" ;
                cin >> x >> y;
                result = sub(x, y);
                cout << "The difference of " << x << " and " << y << " is " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers to multiply:\n" ;
                cin >> x >> y;
                result = mul(x, y);
                cout << "The product of " << x << " and " << y << " is " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers to divide:\n" ;
                cin >> x >> y;
                if(y==0)
                    cout << "Error:Division by zero\n";
                else {
                result = divide(x, y);
                cout << "The quotient of " << x << " and " << y << " is " << result << endl;
                }
                break;

            case 5:
                cout << "Enter two integers to calculate the modulo:\n" ;
                cin >> n >> r;
                if(r==0)
                    cout << "Error:Division by zero\n";
                else {
                result = mod(n, r);
                cout << "The modulo of " << n << " and " << r << " is " << result << endl;
                }
                break;

            case 6:
                cout << "Enter a number to calculate its square:\n";
                cin >> x ;
                result = sqr(x);
                cout << "The square of " << x << " is " << result << endl;
                break;

            case 7:
                cout << "Enter a number to calculate its square root:\n";
                cin >> x ;
                result = sqrt(x);
                cout << "The square root of " << x << " is " << result << endl;
                break;

            case 8:
                cout << "Enter a number to calculate its cube:\n";
                cin >> x ;
                result = cube(x);
                cout << "The cube of " << x << " is " << result << endl;
                break;

            case 9:
                cout << "Enter a number to calculate its cubic root:\n";
                cin >> x ;
                result = cbrt(x);
                cout << "The cubic root of " << x << " is " << result << endl;
                break;

             case 10:
                cout << "Enter an integer to calculate its factorial:" << endl;
                cin >> n;
                if (n>150)
                    cout << "Math Error" << endl;
                else{
                result = fact(n);
                cout << "The factorial of " << n << " is " << result << endl;
                }
                break;

            case 11:
                cout << "Enter an angle in degree to calculate its sine: " << endl;
                cin >> x;
                result = sin(x);
                cout << " The sine of " << x << " degree is " << result << endl;
                break;

            case 12:
                cout << "Enter an angle in degree to calculate its cosine: " << endl;
                cin >> x;
                result = cos(x);
                cout << " The cosine of " << x << " degree is " << result << endl;
                break;

            case 13:

                cout << "Enter an angle in degree to calculate its tangent: " << endl;
                cin >> x;
                tan(x);
                break;

            case 14:
                cout << "Enter a number to calculate its natural logarithm: " << endl;
                cin >> x;
                if (x <= 0)
                   cout << "Math Error" << endl;
                else {
                result = ln(x);
                cout <<"The natural logarithm of " << x << " is " << result;
                }
                break;

            case 15:
                cout << "Enter a number to calculate its base-10 logarithm: " << endl;
                cin >> x;
                if (x <= 0)
                   cout << "Math Error" << endl;
                else {
                result = log10(x);
                cout << "The base-10 logarithm of " << x << " is " << result;
                }
                break;

            case 16:
                cout << "Enter a number to calculate its antilogarithm: " << endl;
                cin >> x;
                result = antilog_10(x);
                cout << "The antilogarithm of " << x << " is " << result;
                break;

            case 17:
                cout << "Enter a number to calculate its exponential function: " << endl;
                cin >> x;
                result = exp(x);
                cout << "The exponential function of " << x << " is " << result;
                break;

            case 18:
                cout << "Enter two integers n and r to calculate nPr: " << endl;
                cin >> n >> r;
                if (n < 0 || r < 0 || r > n)
                   cout << "Error: Invalid arguments\n";
                 else {
                result = perm(n, r);
                cout << "The permutation of " << n << " and " << r << " is " << result;
                 }
                break;

            case 19:
                cout << "Enter two integers n and r to calculate nCr: " << endl;
                cin >> n >> r;
                 if (n < 0 || r < 0 || r > n)
                   cout << "Error: Invalid arguments\n";
                 else {
                result = comb(n, r);
                cout << "The combination of " << n << " and " << r << " is " << result;
                 }
                break;

            case 20:
                conv();
                break;

            case 0:
                cout << "Thank you for using this program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;

        }

    }while(choice != 0 );

  return 0;
}
