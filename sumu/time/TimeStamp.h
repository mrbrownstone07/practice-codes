#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class TimeStamp
{
    public:
        TimeStamp();
        TimeStamp(int hour, int sec, int min);
        bool operator == (const TimeStamp&);
        bool operator != (const TimeStamp&);
        bool operator > (const TimeStamp&);
        bool operator < (const TimeStamp&);


        void Print();
    protected:
    private:
        int hour;
        int sec;
        int min;
};

#endif // TIMESTAMP_H
