#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    std::cout << value << "\n";
    std::cout << "Value: " << *ptr << "\n";
    return 0;
}