#include <iostream>
using namespace std;

class Cylinder {
    double radius;
    double height;
    const double pi;

public:
    Cylinder() : pi(3.14159) {
        radius = 0;
        height = 0;
    }

    Cylinder(double r, double h) : pi(3.14159) {
        radius = r;
        height = h;
    }

    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double h) {
        height = h;
    }

    double calculateVolume() const {
        return pi * radius * radius * height;
    }
};

int main() {
    Cylinder c(3, 5);
    cout << c.calculateVolume();
    return 0;
}
