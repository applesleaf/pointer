#include <iostream>

int main() {
    int value1, value2, value3;

    // Ask the user to enter three integer values
    std::cout << "Enter the first integer: ";
    std::cin >> value1;

    std::cout << "Enter the second integer: ";
    std::cin >> value2;

    std::cout << "Enter the third integer: ";
    std::cin >> value3;

    // Create integer pointers and allocate memory for each variable
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display the contents of variables and pointers
    std::cout << "Contents of variables:" << std::endl;
    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;
    std::cout << "Value3: " << value3 << std::endl;

    std::cout << "Contents of pointers:" << std::endl;
    std::cout << "Ptr1: " << *ptr1 << std::endl;
    std::cout << "Ptr2: " << *ptr2 << std::endl;
    std::cout << "Ptr3: " << *ptr3 << std::endl;

    // Deallocate memory and delete pointers
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}





