#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	std::cout << "Введите число от 1 до 100: ";
	std::cin >> number;
	if (number > 100)
	{
		std::cout << "Абсолютно мимо";
	}
	else if (number > 10)
	{
		std::cout << "Вы промахнулись";
	}	
	else if (number < 0)
	{
		std::cout << "Вы промахнулись";
	}	
	else 
	{
		std::cout << "Цель поражена";
	}
		
}