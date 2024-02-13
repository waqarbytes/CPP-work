#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height)
        : width(width), height(height) {}

    double getArea() const override {
        return width * height;
    }

private:
    double width;
    double height;
};

int main() {
    Rectangle r(8, 4);
    cout << "Area of rectangle: " << r.getArea() << endl;
      std::cout << "Programmer : Sandeep kumar" << std::endl;
    return 0;
}