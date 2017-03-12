/*
 * template-class.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

template <typename T>
class A{
    public:
        A(T a ){
            this->a = a;
        }
        void printA(){
            cout << "a:" << a << endl;
        }
    protected:
        T a;
};


//从模板类派生普通类
class B:public A<int>{
    public:
        B(int a,int b):A<int>(a){
            this->b = b;
        }
        void printB(){
            cout << "a:" << a << " " << "b:" << b << endl;
        }
    private:
        int b;
};

//模板类派生模板类
template <typename T>
class C:public A<T>{
    public:
        C(T c,T a):A<T>(a){
            this->c = c;
        }
        void printC(){
            cout << "c:" << c << endl;
        }
    protected:
        T c;
};
int main(){

    A<int> a1(10);
    a1.printA();

    B b1(1,2);
    b1.printB();

    C<int> c1(3,4);
    c1.printC();
    return 0;
}




