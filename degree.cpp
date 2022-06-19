#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number, degree = 0;
	std::cout << "Enter the number: ";
	std::cin >> number;
	std::cout << "Enter the degree: ";
	std::cin >> degree;
	int buffer = number;
	for (int new_degree = degree; new_degree > 0; new_degree--) // Или можно for (int new_degree = 1; new_degree <= degree; new_degree++)
	{
		buffer *= number;
		std::cout << buffer << std::endl;
	}

}