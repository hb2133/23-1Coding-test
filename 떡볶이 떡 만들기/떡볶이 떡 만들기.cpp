#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinerySearch(vector<int>& arr, int start, int end, int m)
{
	int mid;
	int value = 0;
	mid = arr[end] / 2;
	while (start <= end)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (mid <= arr[i])
			{
				value += arr[i] - mid;
			}
		}
		if (value == m) {
			return arr[end] -= arr[end] - mid;
		}
		else if (value < m)
		{
			mid = (mid-1 + mid) / 2;
			value = 0;
		}
		else
		{
			mid = (mid + arr[end]) / 2;
			value = 0;
		}
	}


	return -1;
}


int main(void)
{
	int n, m;
	vector<int> risecake;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;
		risecake.push_back(value);
	}
	sort(risecake.begin(), risecake.end());

	int value = BinerySearch(risecake, 0, n-1, m);

	cout << value;

	return 0;
}