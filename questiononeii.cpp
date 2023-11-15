//ADMISSION NUMBER: 171674
//DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY
#include <iostream>
using namespace std;
bool isLeapYear(int year) {
   if (year % 4 != 0) {
       return false;
   } else if (year % 100 != 0) {
       return true;
   } else if (year % 400 != 0) {
       return false;
   } else {
       return true;
   }
}

int main() {
   int year;
   cout << "Enter a year: ";
   cin >> year;

   if (isLeapYear(year)) {
       cout << year << " is a leap year." << endl;
   } else {
       cout << year << " is not a leap year." << endl;
   }

   return 0;
}