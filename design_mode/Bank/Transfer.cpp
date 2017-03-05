/*
 * Transfer.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef _Transfer_H_
#define _Transfer_H_
#include "AdBankWorker.h"

class Transfer:public AdBankWorker{
    public:
        virtual void DoSth(){
            cout << "Transfer..." << endl;
        }
};

#endif
