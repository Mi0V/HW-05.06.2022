#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number;
	std::cout << "Enter the number of ticket: ";
	std::cin >> number;
	int summ_1 = 0;
	int summ_2 = 0;
	if (number > 999999)
	{
		std::cout << "ERROR!!!";
	}
	else
	{

		while (number > 999)
		{
			summ_1 += number % 10;
			number /= 10;
		}
		while (number > 0)
		{
			summ_2 += number % 10;
			number /= 10;

		}

		std::cout << summ_1 << " " << summ_2 << std::endl;

		if (summ_1 == summ_2)
		{
			std::cout << "You lucky!";
		}
		else
		{
			std::cout << "Common ticket";
		}
	}
}