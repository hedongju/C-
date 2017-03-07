/*
 * 9-0-ads.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

template <typename T>
T abs(T x){
    return x<0? -x:x;
}

int main(){
    int m = 5;
    double n = -5.5;
    cout << "abs(m) = " << abs(m) << endl;
    cout << "abs(n) = " << abs(n) << endl;
    return 0;
}



