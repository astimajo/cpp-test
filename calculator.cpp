#include <iostream>

using namespace std; 

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main(void)
{
  do 
  {
    int x, y;
    char symbol; 

    cout << "Hello World! " << "This is my very first C++ Program\n\n";
    cout << "This is a simple 4 operator calculator (C++ test)\n\n";
    cout << "please use basic operators +, -, *, /\n\n";
  
    cout << "please input first number\n";
    cin >> x;
    cout << "please input second number\n";
    cin >> y;

    cout << "please input an operator\n";
    cin >> symbol;

    if (symbol == '+')
    {
      cout << "SUM = " << addition(x, y) << "\n";
    } 
    else if (symbol == '-')
    {
      cout << "DIFFERENCE = " << subtraction(x, y) << "\n";
    }
    else if (symbol == '*')
    {
      cout << "PRODUCT = " << multiplication(x, y) << "\n";
    }
    else if (symbol == '/')
    {
      cout << "QUOTIENT = " << division(x, y) << "\n";
    }
  
    
  }
  while (true);
  
}

int addition(int x, int y)
{
  return x + y;
}

int subtraction(int x, int y)
{
  return x - y;
}

int multiplication(int x, int y)
{
  return x * y;
}

int division(int x, int y)
{
  return x / y;
}
