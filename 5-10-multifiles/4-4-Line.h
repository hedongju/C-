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


class Line {
private:
    Point p1,p2;
    double len;
public:
    Line(Point p1,Point p2);
    Line(Line &L);
    double GetLen(){return len;}
};

