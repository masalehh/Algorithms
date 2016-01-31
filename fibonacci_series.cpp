/**
    fibonacci_series.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
using namespace std;

void fibonacciSeries(int nthTerm);                  //a function to findout nth term of fibonacci series


int main()                                          //main function started
{
    int nthTerm;
    cout << "Enter length of fibonacci series: ";
    cin  >> nthTerm;                                 //take input from user nthTerm of the series

    fibonacciSeries(nthTerm);                       //calling the function fibonacciSeries()


return 0;
}                                                   //end of main function



void fibonacciSeries(int nthTerm)                   //fibonacciSeries() function body started
{
    int firstTerm = 0, secondTerm = 1;
    cout << firstTerm << " " << secondTerm << " ";


    int nextTerm;
    for(int i=0; i<=nthTerm-2; i++)
    {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " ";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

/**end of program*/
