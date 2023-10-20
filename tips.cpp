#include <iostream>

int main()
{
  double price;
  double tippercent;
  double total;
  std::cout << "Enter the price (pounds): ";
  std::cin >> price;
  std::cout << "Enter the tip percentage: ";
  std::cin >> tippercent;
  total = price + (price*(tippercent/100));
  std::cout << "The tip amount is:" << price*(tippercent/100);
  std::cout << "\nThe total is: " << total;
}
  
