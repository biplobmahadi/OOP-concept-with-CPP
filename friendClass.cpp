#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        friend class Student;
    public:
        void setNameAndAge(string name, int age){
            this->name = name;
            this->age = age;
        }
        void getNameAndAge(){
            cout<<"Name: "<<name<<"Age: "<<age<<endl;
        }
};

// implement the friend class
class Student {
    Person obj;
    public:
        void setData(string name, int age){
            obj.name = name;
            obj.age = age;
        }
        void getData(){
            cout<<"Name: "<<obj.name<<". "<<"Age: "<<obj.age<<endl;
        }

};


int main(){
    Student newObj;
    newObj.setData("Biplob", 24);
    newObj.getData();
    return 0;
}
