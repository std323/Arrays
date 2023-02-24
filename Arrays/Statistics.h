#pragma once
#include"Constants.h"

//#define OVERLOAD_STATISTICS_FOR_CHAR

template<typename T>T Sum(T arr[], const int n);
//Эта функция закомментирована, чтобы не выносить ее в отдельный файл,
//поскольку реализации НЕШАБЛОННЫХ ФУНКЦИЙ НИ ВКОЕМ СЛУЧАЕ НЕ ПОДКЛЮЧАЮТСЯ НА МЕСТО ВЫЗОВА ЭТИХ ФУНКЦИЙ:
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
int Sum(char arr[], const int n);
#endif // OVERLOAD_STATISTICS_FOR_CHAR

template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
#endif // OVERLOAD_STATISTICS_FOR_CHAR

template<typename T>double Avg(T arr[], const int n);
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
const char* Avg(char arr[], const int n);
#endif // OVERLOAD_STATISTICS_FOR_CHAR

template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
#ifdef OVERLOAD_STATISTICS_FOR_CHAR
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
#endif // OVERLOAD_STATISTICS_FOR_CHAR



template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);