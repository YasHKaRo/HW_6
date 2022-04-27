#include "bubblesort.h"

int main()
{
	int const size = 7;
	int arr1[size] = { 5, 76, 43, 6, 1, 7, 73 };
	double arr2[size] = { 8, 4, 5, 2, 1, 764, 31 };

	print_int(arr1, size);
	bubble_sort(arr1, size);
	print_int(arr1, size);

	print_double(arr2, size);
	bubble_sort(arr2, size);
	print_double(arr2, size);

}