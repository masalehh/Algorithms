/**
    LCM.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
using namespace std;

int gcdEuclid(int num1, int num2);              //to calculate the GCD first between two number
int lcm(int num1, int num2);                    //then calculate the LCM


int main()                                      /**main function started*/
{
    int n1, n2;

    while(cin >> n1 >> n2)                      //iterate throw EOF
    {
        cout << "Lcm is: " << lcm(n1, n2) << " \n"; //call the lcm function to calcualte the LCM
    }
}                                               /**end of main*/



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


int lcm(int num1, int num2)
{
    return (num1*num2)/gcdEuclid(num1, num2);       //using the law, gcd * lcm = multiple of two number
}

/**end of the program*/
