#include <iostream>
class class1 {
    public:
        void hello() {
            std::cout << "Hello world!" << std::endl;
        }
        void test() {
            std::cout << "This is an example class." << std::endl;
        }
};

int main() {
    class1 class1;
    class1.hello();
    class1.test();
    return 0;
}