#include <iostream>
#include <string>
#include <limits>
class class1 {
    public:
        void hello() {
            std::cout << "Hello world!" << std::endl;
        }
        void test() {
            std::cout << "This is an example class." << std::endl;
        }
        void test2() {
            for (int i = 1; i < 10; i++)
            {
            std::cout << "testing" << i << std::endl;
            }
        }
        void requestInput() {
            std::string input;
            std::cout << "type somthing:" << std::endl;
            if (input == "") {
                std::getline (std::cin, input);
            }
            std::cout << "You entered: " << input << std::endl;
        }
};

int main() {
    class1 class1;
    std::string name;
    class1.hello();
    class1.test();
    class1.test2();
    class1.requestInput();
    return 0;
}
