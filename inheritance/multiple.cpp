#include <iostream>
using namespace std;

class Animal {
    private:
        string name;
    public:
        Animal(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
};

class Person {
    protected:
        int age;
    public:
        Person(int age){
            this->age = age;
        }
};

class Student : protected Animal, public Person {
    public:
        Student(string name, int age): Animal(name), Person(age){
            this->age = age;
        }
        
        void getData(){
            cout<<"Name: "<<getName()<<". "<<"Age: "<<age<<endl;
        }
};

int main() {
    Student obj("Biplob", 24);
    obj.getData();
    return 0;
}