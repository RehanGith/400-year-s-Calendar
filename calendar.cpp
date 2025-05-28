#include <iostream>

using namespace std;
// Function to calculate the weekday of a given date using Zeller's Congruence
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

int main() {


	return 0;
}