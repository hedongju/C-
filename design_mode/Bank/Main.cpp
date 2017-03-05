/*
 * Main.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include "AdBankWorker.h" 
using namespace std;

void HowTo(AdBankWorker *bw){

    bw->DoSth(); 
}

int main(){
    AdBankWorker *tester = new Tester;
    HowTo(tester);
    delete tester;
    return 0;
}




