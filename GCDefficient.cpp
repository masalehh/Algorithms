/**
    GCDefficient.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
using namespace std;


int gcdEuclid(int num1, int num2);                   //to calculate the GCD of num1 and num2


int main()                                          /**main function started*/
{
    int n1, n2;
    while(cin >> n1 >> n2)
    {
        cout << "GCD of " << n1 << " and " << n2 << " is: " << gcdEuclid(n1, n2) << "\n";

    }
}                                                   /**end of main*/


int gcdEuclid(int num1, int num2)                   //to calculate the GCD of num1 and num2
{
    if(num1 == 0) return num2;                      //check if anyone number is 0 then the GCD is the nonzero number
    else if(num2 == 0) return num1;

    else
    {
        int temp;
        while(num1 != num2)                         //iterate throw untill num1 & num2 is not equal
        {
            if(num1 > num2) num1 -= num2;
            else num2 -= num1;
        }
    }
    return num2;                                    //return the calculated GCD
}

/**end of the program*/
