#include <iostream>

using namespace std;

int main() {
    // Define a 2D array with 3 rows and 4 columns
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    // Initialize the array with some values
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++;
        }
    }

    // Print the array
    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
