#include <iostream>
#include <cstring> // 1-���� ����������� 2- �������� ��� �� 180 3- ���������� �� ��� ����� � ����, ��� ���������� 4- �������� ��� ��� 
// ��� ����, ����� ��������� ��� � � ������������, ����� �������� ������� � � ���������� �������� �������


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
	std::cout << "������� ����� ��� �����: ";
	std::cin >> a;
	if (polindrom(a))
	{
		std::cout << "��� ���������!";
	}
	else
	{
		std::cout << "��� �� ���������!";
	}
	return 0;
}