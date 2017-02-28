/*
 * 4-1-Clock.cpp
 * Copyright (C) 2017 hdj <hdj@hdj-System-Product-Name>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
using namespace std;

class Clock{
    public:
        Clock(int NewH,int NewM,int NewS);
        Clock(){Hour = 0;Minute = 0;Second = 0;}
        void SetTime(int NewH = 0,int NewM = 0,int NewS = 0);
        void ShowTime();
    private:
        int Hour,Minute,Second;
};


Clock::Clock(int NewH,int NewM,int NewS){
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
}
void Clock::SetTime(int NewH,int NewM,int NewS){
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
}

inline void Clock::ShowTime(){
    cout << Hour << ":" << Minute << ":" << Second << endl;
}

int main(){
    Clock myClock(0,0,0);//�����Զ����˹��캯������������������Ĭ�ϵĹ��캯�������캯�����βΣ����Խ�������ʱ���������ʼֵ����Ȼ���뱨��
    Clock c2;
    cout << "first time set and output:" << endl;
    myClock.SetTime();
    myClock.ShowTime();
    cout << "second time set and output:" << endl;
    myClock.SetTime(8,30,30);
    myClock.ShowTime();
}
