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
bool TimeStamp::operator == (TimeStamp S)
{
    return (this->hour == S.hour && this->min == S.min && this->sec == S.sec);

}
bool TimeStamp::operator != (TimeStamp S)
{
    return (this->hour != S.hour || this->min != S.min || this->sec != sec);

}
bool TimeStamp::operator > (TimeStamp S)
{
    return(this->hour > S.hour && this->min > S.min && this->sec > S.sec);

}
bool TimeStamp::operator < (TimeStamp S)
{
    return(this->hour < S.hour && this->min < S.min && this->sec < S.sec);

}

