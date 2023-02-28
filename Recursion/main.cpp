#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);

int factorial(int n);
double power(double a, int n);
double power1(double a, int n);
void Fibonacci(int n, int a=0, int b=1);
void Fibonacci1(int n, int a=0, int b=1);


//#define ELEVATOR
//#define FACTORIAL
//#define STEPEN
//#define FIBONACCI
//#define POWER1
//#define FIBONACCI1

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	//cout << "Hello";
//cout << "Для выхода нажмите Esc, для продолжения нажмите любую клавишу: " << endl;
//if (_getch() != 27)main();
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // ELEVATOR


#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;

#endif // FACTORIAL

#ifdef STEPEN
	int a, n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << "^" << n << "=" << power(a, n);
#endif // STEPEN

#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	Fibonacci(n);
#endif // FIBONACCI

#ifdef POWER1
	int a, n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power1(a, n) << endl;
#endif POWER1

#ifdef FIBONACCI1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	Fibonacci1(n);
#endif  FIBONACCI1

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "м этаже\n";
	elevator(floor-1); //Рекурсивный вызов функции
	cout << "Вы на " << floor << "м этаже\n";

}
int factorial(int n)
{
	return n == 0 ? 1 : n * factorial(n - 1);
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
	cout << a << "\t";
	Fibonacci(n - 1, b, a + b);
	
}
double power1(double a, int n)
{
	/*if (n == 0)return 1;
	else if (n > 0) return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);*/
	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);//-n - меняем знак на противоположный
	
}
void Fibonacci1(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	Fibonacci1(n, b, a + b);
}

