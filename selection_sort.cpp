/**
    selection_sort.cpp
    Purpose: practice data structure and algorithm implimentation
    comment: this is an implementaion of selection sort which runtime is O(n^2)

    @author MA Saleh
*/

#include<iostream>
#include<algorithm>                                     //for using swap() to swap two value

using namespace std;

void getElements    (int arr[20], int noOfElements);        //to get user input for sorting, nothing return
void selectionSort  (int arr[20], int noOfElements);      //perform selection sort algorithm, nothing return
void printElements  (int arr[20], int noOfElements);      //print elments from array, nothing return


int main()                                              //main function started
{
    cout << "How many number you want to sort: ";
    int noOfElements;
    cin >> noOfElements;
    int arr[noOfElements];                              //declare the array with user given size

    getElements     (arr, noOfElements);
    selectionSort   (arr, noOfElements);
    printElements   (arr, noOfElements);

    return 0;
}                                                       //end of main


void getElements(int arr[20], int noOfElements)
{
    cout << "Enter " << noOfElements << " numbers to sort them\n";

    for(int count = 0; count < noOfElements; count++)
    {
        cin >> arr[count];
    }
}

void selectionSort(int arr[20], int noOfElements)
{
    for(int startIndex=0; startIndex < noOfElements-1; startIndex++)
    {
        int smallestIndex = startIndex;                                             //assume that first value is smallest value

        for(int currentIndex=startIndex+1; currentIndex < noOfElements; currentIndex++)
        {
            if(arr[currentIndex] < arr[smallestIndex])
            {
                smallestIndex = currentIndex;                                       //if find any small value than our assumed samllest then swap them
            }
        }

        swap(arr[startIndex] , arr[smallestIndex]);                                 //swapping
    }

}


void printElements(int arr[20], int noOfElements)
{
    cout << "Your sorted Elements is: \n";
    for(int index=0; index<noOfElements; index++ )
    {
        cout << arr[index] << " ";
    }

}

/**end of program*/
