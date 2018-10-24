/**
    MissingNumber.cpp
    Purpose: practice data structure implimentation
    Time Complexity: O(n/2)

    @author MA Saleh
*/
#include<iostream>

using namespace std;

int MissingNum(int arr[], int size)
{
    for(int i=0; i<=size; i+=2)
    {
        if(arr[i] - i != 1)
        {
            return (arr[i] - (arr[i-1] - (i-1)));
        }
    }
}

int main()
{
int arr[] = {1, 3, 4, 5, 6, 7, 8};
cout << MissingNum(arr, 6);


return 0;
}
