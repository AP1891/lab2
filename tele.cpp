#include <iostream>
#include <string>
using namespace std;
int main()
{
  string telephone;
  string format;
  string second;
  string third;
  cout << "Enter the telephone number: ";
  cin >> telephone;
  format = (telephone.substr(0,3));
  second = (telephone.substr(3,4));
  third = (telephone.substr(7,4));
  cout << "\nThe formatted telephone number is: " << "(" << format << ")"
       << " " << second << " " << third;
}
