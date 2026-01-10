#include <iostream>
#include <string>
using namespace std;

class Chair {
    int height;
    int width;
    double price;
    string color;

public:
    Chair() {
        height = 0;
        width = 0;
        price = 0;
        color = "";
    }

    Chair(int h, int w, double p, string c) {
        height = h;
        width = w;
        price = p;
        color = c;
    }

    void input() {
        cin >> height >> width >> price >> color;
    }

    void display() {
        cout << height << " " << width << " " << price << " " << color << endl;
    }

    static void setPrice(Chair &c, double p) {
        c.price = p;
    }

    ~Chair() {}
};

int main() {
    Chair c1;
    c1.input();
    Chair::setPrice(c1, 1500);
    c1.display();
    return 0;
}
