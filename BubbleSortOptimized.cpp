/**
    BubbleSortOptimized.cpp
    Purpose: practice data structure implimentation
    Time Complexity: O(n square)

    @author MA Saleh
*/

#include<iostream>
using namespace std;

void swap(int *num1, int *num2)         // For swapping values
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void BubbleSort(int arr[], int length)      // Bubble sort algorithm function
{
    int startIndex, currentIndex;
    bool swapped;

    for(startIndex=0; startIndex<length-1; ++startIndex)
    {
        swapped = false;
        for(currentIndex = 0; currentIndex < length - startIndex - 1; ++currentIndex)
        {
            if(arr[currentIndex] > arr[currentIndex + 1])
            {
                swap(arr[currentIndex], arr[currentIndex + 1]);
                swapped = true;
            }
        }

        /**If not Occurred any swapping at first iteration then the array is sorted so break all loop
        And this was a sorted array. So we can achieve minimum time complexity*/

        if(swapped = false) break;
    }
}



int main()
{
    int arr[] = {400, 15, 11, 70, 1};
    int length = sizeof(arr)/sizeof(arr[0]);                        //Find the size of array

    BubbleSort(arr, length);

    for(int i=0; i<length; i++)                                     // Print the sorted array
    {
        cout << arr[i] << endl;
    }

return 0;
}
