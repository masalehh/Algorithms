/**
    factorial.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
using namespace std;

long long factorial(long long number);              //a function for calculate factorial
long long getNumber();                              //a function for take a number from user


int main()                                          //main function started
{
    long long number;
    number = getNumber();                           //call getNumber() function to take input from user

    if(number < 0) return 0;
    else cout << factorial(number) << endl;         //call factorial() function for calculate factorial using recursion

return 0;
}                                                   //end of main


long long getNumber()                               //getNumber() function body started
{
    cout << "Enter a number to find factorail\n";
    long long number;
    cin >> number;

return number;
}


long long factorial(long long number)               //factorial() function body started
{
    if(number == 1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);
    }
}

/**end of program*/
