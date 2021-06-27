#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        friend void getData(Person);
    public:
        void setNameAndAge(string name, int age){
            this->name = name;
            this->age = age;
        }
        void getNameAndAge(){
            cout<<"Name: "<<name<<"Age: "<<age<<endl;
        }
};

// implement the friend function
void getData(Person obj){
    cout<<"Name: "<<obj.name<<". "<<"Age: "<<obj.age<<endl;
}

int main(){
    Person newObj;
    newObj.setNameAndAge("biplob", 23);
    getData(newObj);
    return 0;
}
