/*
 * Drawer.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef _Drawer_H_
#define _Drawer_H_
#include "AdBankWorker.h"

class Drawer:public AdBankWorker{
    public:
       virtual void DoSth(){
            cout << "Drawer..." << endl;
        }
};

#endif
