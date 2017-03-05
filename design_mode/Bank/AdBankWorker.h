/*
 * 2_1.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef _AdBankWorker_H
#define _AdBankWorker_H
#include <iostream>
using namespace std;

class AdBankWorker{
    public:
        virtual void DoSth() = 0;

};



//参照Tester扩展AdBankWorker的功能
class Tester:public AdBankWorker{
    public:
        virtual void DoSth(){
            cout << "Tester..." << endl;
        }
};

#endif
