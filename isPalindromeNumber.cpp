/**
    isPalindromeNumber.cpp
    Purpose: practice data structure and algorithm implementation

    @author MA Saleh
*/

#include<iostream>
using namespace std;

enum isPalindrome                                       //enumerator show status of the number palinfrome or not
{
    PALINDROME=0,
    NOTPALINDROME=-1
};

isPalindrome checkPalindrome(int value);                //function for check the number palindrome or not




int main()                                              //main function started
{
    cout << "Enter a value to check is it palindrome: ";
    int number;
    cin >> number;                                      //take input a number from user


                                                        //call the function to check number and check the return status
    if(checkPalindrome(number) == PALINDROME) cout << number << " is  a palindrome number" << endl;
    else cout << number << " is not a palindrome" << endl;

return 0;
}                                                       //end of main



isPalindrome checkPalindrome(int value)                 //function body started
{
    int tempNumber, reverseNumber=0, reminder;
    tempNumber = value;

    while(tempNumber != 0)                              //make the reverse of the given number
    {
        reminder        = tempNumber%10;
        reverseNumber   = reverseNumber*10 + reminder;
        tempNumber      /= 10;
    }

    if(reverseNumber == value) return PALINDROME;       //compare the original number with reversed number
    else return NOTPALINDROME;

}                                                       //end of the function

/**end of the program*/
