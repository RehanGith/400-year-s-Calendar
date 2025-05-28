#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int getWeekday(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    
    int K = year % 100;
    int J = year / 100;
    
    int weekday = (day + (13 * (month + 1)) / 5 + K + (K / 4) + (J / 4) - (2 * J)) % 7;
    
    // Adjust for Sunday as index 0
    return (weekday + 7) % 7;
}

string getWeekdayName(int weekday) {
    string days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return days[weekday];
}



int main() {
    int day, month, year;

    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;

    if (year < 1600 || year > 2000) {
        cout << "Year should be within the 400-year cycle (1600-2000)." << endl;
        return 1;
    }

    int weekday = getWeekday(day, month, year);

    cout << "The day of the week is: " << getWeekdayName(weekday) << endl;

    return 0;
}