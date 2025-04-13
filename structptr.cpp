#include <iostream>

struct Animal {
    std::string type;
};

int main() {
        Animal dog;
        dog.type = "Golden Retriever";

        Animal* ptr = &dog;
        std::cout << ptr->type << "\n";
}