#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sumEven = 0;
    long double productOdd = 1;  // Corrected syntax: lowercase 'd' in double

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            productOdd *= i;
        }
    }

    cout << "Sum of all even numbers between 1 and " << n << " is: " << sumEven << endl;
    cout << "Product of all odd numbers between 1 and " << n << " is: " << productOdd << endl;

    return 0;
}
