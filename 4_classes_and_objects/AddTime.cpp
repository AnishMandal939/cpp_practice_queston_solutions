/*
Question is to add time 
i.e 5 hours + 30 minutes
    6 hours + 50 minutes
    --------------------
res->12 hours 20 minutes  

using class

*/ 

#include<bits/stdc++.h>
using namespace std;


class Time{
    private:
        int hours, minutes, seconds;
    public:
        void getTime();
        void putTime();
        void addTime(T1, T2);
};
void Time::getTime(){
    cout<<endl;
    cout<<"Time after add: "<<endl;
    cout<< hours << ":" << minutes << ":" << seconds<<endl;
}

void Time::addTime(Time1, Time2){
    this->seconds= T1.seconds+ T2.seconds;
    this->minutes = T1.minutes+T2.minutes+this->seconds/60;
    this->hours = T1.hours+T2.hours+(this->minutes/60);
    this->minutes%=60;
    this->seconds%=60;
}

int main(){
    int T1,T2,T3;
    T1.getTime();
    T2.getTime();
    // add two times
    T3.addTime(T1, T2);
    T3.putTime();

    return 0;
}