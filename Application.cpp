#include "Calculator.h"

void menu();
void entry(double&, double&);

int main(){
    Calculator c;
    int choice;
    double a, b;
    while (choice != 6){
        menu();
        std::cin >> choice;
        switch (choice){
            case 1:
                entry(a, b);
                c.addition(a, b);
                c.displayResult();
                break;
            case 2:
                entry(a, b);
                c.subtraction(a, b);
                c.displayResult();
                break;
            case 3:
                entry(a, b);
                c.multiplcation(a, b);
                c.displayResult();
                break;
            case 4:
                entry(a, b);
                c.division(a, b);
                c.displayResult();
                break;
            case 5:
                c.displayResult();
                break;
            default:
                std::cout << "Please enter a valid choice!" << std::endl;
                break;
        }
    }
    return 0;
}

void menu(){
    std::cout << "\n\tTerminal Calculator" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Divsion" << std::endl;
    std::cout << "5. Show Last Result" << std::endl;
    std::cout << "6. Exit" << std::endl << std::endl;
}

void entry(double& a, double& b){
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
}