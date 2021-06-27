#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b){
    return a + b;
}

int main() {
    int res1 = sum(4, 6);
    cout<<res1<<endl;
    float res2 = sum(3.5, 4.2);
    cout<<res2<<endl;
    return 0;
}