#include <iostream>
using namespace std;

class Base{
    public:
        int age;
};

class Derived1 : virtual public Base{
    public:
        void setData(int age){
            this->age = age;
        }
};

class Derived2 : virtual public Base{
    public:
        void getData(){
            cout<<"Age: "<<age<<endl;
        }
};

class Final: public Derived1, public Derived2{
    public:
        void finallyGet(){
            cout<<"Age is: "<<age<<endl;
        }
};

int main() {
    Final obj;
    obj.setData(80);
    obj.finallyGet();
    return 0;
}