#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "It's a polydrome check" << std::endl;
	std::cout << "Enter number: ";
	int number, reverse = 0;
	std::cin >> number;
	int	buffer = number;
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	if (reverse == number)
	{
		std::cout << "Polydrome!";
	}
	else
	{
		std::cout << "Not Polydrome!";
	}
}