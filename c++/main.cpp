#include <iostream>
#include <cmath>
#include <cfloat>
#include "operations.h"

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
void display(double, double, double, char);

int main()
{
    char op, ch;
    int choice;
    double num1, num2, res;

    //input numbers
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> num1 >> num2;

    //option operation
    std::cout << "Available " << std::endl;
    std::cout << "1. sum" << std::endl;
    std::cout << "2. subtration" << std::endl;
    std::cout << "3. multiply" << std::endl;
    std::cout << "4. division" << std::endl;
    std::cout << "5. exit" << std::endl;

    //choose operation
    std::cout << "Choose the operation" << std::endl;
    std::cin >> choice;
do{
    switch(choice)
      {
        case 1:
          std::cout << "Result = " << add(num1, num2) << std::endl;
          break;
        case 2:
          std::cout << "Result = " << subtract(num1, num2) << std::endl;
            break;
        case 3:
          std::cout << "Result = " << multiply(num1, num2) << std::endl;
          break;
        case 4:
          std::cout << "Result = " << divide(num1, num2) << std::endl;
          break;
        case 5:
          std::cout << "Thank You." << std::endl;
          exit(0);
        default:
          std::cout << "Error! Invalid Operator" << std::endl;
      }

      std::cout << "Do you want to continue? Y/N :: " ;
      std::cin >> ch;
      std::cout << "-----------------------------" << std::endl;
  } while(ch == 'Y');

  std::cout << "Thank You." << std::endl;
  return 0;
}