/**
    primeRecursion.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
#include<math.h>                                    //include math.h header file to use sqrt() function
using namespace std;


int isPrime(int num, int count)                        //to find a number is prime or not recursively
{
    if(count == 1) return 1;                            //if the number is prime then return 1 otherwise 0
    else if(num%count==0) return 0;
    else isPrime(num, count-1);
}



int main()                                              //main started
{
    int n, prime;

   while(cin >> n)                                      //take input from user till EOF
   {
         if(n <2)                                       //check if the number is less than 2 than it is not prime
        {
            cout << "This is not a prime number.\n";
            continue;
        }

        else
            prime = isPrime(n, sqrt(n));                //call the recursive function to check the number is prime or not

        if(prime) cout << "This is a prime number.\n";  //print the result
        else cout << "This is not a prime number.\n";
       }

       return 0;
}                                                       //end of main

/**end of program*/
