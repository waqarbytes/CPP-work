#include<iostream>
using namespace std;

class Animal {
public:
  virtual void makeSound(){
    cout<<"The animal make a sound"<<endl;
  
  }
};
class Cat : public Animal {
    public :
    void makeSound() override{
          cout<<"The cat says: Meow!"<<endl;
    }
};

int main()
{
    Animal myAnimal;
    Animal* myCat = new Cat();

    myAnimal.makeSound();
    myCat->makeSound();
      std::cout << "Programmer : Sandeep kumar" << std::endl;

    delete myCat;
    return 0;
}