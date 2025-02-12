#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Display of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show of Derived class" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Calling function of Base class
    obj.show();    // Calling function of Derived class
    return 0;
}