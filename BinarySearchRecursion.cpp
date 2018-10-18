
/**
    binary_search.cpp
    Purpose: practice data structure implimentation

    @author MA Saleh
*/

#include<iostream>
#include<stdio.h>

using namespace std;

/*Implement Binary Search Algorithm using recursion
    Parameter: array, first index, last index and a number to search*/

int binarySearch(int arr[], int left, int right, int num)
{

    if(right >= left)
    {
        int mid = (left + right) / 2;                                   // Break the array in two parts and check in which part desired number contain
        if(arr[mid] == num) return mid;                                 // If number is in middle point then return the index
        if(arr[mid] > num) return binarySearch(arr, left, mid-1, num);  // If number is in left part then recursively call the function for left part
        else
            return binarySearch(arr, mid+1, right, num);                // Otherwise call the function using right part of the array
    }

return -1;                                                              // If we not found the number into the array just return -1
}


int main()
{
    int arr[] = {2, 4, 6, 10, 23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 23;

    int result = binarySearch(arr, 0, size-1, num);


    (result == -1)? cout << num << " is not found the array."
                    :cout << num << " is at index: " << result << endl;



return 0;
}




/*End of the algorithm */
