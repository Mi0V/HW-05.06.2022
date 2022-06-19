#include <iostream>
#include <conio.h>
void main()
{
	do
	{
		setlocale(LC_ALL, "rus");
		int factorial, num = 1, num_2 = 1, numer;
		std::cout << "Enter a number to get factorial: ";
		std::cin >> factorial;
		for (int i = 1; i < factorial; i++)
		{
			num += 1;
			num_2 *= num;
			std::cout << num_2 << std::endl;
		}
		std::cout << "factorial" << factorial << "this is: " << num_2 << std::endl;
	} while (_getch() != 27);

}