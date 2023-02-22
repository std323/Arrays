#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shifts.h"

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
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов (сдвиг влево): "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов (сдвиг вправо): "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);


	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов (сдвиг влево): "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов (сдвиг вправо): "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);

	
	const int INDEX = 8;
	char mas[INDEX];
	FillRand(mas, INDEX);
	Print(mas, INDEX);
	Sort(mas, INDEX);
	Print(mas, INDEX);
	cout << "Сумма элементов массива: " << Sum(mas, INDEX) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(mas, INDEX) << endl;
	cout << "Минимальное значение: " << minValueIn(mas, INDEX) << endl;
	cout << "Максимальное значение: " << maxValueIn(mas, INDEX) << endl;
	cout << "Введите количество сдвигов (сдвиг влево): "; cin >> number_of_shifts;
	shiftLeft(mas, INDEX, number_of_shifts);
	Print(mas, INDEX);
	cout << "Введите количество сдвигов (сдвиг вправо): "; cin >> number_of_shifts;
	shiftRight(mas, INDEX, number_of_shifts);
	Print(mas, INDEX);
	
	//Двумерный массив
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	
	double d_brr_2[ROWS][COLS];
	FillRand(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	Sort(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_brr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(d_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_brr_2, ROWS, COLS) << endl;

	char ch_matr_2[ROWS][COLS];
	FillRand(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	Sort(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(ch_matr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(ch_matr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(ch_matr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(ch_matr_2, ROWS, COLS) << endl;
	
}














