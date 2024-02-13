#include <iostream>

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        sum += i * i;
    }

    std::cout << "Sum of the series is: " << sum << std::endl;
      std::cout << "Programmer : Sandeep kumar " << std::endl;

    return 0;
}