/**
    sievePrime.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
#include<math.h>
using namespace std;

const int size = 10000;                                   //initialize constantly the size of the array

void sieve(char *array, int size);
int isPrime(char *array, int n);
void getUserInput(int &num);


int main()                                                  //main function started
{
    char array[10000];

    sieve(array, size);                                     //call the sieve function with parameter array and size of array


    int number;
    getUserInput(number);                                   //call the function to get user input


    if(isPrime(array, number) == 1) cout << "This is a prime number.\n";

    else cout << "This is not a prime number.\n";



    return 0;
}                                                           //end of main


int isPrime(char *array, int n)
{
    if(n<2) return 0;                                       //check if number is less than zero than its not prime
    else return array[n];
}


void sieve(char array[size], int length)                 //function for Sieve of Eratosthenes implementation
{
    int index, j;

    for(index = 0; index < length; index++)             //firstly set all index to 1
    {
        array[index] = 1;
    }


    int root = sqrt(size);                              //find the root of the size


    for(int i=2; i<root; i++)                           //set 0 to all multiple of 1 to root
    {
        if(array[i] == 1)
        {
            int k = 0;
            for(j = 2, k=4 ; k <= size; j++)
            {
                array[k] = 0;
                k += i;
            }
        }
    }
}


void getUserInput(int &num)                                 //this function take user input to check the number is prime or not
{
    cout << "Enter a nubmer (num<=100) to check it is prime or not: ";
    cin >> num;
}



/**end of program*/
