#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector<int>& arr, int target, int start, int end) {
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == target) return mid;
		else if (arr[mid] > target) end = mid - 1;
		else start = mid + 1;
	}

	return -1;
}

int main(void)
{
	int n, m;

	vector<int> n_vector;
	vector<int> m_vector;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int n_index;
		cin >> n_index;
		n_vector.push_back(n_index);
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int m_index;
		cin >> m_index;
		m_vector.push_back(m_index);
	}

	sort(n_vector.begin(), n_vector.end());

	for (int i = 0; i < m; i++)
	{
		int result = BinarySearch(n_vector, m_vector[i], 0, n - 1);
		if (result != -1)
		{
			cout << "yes" << ' ';
		}
		else
		{
			cout << "no" << ' ';
		}
	}

	return 0;
}