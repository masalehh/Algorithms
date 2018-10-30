/**
    selectionSortAlgo.cpp
    Purpose: practice data structure implimentation
    Time Complexity: O(n square)

    @author MA Saleh
*/

#include<iostream>


using namespace std;

struct Employee
{
    string name;
    int salary;
};

void sortEmployee(Employee *emp, int empCount)
{
    for(int startIndex=0; startIndex < empCount; ++startIndex)
    {
        int biggestIndex = startIndex;

        for(int currentIndex = startIndex; currentIndex < empCount; ++currentIndex)
        {
            if(emp[currentIndex].salary > emp[biggestIndex].salary)
            {
                biggestIndex = currentIndex;
            }
        }

        if(biggestIndex != startIndex)                              // If biggest index and start index is same then not need to swap
        {
            swap(emp[startIndex].salary, emp[biggestIndex].salary);
        }

    }

}






int main()
{
    cout << "How many employee info want to give? : ";
    int empCount;
    cin >> empCount;

    Employee *emp = new Employee[empCount];

    for(int i=0; i<empCount; ++i)
    {
        cout << "Enter Employee#" <<i+1 << ": ";
        cin >> emp[i].name;
        cout << "Enter Employee Salary#" << i+1 << ": ";
        cin >> emp[i].salary;
    }

    sortEmployee(emp, empCount);

    for(int i=0; i<empCount; ++i)                                                           //Print the employee information
    {
        cout << emp[i].name << " drawing " << emp[i].salary << " Taka Salary." << endl;
    }

delete[] emp;                                                                               // Delete dynamic memory to avoid memory leak

return 0;
}
