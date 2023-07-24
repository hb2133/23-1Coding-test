#include <iostream>
using namespace std;

const int SIZE = 10;

void insertion_sort(int list[], int n)
{
	int j, key;

	for (int i = 0; i < n; i++)
	{
		key = list[i];

		for (j = i - 1; j >= 0 && list[j] > key; j--)
		{
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}
}

int main(void)
{
	int list[SIZE] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8 };

	insertion_sort(list, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}