/**
    linear_search.cpp
    Purpose: practice data structure & algorithm implimentation

    @author MA Saleh
*/


#include<iostream>
#define SIZE 5                          //set the size of the array

using namespace std;

void enterNumbers(int arr[]);           //a function to take input from user and store into the array
int getValue();                         //take an input from user for search in the array
int linearSearch(int arr[], int value); //perform the linear search on the array and base on the given value the user


int main()                              //main function started
{
    int arr[SIZE];
    enterNumbers(arr);
    int number;

    number  = getValue();

    int index;
    index   = linearSearch(arr, number);

    if(index >= 0) cout << number << " is found in the array and location is: " << index << endl;
    else cout << number << " is not in the array\n";

return 0;
}                                       //end of main



void enterNumbers(int arr[])
{
    cout << "Enter numbers for storing in the array: " << endl;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
}

int linearSearch(int arr[], int value)
{
    for(int i=0; i<5; i++)
    {
        if(arr[i] == value) return i;
    }

    return -1;
}

int getValue()
{
    cout << "Enter a number to search in the array\n";
    int tempValue;
    cin >> tempValue;

    return tempValue;
}
