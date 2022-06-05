#include <iostream>
#include <cstring> // 1-Ввод предложения 2- Разворот его на 180 3- приравнять то что ввели к тому, что развернули 4- Полинром или нет 
// Для того, чтобы полиндром был и в предложениях, нужно понизить регистр и в исключения добавить пробелы


bool polindrom(std::string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "rus");
	std::string a;
	std::cout << "Введите число или слово: ";
	std::cin >> a;
	if (polindrom(a))
	{
		std::cout << "Это полиндром!";
	}
	else
	{
		std::cout << "Это не полиндром!";
	}
	return 0;
}