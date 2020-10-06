#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
  if (year % 4 != 0)
      return false;
  else
  {
      if ((year % 100 == 0 && year % 400 == 0) || year % 100 != 0)
          return true;
      else
          return false;
  }
}

int main()
{
  int year;
  
  cout << "Enter a year: ";
  cin >> year;
  
  while (cin.fail() || year < 1)
  {
    cin.clear();
    cin.ignore(200, '\n');
    cout << "Enter a year: ";
    cin >> year;
  }
  
  if (isLeapYear(year))
      cout << year << " is a leap year.\n";
  else
      cout << year << " is not a leap year.\n";
  
  system("pause");
  return 0;
}
