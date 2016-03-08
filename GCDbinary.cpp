/**
    GCDbinary.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
using namespace std;

int gcd(int num1, int num2);                            //to find the gcd of two numbers


int main()                                              //main function started
{
    int n1, n2;

    while(cin >> n1 >> n2)                              //taking input till EOF
    cout << gcd(n1, n2) << endl;                        //call the gcd function and print it

    return 0;
}                                                       //end of main



int gcd(int num1, int num2)                             //gcd function started
{
    if(num1 == 0) return num2;                          //gcd(a,0) is a
    if(num2 == 0) return num1;

    while(num2) num2 ^= num1 ^= num2 ^= num1 %= num2;   //here is the bitwise binary operation between num1 and num2
    return num1;
}                                                        //end of gcd function

/**end of program*/
