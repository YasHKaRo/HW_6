#include "bubblesort.h"

void bubble_sort(int* arr, int size)
{
	int buffer = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
}
void bubble_sort(double* arr, int size)
{
	double buffer = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
}
void print_int(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print_double(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
