/**
    GCD.cpp
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

    int temp;
    if(num1 % num2 == 0) return num2;                  //chack if divide numbers by any one then that number will be the GCD
    else if(num2 % num1 == 0) return num1;

    if( num1 >= num2) temp = num2/2;                    //keep the half of samll number in temp which reduce the loop
    else temp = num1/2;

    while(temp >= 1)                                    //iterate the while loop til 1 and check
    {
        if(num1%temp == 0 && num2%temp == 0) return temp;
        temp--;

    }
}                                                        //end of gcd function

/**end of program*/
