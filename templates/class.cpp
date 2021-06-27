#include <iostream>
using namespace std;

template <class T>
class Base{
    T a;
    T b;
    public:
        Base(T a, T b){
            this->a = a;
            this->b = b;
        }
        T sum(){
            return a + b;
        }
};

int main() {
    Base <int> obj1(3, 6);
    Base <float> obj2(3.6, 6.2);
    int res1 = obj1.sum();
    cout<<res1<<endl;
    float res2 = obj2.sum();
    cout<<res2<<endl;
    return 0;
}