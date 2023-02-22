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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(arr, n) << endl;
	cout << "������� ���������� ������� (����� �����): "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������� ���������� ������� (����� ������): "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);


	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� ��������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ ��������: " << maxValueIn(brr, SIZE) << endl;
	cout << "������� ���������� ������� (����� �����): "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "������� ���������� ������� (����� ������): "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);

	
	const int INDEX = 8;
	char mas[INDEX];
	FillRand(mas, INDEX);
	Print(mas, INDEX);
	Sort(mas, INDEX);
	Print(mas, INDEX);
	cout << "����� ��������� �������: " << Sum(mas, INDEX) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(mas, INDEX) << endl;
	cout << "����������� ��������: " << minValueIn(mas, INDEX) << endl;
	cout << "������������ ��������: " << maxValueIn(mas, INDEX) << endl;
	cout << "������� ���������� ������� (����� �����): "; cin >> number_of_shifts;
	shiftLeft(mas, INDEX, number_of_shifts);
	Print(mas, INDEX);
	cout << "������� ���������� ������� (����� ������): "; cin >> number_of_shifts;
	shiftRight(mas, INDEX, number_of_shifts);
	Print(mas, INDEX);
	
	//��������� ������
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	
	double d_brr_2[ROWS][COLS];
	FillRand(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	Sort(d_brr_2, ROWS, COLS);
	Print(d_brr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_brr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(d_brr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(d_brr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(d_brr_2, ROWS, COLS) << endl;

	char ch_matr_2[ROWS][COLS];
	FillRand(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	Sort(ch_matr_2, ROWS, COLS);
	Print(ch_matr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(ch_matr_2, ROWS, COLS) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(ch_matr_2, ROWS, COLS) << endl;
	cout << "����������� ��������: " << minValueIn(ch_matr_2, ROWS, COLS) << endl;
	cout << "������������ ��������: " << maxValueIn(ch_matr_2, ROWS, COLS) << endl;
	
}














