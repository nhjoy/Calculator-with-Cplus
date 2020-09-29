#include <iostream>  // user i/o
#include "Calc.h"    // declaring my header
#include "stddef.h"  // defines various variable types and macros
#include <cmath>     //declares a set of functions to compute common mathematical operations and transformations



Calc::Calc(int values):storedExpressions(new std::string[values]), stored(0){
}

Calc::Calc(const Calc &rhs){
}

Calc::~Calc(){
}

const Calc &Calc::operator=(const Calc &rhs){
}
