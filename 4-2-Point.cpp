/*
 * 4-2-Point.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class Point{
    private:
        int X,Y;
    public:
        Point(){X = 0;Y = 0;}
        Point(int xx,int yy){
            X = xx;
            Y = yy;
        }
        Point(Point &p);
        int GetX(){return X;}
        int GetY(){return Y;}
};

Point::Point(Point &p){
    X = p.X;
    Y = p.Y;
    cout << "拷贝构造函数被调用" << endl;
}

void func1(Point p){
    cout << p.GetX() << endl;
}

Point func2(){
    Point A(1,2);
    return A;
}
int main(){
    Point A(2,3);
    Point B(A);
    cout << B.GetX() << endl;
    func1(B);
    cout << "++++++++++++++++++++++++" << endl;
    B = func2();//拷贝构造函数未被调用?
    cout << B.GetX() << endl;

}

