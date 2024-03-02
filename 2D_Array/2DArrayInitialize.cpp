#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements of the 2D array
    cout << "Element at row 2, column 3: " << arr[1][2] << endl; // Outputs: 7

    return 0;
}
