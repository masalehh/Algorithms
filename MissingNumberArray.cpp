/**
    MissingNumberArray.cpp
    Purpose: practice data structure implimentation
    Time Complexity: O(log n)

    @author MA Saleh
*/
#include<iostream>

using namespace std;

int FindMissingNumber(int arr[], int size)
{
    int left = 0, right = size-1, mid;

    while(left <=right)
    {
        mid = (left + right)/2;

        if(arr[mid] != mid+1 && arr[mid-1] == mid) return mid+1;        // If missing number between current element and previous element

        if(arr[mid] != mid+1) right = mid-1;                            // If Missing number in left side

        else left = mid+1;                                              // If missing number in right side

    }

    //No element missing
    return -1;

    //return (arr[mid] + 1);
}


int main()
{
int arr[] = {1, 2, 3, 4, 5, 7, 8 };
int size = sizeof(arr)/sizeof(arr[0]);

cout << FindMissingNumber(arr, size);


return 0;
}
