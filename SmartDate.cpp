/*
* Проэкт "Класс умная дата"
*/
#include <iostream>

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


int main()
{
    SmartDate d1(25,04,2023);
    std::cout << "Hello World!\n";
}
