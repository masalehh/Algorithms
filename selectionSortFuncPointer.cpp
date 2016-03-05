/**
    selectionSortFuncPointer.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/

#include<iostream>
#include<algorithm>
#define MAX 20

using namespace std;


/**function for implement a selection sort*/
void SelectionSort(int *array, int size, bool (*comparisonFunc)(int, int))      //in function parameter this is a function pointer
{
    for(int startIndex=0; startIndex<size; startIndex++)                        //step through from array start value
    {

        int tempIndex = startIndex;                                             //keep first index in tempindex

        for(int currentIndex=startIndex+1; currentIndex<size; currentIndex++)   //step throw from second index and compare with tempIndex
        {
            if(comparisonFunc(array[tempIndex], array[currentIndex]))           //if true then keep current index value to tempIndex
            {
                tempIndex = currentIndex;
            }
        }

        if(tempIndex != startIndex) swap(array[tempIndex], array[startIndex]);  //swap the values
    }
}


bool Ascending(int a, int b)
{
    return a > b;                                                               //return true if first element greater than second
}


bool Descending(int a, int b)
{
    return a < b;                                                               //return true if second element greater than first
}


void printArray(int *array, int size)                                           //print the whole array
{
    for(int index=0; index<size; index++)
    {
        cout << array[index] << " ";
    }
}


bool EvenFirst(int a, int b)                                                    //this is a function to sort even number firstly then odd
{
    if(a%2 == 0 && b%2 != 0) return false;                                      //if first number is even & 2nd is odd then return false
    if(a%2 != 0 && b%2 == 0) return true;                                       //if first number is odd & 2nd is eventhen return true
    return Ascending(a, b);                                                     //otherwise return ascending
}


bool OddFirst(int a, int b)
{
    if(a%2 != 0 && b%2 == 0) return false;                                      //if first number is odd & 2nd is even then return false
    if(a%2 == 0 && b%2 != 0) return true;                                       //if first number is even & 2nd is odd then return true
    return Ascending(a, b);
}

void getArrayInput(int *array, int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }
}


int main()                                                                      //main function started
{

    int array[MAX];                                                             //initialize the array with MAX element

    cout << "How many numbers you want to sort? ";
    int n;
    cin >> n;

    cout << "enter " << n << " elements to sort in your way.\n";
    getArrayInput(array, n);                                                    //take input array element from user.

    while(true)                                                                 //while started to do the task again again
    {
        cout << "Please choose your option from here: \n";
        cout << "1.Ascending Order.\n2.Descending Order.\n3.Even First Ascending.\n.4.Odd First Ascending.\n";
        int navigate;
        cin >> navigate;

        switch(navigate)                                                            //switch case started to navigate the user
        {
            case 1:
                SelectionSort(array, n, Ascending);
                printArray(array, n);
                break;
            case 2:
                SelectionSort(array, n, Descending);
                printArray(array, n);
                break;
            case 3:
                SelectionSort(array, n, EvenFirst);
                printArray(array, n);
                break;
            case 4:
                SelectionSort(array, n, OddFirst);
                printArray(array, n);
                break;
        }                                                                       //end of switch
        cout << "\n";
    }                                                                           //end of while

    return 0;
}                                                                               //end of main
