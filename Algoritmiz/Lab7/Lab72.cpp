// #include <iostream>

// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// int daysInMonth(int year, int month) {
//     const int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if (month == 2 && isLeapYear(year)) {
//         return 29;
//     }
//     return daysPerMonth[month];
// }

// int main() {
//     int day, month, year, daysToAdd;
//     std::cout << "Enter a date (day month year): ";
//     std::cin >> day >> month >> year;

//     std::cout << "Enter the number of days to add: ";
//     std::cin >> daysToAdd;

//     day += daysToAdd;

//     while (day > daysInMonth(year, month)) {
//         day -= daysInMonth(year, month);
//         month++;

//         if (month > 12) {
//             month = 1;
//             year++;
//         }
//     }

//     std::cout << "New date: " << day << " " << month << " " << year << std::endl;
// }

// 

#include <iostream>

int main() {
    int day, month, year, daysToAdd;
    const int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::cout << "Enter a date (day month year): ";
    std::cin >> day >> month >> year;

    std::cout << "Enter the number of days to add: ";
    std::cin >> daysToAdd;

    day += daysToAdd;

    while (day > daysPerMonth[month]) {
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            if (day > 29) {
                day -= 29;
                month++;
            } else {
                break;
            }
        } else {
            day -= daysPerMonth[month];
            month++;
        }

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    std::cout << "New date: " << day << " " << month << " " << year << std::endl;
}

// #include <iostream>
// int main(){
//     int day, month, year, dayadd;
//     std::cout << "enter date: ";
//     std::cin >> day >> month >> year;
//     const int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     std::cin >> dayadd;
//     day += dayadd;
//     while (day > arr[month]){
//         if (month == 2 && (()))
//     }
// }