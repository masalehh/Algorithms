/**
    bubble_sort_func.cpp
    Purpose: practice data structure implimentation
    comment: this is a simple bubble sort with asceding and descending order

    @author MA Saleh
*/


#include<iostream>
#define MAX 5

using namespace std;

/**declare an array to store elements and to sort them*/
int arr[MAX];

/**this function sort elements in ascending order */
void ascending(int arr[]);
/**this function sort elements in descending order */
void descending(int arr[]);

/**main function started*/
int main(){

    /**while started*/
    while(1){
        int num;
        cout << "====Bubble Sorting System====\n";
        cout << "1. Ascending Order.\n2. Descending Order.\n\n";
        cout << "Enter your choice: ";
        cin >> num;

        /**switch started*/
        switch(num){
            case 1:

                cout << "Enter 5 numbers to sort in ascending: ";
                for(int i=0; i<MAX; i++){
                    cin >> arr[i];
                }

                ascending(arr);
                break;

            case 2:

                cout << "Enter 5 numbers to sort in descending: ";
                for(int i=0; i<MAX; i++){
                    cin >> arr[i];
                }

                descending(arr);
                break;
        } /**end of switch*/
    }/**end of while*/


return 0;
} /**end of main*/


void ascending(int arr[]){

    int temp;

    for(int i=0; i<MAX; i++){
        for(int j = 0; j<MAX-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } //in case of ascending order
        }
    }
    cout << "Your sorted (ascending) array is: \n";
    for(int i=0; i<MAX; i++){
        cout << arr[i] << "\n";
    }
}

void descending(int arr[]){

    int temp;

    for(int i=0; i<MAX; i++){
        for(int j = 0; j<MAX-i-1; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } //in case of descending order
        }
    }
    cout << "Your sorted (descending) array is: \n";
    for(int i=0; i<MAX; i++){
        cout << arr[i] << "\n";
    }
}

