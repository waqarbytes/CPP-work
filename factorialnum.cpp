#include <iostream>

int main() {
    int num, fact = 1;

    std::cout << "Enter a number: ";
    std::cin >> num;

    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    std::cout << "Factorial of the number is: " << fact << std::endl;
      std::cout << "Programmer : Sandeep kumar" << std::endl;


    return 0;
}