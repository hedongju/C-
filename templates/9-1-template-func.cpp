#include<iostream>
using namespace std;

template <typename T>
T abs(T x){
    return x < 0? -x:x;
}
int main(){
    int m = 5;
    float n = -5.5;
    cout << "abs(m) = " << abs(m) << endl;
    cout << "abs(n) = " << abs(n) << endl;

    cout << "hello ..." << endl;
}
