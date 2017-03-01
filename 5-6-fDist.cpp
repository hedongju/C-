/*
 * 4-2-Point.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <cmath>
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
        friend float fDist(Point &a,Point &b);
};

Point::Point(Point &p){
    X = p.X;
    Y = p.Y;
    cout << "Point 拷贝构造函数被调用" << endl;
}

float fDist(Point &a,Point &b){
    float x = (float)(a.X - b.X);
    float y = (float)(a.Y - b.Y);
    return sqrt(x*x + y*y);
}
int main(){
    Point myp1(1,1),myp2(4,5);
    float dist = fDist(myp1,myp2);    
    cout << "fDist is " << dist << endl;
}

