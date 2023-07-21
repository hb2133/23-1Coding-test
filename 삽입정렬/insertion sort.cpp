#include <iostream>
using namespace std;

const int SIZE = 10;

void insertion_sort(int list[], int n)
{
	int i, j, key;

	for (i = 1; i < n; i++)
	{
		key = list[i];
		j = i - 1;
		
		while (j >= 0 && list[j] > key)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = key;
	}
}

void print_list(int list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}


int main(void)
{
	int list[10] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8 };

	insertion_sort(list, SIZE);
	print_list(list, SIZE);

	return 0;
}