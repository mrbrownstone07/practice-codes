#include "TimeStamp.h"
#include <iostream>
using namespace std;

TimeStamp::TimeStamp()
{
    hour = 0;
    min = 0;
    sec = 0;
}
TimeStamp::TimeStamp(int hour, int min, int sec){
    this-> hour = hour;
    this-> min = min;
    this-> sec = sec;

}
void TimeStamp::Print(){
    cout<< hour << ":" << min << ":" << sec<< "\n";
}
bool TimeStamp::operator == (const TimeStamp& S){
    return (hour == S.hour && min == S.min && sec == S.sec);
}
bool TimeStamp::operator != (const TimeStamp& S){
    return (hour != S.hour || min != S.min || sec != S.sec);
}
bool TimeStamp::operator > (const TimeStamp& S){
    if(hour > S.hour) {return true;}
    if(hour == S.hour && min > S.min) {return true;}
    if(hour == S.hour && min == S.min && sec > S.sec) {return true;}   
    return false;
}
bool TimeStamp::operator < (const TimeStamp& S){
    if(hour < S.hour) {return true;}
    if(hour == S.hour && min < S.min) {return true;}
    if(hour == S.hour && min == S.min && sec == S.sec) {return true;}
    return false;
}

