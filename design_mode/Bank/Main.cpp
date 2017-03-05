/*
 * Main.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include "AdBankWorker.h" 
#include "Drawer.cpp" 
using namespace std;

void HowTo(AdBankWorker *bw){

    bw->DoSth(); 
}

int main(){
    AdBankWorker *tester = new Tester;
    HowTo(tester);
    delete tester;
    //扩展AdBankWorker的Drawer功能
    AdBankWorker *drawer = new Drawer;
    HowTo(drawer);
    delete drawer;
    return 0;
}




