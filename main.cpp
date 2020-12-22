#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        int day;
        int numberOfDays;
        
        cout << "Enter today as follows: 0 for Friday, 1 for Saturday, 2 for Sunday, 3 for Monday, 4 for Tuesday, 5 for Wednesday, and 6 for Thursday:" << endl;
        cin >> day;
        cout << "Enter the number of days:" << endl;
        cin >> numberOfDays;

        int numberOfWeeks = numberOfDays / 7;
        int targetDay = numberOfDays % 7;
        int dayResult = (day + targetDay) % 7;
        
        string dayOutput;
        if (dayResult == 0) dayOutput = "Friday";
        else if (dayResult == 1) dayOutput = "Saturday";
        else if (dayResult == 2) dayOutput = "Sunday";
        else if (dayResult == 3) dayOutput = "Monday";
        else if (dayResult == 4) dayOutput = "Tuesday";
        else if (dayResult == 5) dayOutput = "Wednesday";
        else if (dayResult == 6) dayOutput = "Thursday";

        cout << "After " << numberOfDays << " days, or " << numberOfWeeks << " weeks, it will be " << dayOutput << endl;
    }

    return 0;
}
