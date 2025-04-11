#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "введите температуру воздуха: "; cin >> temperature;
	cout << temperature << endl;

	if (temperature > 50)
	{
		cout << "На другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "вы на экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "капец как жарко" << endl;

	}
	else if (temperature > 20)
	{
		cout << "жарко" << endl;
	}
	else if (temperature > 10)
	{
		cout << "тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "вы на северном полюсе" << endl;
	}
	else
	{
		cout << "вы на другой планете" << endl;
	}
}