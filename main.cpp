#include <iostream>

using namespace std;

int main()
{
    int dayNumber, numberOfDays;
    cout << "Enter today as follows: 0 for Friday, 1 for Saturday, 2 for Sunday, 3 for Monday, 4 for Tuesday, 5 for Wednesday, and 6 for Thursday: ";
    cin >> dayNumber;
    string day;
    if (dayNumber == 0)
    {
    day = "Friday";
    }
    else if (dayNumber == 1)
    {
    day = "Saturday";
    }
    else if (dayNumber == 2)
    {
    day = "Sunday";
    }
    else if (dayNumber == 3)
    {
    day = "Monday";
    }
    else if (dayNumber == 4)
    {
    day = "Tuesday";
    }
    else if (dayNumber == 5)
    {
    day = "Wednesday";
    }
    else if (dayNumber == 6)
    {
    day = "Thursday";
    }
    cout << "Enter the number of days from today: ";
    cin >> numberOfDays;


    return 0;
}
