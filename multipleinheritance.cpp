#include <iostream>

class Mammal {
public:
    void giveBirth() {
        std::cout << "Mammal gives birth." << std::endl;
    }
};

class Bird {
public:
    void layEggs() {
        std::cout << "Bird lays eggs." << std::endl;
    }
};

class Fish : public Mammal, public Bird {
public:
    void swim() {
        std::cout << "Fish swims." << std::endl;
    }
};

int main() {
    Fish myFish;
    myFish.giveBirth(); 
    myFish.layEggs();   
    myFish.swim();      
    return 0;
}
