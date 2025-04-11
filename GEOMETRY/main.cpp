#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE
//#define ROMBUS1 
//#define ROMBUS2 
#define CHESS


void main()
{

setlocale(LC_ALL, "Russian");
	int n;
    cout << "¬ведите размер фигуры :"; cin >> n;
#ifdef TRIANGLE
	int a;
	cout << "¬ведите размер треугольника: "; cin >> a;
	for (int i = 0; i <= a; i++)
	{
		for (int l = 0; l < i; l++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE

#ifdef SQUARE
	int a;
	cout << "¬ведите размер квадрата: "; cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < a; i++)
		{
			cout << " * ";
		}
		cout << endl;
	}

#endif // SQUARE

#ifdef ROMBUS1
	

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n; j++) cout << "  "; cout << "/";
		cout << endl;
	}

#endif // ROMBUS1
#ifdef ROMBUS2
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (i == n - 1 - j || i - n == n * 2 - j - 1)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}


#endif // ROMBUS2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}

		cout << endl;
	}
}