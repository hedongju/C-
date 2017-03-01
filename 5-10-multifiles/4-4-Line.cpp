/*
 * 4-2-Point.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include "4-4-Line.h"

Point::Point(Point &p){
    X = p.X;
    Y = p.Y;
    cout << "Point 拷贝构造函数被调用" << endl;
}


Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
    cout << "Line 构造函数被调用..." << endl;
    double x = (double)(p1.GetX() - p2.GetX());
    double y = (double)(p1.GetY() - p2.GetY());
    len = sqrt(x*x + y*y);
}

Line::Line(Line &L):p1(L.p1),p2(L.p2),len(L.len){
    cout << "Line 拷贝构造函数被调用..." << endl;
}


