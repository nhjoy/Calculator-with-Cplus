// header file

#include <string>

#ifndef MyCalc_H
#define MyCalc_H

class Calc
{
private:
    size_t store;
public:
    Calc(int val);
    // ~Calc();

    // methods
    double process (std::string userInput, double prevValue);
    void print();
    std::string* storedExpressions;
    void setStored(size_t newStored);
    size_t getStored();
};

#endif
