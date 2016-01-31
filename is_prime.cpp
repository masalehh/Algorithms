/**
    is_prime.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
#include<cmath>
using namespace std;

int isPrimeNumber(int number);                          //a function to check prime or not of a value


int main()                                              //main function started
{
    int number;
    cout << "Enter a number to check prime or not: ";   //take input a number from the user to check prime or not
    cin >> number;

    int isPrime;
    isPrime = isPrimeNumber(number);                    //call the function to check prime or not

    if(isPrime) cout << number << " is a prime number\n";
    else cout << number << " is not a prime number\n";

return 0;
}                                                       //end of main



int isPrimeNumber(int number)                           //function body started
{
    if(number < 2) return 0;
    else if(number == 2) return 1;
    else if(number%2==0) return 0;
    else
    {
        int numberRoot;
        numberRoot = sqrt(number);                      //find the root of the number

        for(int i=3; i<=numberRoot; i++)                //iterate till root of the number and check
        {
            if(number%i == 0) return 0;
        }
        return 1;
    }
}

/**end of the program*/
