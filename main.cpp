#include <iostream>
#include <string>
#include <limits>
class io {
    public:
        void check() {
            helloworld();
            test();
            test2();
        }
        void requestInput() {
            std::string name;
            std::cout << "Enter your name: ";
            std::getline(std::cin, name);
            std::cout << "Hello, " << name << "!" << std::endl;
        }
    private:
        void helloworld() {
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
};

int main() {
    io io;
    std::string name;
    io.check();
    io.requestInput();
    return 0;
}
