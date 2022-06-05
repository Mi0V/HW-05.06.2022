#include <iostream>;
#include<conio.h>
void main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Нажмите кнопку: " << std::endl;
	char button;
	do
	{
		button = _getch();
		if (button == 'w')
		{
			std::cout << button << " - ";
			std::cout << "Вперед" << std::endl;
		}
		else if (button == 'a')
		{
			std::cout << button << " - ";
			std::cout << "Влево" << std::endl;
		}
		else if (button == 's')
		{
			std::cout << button << " - ";
			std::cout << "Вниз" << std::endl;
		}
		else if (button == 'd')
		{
			std::cout << button << " - ";
			std::cout << "Вправо" << std::endl;
		}
		else if (button == ' ')
		{
			std::cout << button << "Space - ";
			std::cout << "Прыжок" << std::endl;
		}
		else if (button == '\n')
		{
			std::cout << "Enter - ";
			std::cout << "Огонь" << std::endl;
		}


	} while (true);
		

}