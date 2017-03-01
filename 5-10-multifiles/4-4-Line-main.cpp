/*
 * 4-4-Line-main.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include "4-4-Line.h"

int main(){
    Point myp1(1,1),myp2(4,5);
    Line line1(myp1,myp2);
    Line line2(line1);

    cout << "The length of line1 is " << line1.GetLen() << endl;
    cout << "The length of line2 is " << line2.GetLen() << endl;
}
