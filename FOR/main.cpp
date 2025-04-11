#include<iostream>
using namespace std;
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define SIMPLE
//#define PERFECT_SIMPLE

void main()
{
	setlocale(LC_ALL, "Russian");
	/*for (;;)
	{
		cout << "Hello For";
	}*/
	/*int n = 5;
	for (int i = 0;i < n;i++)
	{
		cout << i << "\t";
	}*/

#ifdef FACTORIAL
	int n;
	cout << "введите количество итераций: "; cin >> n;
	long long int f = 1; // factorial
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER

		double a;
		int n;
		cout << "¬ведите основание степени: "; cin >> a;
		cout << "¬ведите показатель степени:"; cin >> n;
		double N = 1;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}
		for (int i = 0; i < n; i++)
		{
			N *= a;

		}
		cout << N << endl;
#endif // POWER

#ifdef ASCII
		for (int i = 0; i < 256; i++)
		{
			if (i % 16 == 0) cout << endl;
			cout << (char)i << " ";
		}
#endif // ASCII

#ifdef FIBONACCI
		int n;
		cout << "¬ведите предельное число: "; cin >> n;
		for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
			cout << a << "\t";
		cout << endl;

		cout << "¬ведите количество членов р€да: "; cin >> n;
		for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
			cout << a << "\t";
		cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE
		int n;
		cout << "¬ведите предельное число: "; cin >> n;
		for (int i = 1; i < n; i++)
		{
			bool simple = true;
			for (int j = 2; j < sqrt(i); j++) // функци€ sqrt() возвращает квадратный корень числа
			{
				if (i % j == 0)
				{
					simple = false;
					break;
				}
			}
			if (simple)cout << i << "\t";
		}
		cout << endl;
#endif // SIMPLE

#ifdef PERFECT_SIMPLE
		int n;
		cout << "¬ведите предельное число: "; cin >> n;
		for (int i = 1; i <= n; i++)
		{

			int sum = 0;
			for (int j = 1; j <= i / 2; j++)
			{
				if (i % j == 0)sum += j;
			}
			if (sum == i)cout << i << "\t";
		}
		cout << endl;
#endif // PERFECT_SIMPLE

}