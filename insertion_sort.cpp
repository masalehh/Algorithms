/**
    insertion_sort.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
#define SIZE 20
using namespace std;

void getElements(int arr[], int length);                    //a function for input elements into an array from user
void insertionSort(int arr[], int length);                  //a function for implement insertion sort algorithm



int main()                                                  //main function started
{

    cout << "How many elements you want to be sort?: ";

    int length;
    cin >> length;

    int arr[length];                                        //declare an array with user given length

    getElements(arr, length);                               //call the function getElements() to enter elements into array

    cout << "You entered these elements: \n";               //printout entered elements
    for(int i=0; i<length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    insertionSort(arr, length);                             //call insertionSort() function to perform insertion algorithm


    cout << "Your sorted elements is: \n";                  //printout sorted elements
    for(int i=0; i<length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}                                                           //end of main


void getElements(int arr[], int length)                     //function1 body started
{
    cout << "Enter "<<length << " elements sequentially: \n";

    for(int i=0; i<length; i++)
    {
        cin >> arr[i];
    }


}                                                           //function1 body end



void insertionSort(int arr[], int length)                   //function2 body started
{
    int key, index1, index2;

    for(index2 = 1; index2 < length; index2++)
    {
        key = arr[index2];
        index1 = index2-1;

        while(key < arr[index1] && index1 >= 0)
        {
            arr[index1 + 1] = arr[index1];
            index1--;
        }
        arr[index1+1] = key;
    }
}                                                           //function2 body end
