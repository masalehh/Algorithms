
/**
    binary_search.cpp
    Purpose: practice data structure implimentation

    @author MA Saleh
*/

#include<iostream>

using namespace std;


class Binary_Search
{
    int arr[50];
    int size, num;

public:
    void getData();
    int searchNumber(int left, int right);
    void display();
};

void Binary_Search :: getData()
{
    cout << "How many numbers you want to input? (MAX:50) ";

    cin >> size;
    cout << " Enter " << size << "numbers into array: \n";
    for(int i = 0; i< size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your search number: ";

    cin >> num;

}

int Binary_Search :: searchNumber(int left, int right)
{
    if(right >= left)
    {
        int mid = (left + right)/2;
        if(arr[mid] == num) return mid;
        if(arr[mid] > num)
        {
            right = mid - 1;
            return searchNumber(left, mid-1);
        }
        else
        {
            left = mid +1;
            return searchNumber(mid+1, right);
        }
    }
    return -1;

}

void Binary_Search :: display()
{
    int result;
    result = searchNumber(0, size-1);
    (result == -1)? cout << num << " is not found in this array."
                            : cout << num << " is found at array index: " << result << endl;
}


int main()
{
    Binary_Search BS;
    BS.getData();
    BS.display();

return 0;
}
