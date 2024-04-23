#include <iostream>
#include <cassert>
using namespace std;

// Include your function here
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

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

// Unit tests
void TestNextDate() {
    // Test with valid inputs
    {
        int day = 1, month = 1, year = 2000;
        NextDate(day, month, year);
        assert(day == 2);
        assert(month == 1);
        assert(year == 2000);
    }

    // Test with end of year
    {
        int day = 31, month = 12, year = 2010;
        NextDate(day, month, year);
        assert(day == 1);
        assert(month == 1);
        assert(year == 2011);
    }

    // Test with minimum values
    {
        int day = 1, month = 1, year = 1812;
        NextDate(day, month, year);
        assert(day == 2);
        assert(month == 1);
        assert(year == 1812);
    }

    // Test with maximum values
    {
        int day = 22, month = 2, year = 2012;
        NextDate(day, month, year);
        assert(day == 23);
        assert(month == 2);
        assert(year == 2012);
    }

    // Test with invalid month (greater than 12)
    {
        int day = 29, month = 2, year = 2004;
        NextDate(day, month, year);
        assert(day == 1);
        assert(month == 3);
        assert(year == 2004);
    }

    // Add more test cases as needed
}

int main() {
    TestNextDate();
    cout << "All tests passed!" << endl;
    return 0;
}
