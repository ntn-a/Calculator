#include "Calculator.h"

void Calculator::addition(double a, double b){
    result = a+b;
}

void Calculator::subtraction(double a, double b){
    result = a-b;
}

void Calculator::multiplcation(double a, double b){
    result = a*b;
}

void Calculator::division(double a, double b){
    if (b == 0){
        result = NAN;
    }
    else{
        result = a/b;
    }
}

double Calculator::returnResult() const{
    return result;
}

void Calculator::displayResult() const{
    std::cout << result << std::endl;
}