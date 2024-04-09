#include <iostream>
#include <string>

using namespace std;

// Define a class called "Car"
class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    // Method to display car information
    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Toyota", "Camry", 2020);

    // Call the displayInfo method to show car information
    myCar.displayInfo();

    return 0;
}
