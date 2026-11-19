#include <iostream>

using namespace std;

int main() {
    int number;

    // Ask the user for input
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        cout << number << " is an Even number." << endl;
    } else {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}
