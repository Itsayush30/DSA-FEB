#include <iostream>
using namespace std;

// Recursive function to find the sum of digits of a number
int sumOfDigits(int n) {
    // Base case: if n is 0, the sum of its digits is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: last digit + sum of digits of the rest of the number
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    // Ensure the number is positive
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int result = sumOfDigits(number);
    cout << "The sum of the digits of " << number << " is " << result << "." << endl;

    return 0;
}
