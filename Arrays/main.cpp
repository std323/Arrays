#include<iostream>
using namespace std;

#define  tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const double n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts = 0);
void shiftRight(int arr[], const int n, int number_of_shifts = 0);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int number_of_shifts = 0;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	int sum = Sum(arr, n);
	cout << "Сумма элементов массива: " << sum << endl;
	double c = Avg(arr, n);
	cout << "Средне-арифметическое элементов массива: " << c << endl;
	int min = minValueIn(arr, n);
	cout << "Минимальное значение: " << min << endl;
	int max = maxValueIn(arr, n);
	cout << "Максимальное значение: " << max << endl;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	
		
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	}
	
	void FillRand(int arr[], const int n)
	{
		// Заполнение массива случайными числами
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}

	void Print(int arr[], const int n)
	{
		//Вывод массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	void Sort(int arr[], const int n)
	{
		//Сортировка массива:
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}
	int Sum(int arr[], const int n)
		{
		int sum = 0;
			for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
			return sum;
		}
	double Avg(int arr[], const double n)
	{
		double c = Sum(arr, n) / n;
		return c;
	}
	int minValueIn(int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}
	int maxValueIn(int arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;
	}
	void shiftLeft(int arr[], const int n, int number_of_shifts)
	{

		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
		
	}
	void shiftRight(int arr[], const int n, int number_of_shifts)
	{
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 2; i >= 0; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[0] = buffer;
		}
	}