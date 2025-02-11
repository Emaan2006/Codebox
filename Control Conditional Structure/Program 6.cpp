#include <iostream>
using namespace std;

int main() {
    int number, i, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (i=1; i <= number; i++) {
        if (number % i == 0) { 
            count++; 
        }
    }

    cout << ((count == 2) ? "Prime number" : "Not a prime number") << endl;

    return 0;
}
