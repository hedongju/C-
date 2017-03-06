/*
 * Singleton.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class Singleton{
    private:
        Singleton(){
            cout << "Singleton ..." << endl;
        }
    public:
        static Singleton * GetInstance(){
            if(m_Instance == NULL){
                m_Instance = new Singleton;
            }
            return m_Instance;
        }
    private:
        static Singleton *m_Instance;
};

Singleton *Singleton::m_Instance = NULL;

int main(){
    Singleton *p1 = Singleton::GetInstance();
    Singleton *p2 = Singleton::GetInstance();
    if(p1 == p2){
        cout << "��ͬһ������" << endl;
    }
    else{
        cout << "����ͬһ������"<< endl;
    }

    return 0;
}

