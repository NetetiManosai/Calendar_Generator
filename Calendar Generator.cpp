#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Function to check if a given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

//Function to get the number of days in a given month of a year
int daysInMonth(int month, int year) {
    if (month < 1 || month > 12) return 0; // Invalid month check
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

//Function to determine the weekday of January 1st for a given year
int firstDayOfYear(int year) {
    int y = year - (14 - 1) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = 1 + 12 * ((14 - 1) / 12) - 2;
    int d = (1 + x + (31 * m) / 12) % 7;
    return d;
}

//Function to print the calendar for a given year
void printCalendar(int year) {
    if (year < 1) {
        cout << "Invalid year. Please enter a positive year.\n";
        return;
    }
    
    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    int startDay = firstDayOfYear(year);
    
    for (int month = 1; month <= 12; month++) {
        int days = daysInMonth(month, year);
        
        cout << "\n  ------------ " << months[month - 1] << " -------------\n";
        cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
        
        // Print leading spaces before the first day
        for (int i = 0; i < startDay; i++) cout << "     ";
        
        // Print the days of the month
        for (int day = 1; day <= days; day++) {
            cout << setw(5) << day;
            if (++startDay > 6) {
                startDay = 0;
                cout << endl;
            }
        }
        
        if (startDay != 0) cout << endl;
    }
}

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;
    
    if (year < 1) {
        cout << "Invalid year. Please enter a positive year.\n";
        return 1;
    }
    
    cout << "\nCalendar for the year " << year << ":\n";
    printCalendar(year);
    
    return 0;
}
