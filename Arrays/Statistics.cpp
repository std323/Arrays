#include"Statistics.h"


template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//Эта функция закомментирована, чтобы не выносить ее в отдельный файл,
//поскольку реализации НЕШАБЛОННЫХ ФУНКЦИЙ НИ ВКОЕМ СЛУЧАЕ НЕ ПОДКЛЮЧАЮТСЯ НА МЕСТО ВЫЗОВА ЭТИХ ФУНКЦИЙ:
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
int Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
#endif // OVERLOAD_STATISTICS_FOR_CHAR


template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

//Эта функция закомментирована, чтобы не выносить ее в отдельный файл,
//поскольку реализации НЕШАБЛОННЫХ ФУНКЦИЙ НИ ВКОЕМ СЛУЧАЕ НЕ ПОДКЛЮЧАЮТСЯ НА МЕСТО ВЫЗОВА ЭТИХ ФУНКЦИЙ:
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
#endif // OVERLOAD_STATISTICS_FOR_CHAR



template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

#ifdef OVERLOAD_STATISTICS_FOR_CHAR
const char* Avg(char arr[], const int n)
{
	return "No AVG for char";
}
#endif // OVERLOAD_STATISTICS_FOR_CHAR


template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

#ifdef OVERLOAD_STATISTICS_FOR_CHAR
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "No AVG for char";
}
#endif // OVERLOAD_STATISTICS_FOR_CHAR


template<typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}


template<typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}