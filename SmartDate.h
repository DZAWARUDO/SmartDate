#pragma once
class SmartDate
{
private:
    short day;
    short month;
    short year;
public:
    SmartDate(short _d, short _m, short _y);
};

SmartDate::SmartDate(short _d, short _m, short _y)
{
    day = _d;
    month = _m;
    year = _y;
}
