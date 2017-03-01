/*
 * 4-2-Point.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

const float PI = (float)3.14159;
const float FrencePrice = 35.0;
const float ConcretePrice = 20.0;

class Circle {
    private:
        float radius;
    public:
        Circle(float r);
        float Perimeter();
        float Area();
};

Circle::Circle(float r):radius(r){}

float Circle::Perimeter(){
    return 2*PI*radius;
}

float Circle::Area(){
    return PI*radius*radius;
}

int main(){
    float radius = 0;
    float FrenceConst = 0;
    float ConcreteConst = 0;
    cout << "Enter the radius of the Pool" << endl;
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius + 3);
    FrenceConst = PoolRim.Perimeter() * FrencePrice;
    cout << "The FrenceConst is " << FrenceConst << endl;
    ConcreteConst = (PoolRim.Area() - Pool.Area()) * ConcretePrice;
    cout << "The ConcreteConst is " << ConcreteConst << endl;
}
