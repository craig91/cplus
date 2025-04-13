#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person p;
    p.name = "Craig";
    p.age = 33;

    std::cout << p.name << " is " << p.age << " years old.\n";
    return 0;
}