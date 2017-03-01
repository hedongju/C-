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
};

Point::Point(Point &p){
    X = p.X;
    Y = p.Y;
    cout << "Point 拷贝构造函数被调用" << endl;
}

class Line {
    private:
        Point p1,p2;
        double len;
    public:
        Line(Point p1,Point p2);
        Line(Line &L);
        double GetLen(){return len;}
};

Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
    cout << "Line 构造函数被调用..." << endl;
    double x = (double)(p1.GetX() - p2.GetX());
    double y = (double)(p1.GetY() - p2.GetY());
    len = sqrt(x*x + y*y);
}

Line::Line(Line &L):p1(L.p1),p2(L.p2),len(L.len){
    cout << "Line 拷贝构造函数被调用..." << endl;
}

int main(){
    Point myp1(1,1),myp2(4,5);
    Line line1(myp1,myp2);
    Line line2(line1);

    cout << "The length of line1 is " << line1.GetLen() << endl;
    cout << "The length of line2 is " << line2.GetLen() << endl;
}

