/*
 * 8-1-Complex.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class Complex{
    private:
        double real,impl;
    public:
        Complex(double r = 0.0,double i = 0.0);
//        Complex(Complex &c);
        Complex operator + (Complex c2);
        Complex operator - (Complex c2);
        void display();
};



Complex::Complex(double r,double i){
    real = r;
    impl = i;
    cout << "Complex 构造函数 called ..." << endl;
}

//Complex::Complex(Complex &c){
//    real = c.real;
//    impl = c.impl;
//    cout << "Complex 拷贝构造函数 called ..." << endl;
//}

Complex Complex::operator +(Complex c2){
    return Complex((real + c2.real),(impl + c2.impl));
}

Complex Complex::operator -(Complex c2){
    return Complex(real - c2.real,impl - c2.impl);
}

void Complex::display(){
    cout << "(" << real << "," << impl << ")" << endl;
}

int  main(){
    Complex c1(5,4),c2(2,10),c3;
    cout << "c1="; c1.display();
    cout << "c2="; c2.display();
    c3 = c1 - c2;
    cout << "c3 = ";c3.display();
    c3 = c1 + c2;
    cout << "c3 = ";c3.display();
    return 0;
}
