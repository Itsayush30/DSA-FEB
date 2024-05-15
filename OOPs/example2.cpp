#include <iostream>
#include <vector>
#include <algorithm>

// Function object to use in sorting
struct Compare {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    // Vector of integers
    std::vector<int> numbers = {5, 2, 8, 1, 6};

    // Lambda function to print each element of the vector
    auto printVector = [](const std::vector<int>& vec) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    };

    std::cout << "Original vector: ";
    printVector(numbers);

    // Sorting the vector using a custom comparator
    std::sort(numbers.begin(), numbers.end(), Compare());

    std::cout << "Sorted vector in descending order: ";
    printVector(numbers);

    // Using lambda functions and algorithms to manipulate the vector
    int sum = 0;
    std::for_each(numbers.begin(), numbers.end(), [&sum](int num) {
        sum += num;
    });

    std::cout << "Sum of elements: " << sum << std::endl;

    // Using lambda function to find the maximum element in the vector
    auto maxElement = *std::max_element(numbers.begin(), numbers.end());

    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}
