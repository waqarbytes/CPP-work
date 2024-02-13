#include <iostream>

class A {
public:
    void fun() {
        std::cout << " A is best." << std::endl;
    }
};

class B : public A {
public:
    void func() {
        std::cout << "B is Better." << std::endl;
    }
};

int main() {
    A myA;
    myA.fun();  
    myA.func(); 
    return 0;
}
