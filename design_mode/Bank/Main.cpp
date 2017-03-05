/*
 * Main.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include "AdBankWorker.h" 
#include "Drawer.cpp" 
#include "Transfer.cpp" 
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
    //扩展AdBankWorker的Transfer功能
    AdBankWorker *transfer = new Transfer;
    HowTo(transfer);
    delete transfer;
    return 0;
}




