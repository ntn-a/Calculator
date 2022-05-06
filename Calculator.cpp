// Nhan Nguyen
// May 5th, 2022
#include "Calculator.h"

/*
    @param Double
    @param Double
    Returns two doubles added together
*/
void Calculator::addition(double a, double b){
    result = a+b;
}

/*
    @param Double
    @param Double
    Returns two doubles subtracted from each other
*/
void Calculator::subtraction(double a, double b){
    result = a-b;
}

/*
    @param Double
    @param Double
    Multiplies two doubles together
*/
void Calculator::multiplcation(double a, double b){
    result = a*b;
}

/*
    @param Double
    @param double
    Divides two doubles together.
*/
void Calculator::division(double a, double b){
    if (b == 0){
        result = NAN;
    }
    else{
        result = a/b;
    }
}

/*
    Returns the result stored.
*/
double Calculator::returnResult() const{
    return result;
}

/*
    Displays result (only if used in CLI)
*/
/* void Calculator::displayResult() const{
    std::cout << result << std::endl;
} */