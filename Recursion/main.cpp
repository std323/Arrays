#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void Fibonacci(int n, int a=0, int b=1);

//#define ELEVATOR
//#define FACTORIAL
//#define STEPEN
#define FIBONACCI

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	//cout << "Hello";
//cout << "��� ������ ������� Esc, ��� ����������� ������� ����� �������: " << endl;
//if (_getch() != 27)main();
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // ELEVATOR


#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;

#endif // FACTORIAL

#ifdef STEPEN
	int a, n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << "^" << n << "=" << power(a, n);
#endif // STEPEN

#ifdef FIBONACCI
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	Fibonacci(n);
#endif // FIBONACCI


}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "� �����\n";
	elevator(floor-1); //����������� ����� �������
	cout << "�� �� " << floor << "� �����\n";

}
int factorial(int n)
{
	return (n == 0 ? 1 : n * factorial(n - 1));
}

double power(double a, int n)
{
	if (n < 0)
	{
		return 1 / power(a, -n);
	}
	if (n == 0)
	{
		return 1;
	}
	return a * power(a, n - 1);
}

void Fibonacci(int n, int a, int b)
{
	if (n == 0)
	{
		cout << "0";
		return;
	}
	cout << a;
	Fibonacci(n - 1, b, a + b);
	
	}
