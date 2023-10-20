#include <iostream>

int main()
{
  double num1;
  double num2;
  std::cout << "Please enter the two numbers: ";
  std::cin >> num1 >> num2;
  double sum = num1 + num2;
  double difference = num1 - num2;
  double product = num1 * num2;
  double distance = abs(difference);
  double mean = sum / 2;
  std::cout << "The sum of " << num1 << " and " << num2
	    << " is: "<< sum
	    << "\n The difference between " << num1 << " and " << num2
	    << " is: " << difference << "\n The product of " << num1 << " and "
	    << num2 << " is: " << product
	    << "\n The distance between " << num1 << " and " << num2 << " is: " << distance
	    << "\n The mean average between " << num1 << " and " << num2 << " is: " << mean;
}
