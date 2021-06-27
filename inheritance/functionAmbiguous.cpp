#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"Hi there!"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Hi man!"<<endl;
        }
};

class Final : public Base1, public Base2 {
    public:
        void greet(){
            Base1::greet();
        }
};

int main() {
    Final obj;
    obj.greet();
    return 0;
}