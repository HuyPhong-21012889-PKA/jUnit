#include <iostream>
#include <cassert>

using namespace std;

// Kiểm tra năm nhuận
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm tính ngày kế tiếp
void NextDate(int& day, int& month, int& year) {
    // Kiểm tra ràng buộc về giá trị của day, month, và year
    assert(day >= 1 && day <= 31);
    assert(month >= 1 && month <= 12);
    assert(year >= 1812 && year <= 2012);

    // Kiểm tra tháng 2 và năm nhuận
    bool leapYear = isLeapYear(year);
    int daysInMonth = 31;
    if (month == 2) {
        if (leapYear)
            daysInMonth = 29;
        else
            daysInMonth = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    }

    // Tăng ngày
    day++;
    if (day > daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}


int main() {
    int day, month, year;

    // Nhập ngày tháng năm
    cout << "Nhập ngày: ";
    cin >> day;
    cout << "Nhập tháng: ";
    cin >> month;
    cout << "Nhập năm: ";
    cin >> year;

    // Kiểm tra ràng buộc
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1812 || year > 2012) {
        cout << "Ngày tháng năm không hợp lệ." << endl;
        return 1;
    }

    // Tính ngày kế tiếp
    NextDate(day, month, year);

    // In ra ngày kế tiếp
    cout << "Ngày kế tiếp là: " << day << "/" << month << "/" << year << endl;

    return 0;
}
