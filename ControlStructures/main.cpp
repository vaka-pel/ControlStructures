#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << temperature << endl;

	if (temperature > 50)
	{
		cout << "�� ������ �������" << endl;
	}
	else if (temperature > 40)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "����� ��� �����" << endl;

	}
	else if (temperature > 20)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -30)
	{
		cout << "������� �����" << endl;
	}
	else if (temperature > -70)
	{
		cout << "�� �� �������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
}