#include <iostream>
class Example {
    public:
        void display() {
            std::cout << "This is an example class." << std::endl;
        }
}

int main() {
    Example ex;
    std::cout << "Hello, World!" << std::endl;
    ex.display();
    return 0;
}