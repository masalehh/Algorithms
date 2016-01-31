/**
    leap_year.cpp
    Purpose: practice data structure and algorithm implimentation

    @author MA Saleh
*/


#include<iostream>

using namespace std;

int calculateLeapYear(int year);                //a function for check the year is leap year or not
int getYear();                                  // get a year from user as input to check leap year


int main()                                      // main function started
{
    int isLeapYear;
    int year;

    year        =   getYear();                  //call getYear() function to get year input
    isLeapYear  =   calculateLeapYear(year);    //call calculateLeapYear() function to check the year

    if(isLeapYear) cout << year << " is a Leap Year\n";
    else cout << year << " is not a Leap Year\n";

return 0;
}                                               //end of main



int getYear()                                   //getYear() function body
{
    int year;
    cout << "Enter a year to check Leap Year\n";
    cin >> year;

    return year;
}


int calculateLeapYear(int year)                 //calculateLeapYear() function body
{
    if(year%4==0) return 1;
    else if(year %100==0) return 0;
    else if (year%400==0) return 1;
    else return 0;
}


/**end of program*/
