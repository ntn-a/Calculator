#include <iostream>
#include <cmath>

class Calculator{
public:
    void addition(double, double);
    void subtraction(double, double);
    void multiplcation(double, double);
    void division(double, double);
    double returnResult() const;
    void displayResult() const;
private:
    double result;
};