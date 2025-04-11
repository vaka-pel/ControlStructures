﻿#include <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE   (char)218
#define UPPER_RIGHT_ANGLE   (char)191
#define LOWER_LEFT_ANGLE   (char)192
#define LOWER_RIGHT_ANGLE   (char)217
#define HORINTAL_LINE   (char)196
#define VERTICAL_LINE   (char)179
#define WHITE_BOX     "\xDB\xDB"       // (char)219
#define BLACK_BOX      "\x20\x20"

//#define CHESS
//#define HARD_CHESS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски : "; cin >> n;
#ifdef CHESS
	n++;

	setlocale(LC_ALL, "C");

	for (int i = 0; i <= n; i++)

	{
		for (int j = 0; j <= n; j++)

		{

			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORINTAL_LINE << HORINTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);



		}
		cout << endl;
	}

#endif // CHESS

	
#ifdef HARD_CHESS
	for (int i = 0; i < n; i++)
	{
		for (int a = 0; a < n; a++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (i % 2 == j % 2)cout << "* ";
					else cout << "  ";

				}
			}
			cout << endl;
		}
	}

#endif // HARD_CHESS


}