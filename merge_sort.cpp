/**
    merge_sort.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
#define SIZE 20                                                             //define the maximum size of array <=20

using namespace std;

void getElements(int arr[], int n);                                         //function for inseritng element to array for sorting
void mergeSort(int arr[], int lowerIndex, int midIndex, int higherIndex);   //perform merge sort algorithm
void partition_merge(int arr[], int lowerIndex, int higherIndex);           //recursively break the array partition



int main()                                                                  //main function started
{

    int arr[SIZE];
    cout << "Enter how many numbers you want to be sort: ";
    int noOfElement;
    cin >> noOfElement;                                                     //take number of elements from user


    getElements(arr, noOfElement);                                          //call the function for inserting elements

    cout << "You entered these elements: \n";

    for(int i=0; i<noOfElement; i++)                                        //print out entered elements
    {
        cout << arr[i] << " ";
    }
    cout << "\n";


    partition_merge(arr, 0, (noOfElement-1));                               //call the partition function


    cout <<"Elements after sorting: \n";
    for(int i=0; i< noOfElement; i++)                                       //print out sorted elements
    {
        cout << arr[i] << " " ;
    }

return 0;
}                                                                           //end of main function



void getElements(int arr[], int n)                                          //function body of array input to be sorted
{
    cout << "Enter numbers to be sort: \n";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}                                                                           //end of the function


void partition_merge(int arr[], int lowerIndex, int higherIndex)            //funtion body to take partition
{
    int midIndex;

    if(lowerIndex < higherIndex)
    {
        midIndex = (lowerIndex + higherIndex)/2;
        partition_merge(arr, lowerIndex, midIndex);
        partition_merge(arr, midIndex+1, higherIndex);
        mergeSort(arr, lowerIndex, midIndex, higherIndex);
    }
}                                                                           //end of the function


void mergeSort(int arr[], int lowerIndex, int midIndex, int higherIndex)    //function body of mergesort
{

    int tempLow, i, tempMid, k, tempArr[SIZE];

    tempLow     =   lowerIndex;
    i           =   lowerIndex;
    tempMid     =   midIndex+1;


    while(tempLow<=midIndex && tempMid<=higherIndex)
    {
        if(arr[tempLow] <= arr[tempMid])
        {
            tempArr[i] = arr[tempLow];
            tempLow++;
        }
        else
        {
            tempArr[i] = arr[tempMid];
            tempMid++;
        }
        i++;
    }

    if(tempLow > midIndex)
    {
        for(k=midIndex; k<higherIndex; k++)
        {
            tempArr[i] = arr[k];
            i++;
        }
    }
    else
    {
        for(k=tempLow; k <= midIndex; k++)
        {
            tempArr[i] = arr[k];
            i++;
        }
    }

    for(k=tempLow; k<=higherIndex; k++)
    {
        arr[k] = tempArr[k];
    }

}                                                                                 //end of the function

/**end of the program*/
