#include <iostream>

int main() {
    // Define a 2D array with 3 rows and 4 columns
    int array2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access and print elements of the 2D array
    std::cout << "Elements of the 2D array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << array2D[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
