#include <iostream>
using namespace std;

class Base{
    public:
        virtual void greet()=0;
        // pure virtual func
};

class Derived: public Base{
    public:
        void greet() override {
            cout<<"Hi man!"<<endl;
        }
};

int main() {
    Derived obj;
    obj.greet();
    return 0;
}