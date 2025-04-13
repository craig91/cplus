#include <iostream>

struct Animal {
    std::string type;
};

int main() {
        Animal dog;
        dog.type = "Golden Retriever";

        Animal* ptr = &dog;
        
        std::cout << "Value of dog.type: " << dog.type << "\n";
        std::cout << "Value via the pointer: " << ptr->type << "\n";
        std::cout << "Address of the dog: " << &dog << "\n"; 
        std::cout << "Value stored in the pointer: " << ptr << "\n";
        std::cout << "Address of the ptr itself: " << &ptr << "\n";
}