#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
#define Enter 13
#define Spase 32
#define Escape 27
#define  UpArrow 72
#define  DownArrow 80
#define  LeftArrow 75
#define  RightArrow 77

//#define SHOOTER_IF

void main()
{
	setlocale(LC_ALL, "");
	

#ifdef SHOOTER_IF
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RihgtArrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else if (key == Escape)
		{
			cout << "�����" << endl;
		}
		else
		{
			if (key != -32)cout << "Error" << endl;
		}

	} while (key != Escape);


#endif // SHOOTER_IF
    char key;
	do
	{

		key = _getch();
		cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'w': 
		case 'W': cout << "������" << endl; break;
		case DownArrow: 
		case 's':
		case 'S': cout << "�����" << endl; break;
		case LeftArrow: 
		case 'a':
		case 'A': cout << "�����" << endl; break;
		case RightArrow: 
		case 'd':
		case 'D': cout << "������" << endl; break;


		case ' ':  cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape:
		case -32:break;
		default:    cout << "Error" << endl;
		}
	} while (key != Escape);
}
