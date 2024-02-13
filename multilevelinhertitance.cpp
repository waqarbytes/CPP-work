#include <iostream>

class Grandparent {
public:
    void showFamilyName() {
        std::cout << "Family name: Ayoub" << std::endl;
    }
};

class Parent : public Grandparent {
public:
    void showParentName() {
        std::cout << "Parent: Kamal" << std::endl;
    }
};

class Child : public Parent {
public:
    void showChildName() {
        std::cout << "Child: Ansar" << std::endl;
    }
};

int main() {
    Child Ansar;
    Ansar.showFamilyName();
    Ansar.showParentName(); 
    Ansar.showChildName();  
    return 0;
}
