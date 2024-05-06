#include <iostream>

using namespace std;

// Function to add two numbers using pointers
int add(int* x, int* y) {
  return *x + *y; // Dereference pointers to access and sum values
}

// Function to subtract two numbers using pointers
int subtract(int* x, int* y) {
  return *x - *y; // Dereference pointers to access and subtract values
}

int main() {
  int num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Enter operation (+ or -): ";
  cin >> operation;

  int result;
  int* ptr1 = &num1; // Get address of num1
  int* ptr2 = &num2; // Get address of num2

  switch (operation) {
    case '+':
      result = add(ptr1, ptr2);
      break;
    case '-':
      result = subtract(ptr1, ptr2);
      break;
    default:
      cout << "Invalid operation!" << endl;
      return 1;
  }

  cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

  return 0;
}
