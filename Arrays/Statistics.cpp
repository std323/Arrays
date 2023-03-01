#include"Statistics.h"


unsigned int Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
unsigned int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}


const char* Avg(char arr[], const int n)
{
	return "No AVG for char";
}
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "No AVG for char";
}

