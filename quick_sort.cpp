/**
    quick_sort.cpp
    Purpose: practice data structure and algorithm implimentation
    comment: this is an implementaion of quick sort which runtime is O(nlogn)

    @author MA Saleh
*/

#include<iostream>
using namespace std;

void quickSort      (int arr[20], int first, int last);   //this fucntion implement the qucik sort algorithm
void getElements    (int arr[20], int noOfElements);      //this function take elements from user to sort them
void printElements  (int arr[20], int noOfElements);      //this function print elements from given array


int main()                                                //main function started
{
    int arr[20], noOfElements;

    cout << "How many elements you want to be sort? " ;
    cin  >> noOfElements;                                //take input size from user


    getElements     (arr, noOfElements);                 //calling the function to take elements from user

    quickSort       (arr, 0, noOfElements-1);             //calling the functkon to implement quick sort algorithm

    printElements   (arr, noOfElements);                 //print elments after sorting


     return 0;
}


void quickSort(int arr[20], int first, int last)
{
    int pivot, temp, i, j;

    if(first<last)
    {
        pivot   = last;                                //select pivot the last element of the array
        i       = first;
        j       = last;

    while(i<j)
    {
        while(arr[i] <= arr[pivot] && i<last)           //seperate all elements with compare to pivot
            i++;

        while(arr[j] > arr[pivot])
            j--;

        if(i<j)                                         //swap
        {
            temp    = arr[i];
            arr[i]  = arr[j];
            arr[j]  = temp;
        }
    }

    temp        = arr[pivot];                           //swap
    arr[pivot]  = arr[j];
    arr[j]      = temp;

    quickSort(arr, first, j-1);                         //recursively call the quick sort function again
    quickSort(arr, j+1, last);

    }
}                                                       //end of quick sort function




void getElements(int arr[20], int noOfElements)
{
    cout << "Enter elements to sort: \n";

    for(int i=0; i<noOfElements; i++)
    {
        cin >> arr[i];
    }
}

void printElements(int arr[20], int noOfElements)
{
     cout << "Sorted elements: ";

     for(int i=0; i<noOfElements; i++)
     {
        cout << arr[i] << "\t";
     }
}

/**end of the program*/

