#include <iostream>
using namespace std;

class Base {
    public:
        virtual void show () = 0;
};

class Derived : public Base {
    public:
        void show () {
            cout << " hello" << endl;
        }
};

int main ()
{
    // Base b;
    // b.show();

    Derived d;
    d.show();

    return 0;
}