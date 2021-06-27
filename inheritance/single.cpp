#include <iostream>
using namespace std;

class Person {
    private:
        string name;
    protected:
        int age;
    public:
        Person(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
};

class Student : public Person {
    public:
        Student(string name, int age): Person(name){
            this->age = age;
        }
        
        void getData(){
            cout<<"Name: "<<getName()<<". "<<"Age: "<<age<<endl;
        }
};

int main() {
    Student obj("Biplob", 23);
    obj.getData();
    return 0;
}