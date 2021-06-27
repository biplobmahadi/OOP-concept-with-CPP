#include <iostream>
using namespace std;

class Base{
    public:
        virtual void greet(){
            cout<<"Hi there!"<<endl;
        }
};

class Derived: public Base{
    public:
        void greet() override {
            cout<<"Hi man!"<<endl;
        }
};

int main() {
    Base *ptr1;
    Derived obj;
    ptr1 = &obj;
    ptr1->greet();
    return 0;
}