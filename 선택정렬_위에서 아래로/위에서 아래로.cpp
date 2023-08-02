#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	vector<int>arr;
	cin >> n;
	arr.resize(n);

	for (int i = 0; i < n; i++)
	{
		int b;
		cin >> b;

		arr[i] = b;
	}

	for (int j = 0; j < n; j++)
	{
		int maxIndex = j;
		for (int k = j + 1; k < n; k++)
		{
			if (arr[k] > arr[maxIndex])
			{
				maxIndex = k;
			}
		}
		int temp = arr[j];
		arr[j] = arr[maxIndex];
		arr[maxIndex] = temp;
	}

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}

}