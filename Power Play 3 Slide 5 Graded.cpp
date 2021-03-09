//This program will output the decimal of a fraction.

#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
	double decimal;
	int num; //top number
	int den; //bottom number

	std::cout << "Calculate the decimal of a fraction" << std::endl << std::endl; // The purpose of the program.

	std::cout << "Enter a number for the numerator: \n"; //top number
	std::cin >> num;

	std::cout << "Enter a number for the denominator: \n"; //bottom number
	std::cin >> den;

	decimal = (num / den); // how to find the decimal

	std::cout << std::fixed;
	std::cout << "Decimal: " << decimal << std::endl; //Prints the decimal of the fraction.

	std::cout << std::setprecision(4); //Prints the decimal in four places of the fraction.
	std::cout << "Decimal: " << decimal << std::endl;

	return 0;


}