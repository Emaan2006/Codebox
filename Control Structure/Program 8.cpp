#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "The number is a multiple of both 3 and 5." << endl;
    } 
    else {
        cout << "The number is not a multiple of both 3 and 5." << endl;
    }
    return 0;
}
