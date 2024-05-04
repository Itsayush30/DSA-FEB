#include <iostream>

void swap(int* x, int* y) {
  int temp = *x; // Dereference x to get its value and store it in temp
  *x = *y; // Dereference y to get its value and assign it to x
  *y = temp; // Assign the stored value (originally in x) to y
}

int main() {
  int a = 5, b = 10;

  std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

  swap(&a, &b); // Pass addresses of a and b

  std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

  return 0;
}
