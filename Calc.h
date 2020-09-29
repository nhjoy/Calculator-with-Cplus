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
    /*
        Big 3
        used for memory management
        dynamically allocated the memory and destroy when not used
        when one element is called assued other two elements are needed
        thus big 3
    */
    Calc(const Calc &rhs); // constructor, & means memory address of rhs
    ~Calc(); // destructor- removes garbage
    const Calc &operator=(const Calc &rhs);  // copy assignment- return const Calc object and overload "=" operator
    // methods
    double process (std::string userInput, double prevValue);
    void print();
    std::string* storedExpressions;
    void setStored(size_t newStored);
    size_t getStored();
};

#endif
