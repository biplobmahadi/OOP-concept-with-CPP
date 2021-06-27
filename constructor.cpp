#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string name, int age) : name(name), age(age){}
        ~Person(){cout<<"Distructor work"<<endl;} // use to free memory which use for constructor

        void getData(){
            cout<<"Name: "<<name<<". "<<"Age: "<<age<<endl;
        }
};


int main() {
    Person obj("biplob", 23);
    obj.getData();
    cout<<"Distructor will call after everything"<<endl;
    return 0;
}