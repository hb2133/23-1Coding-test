#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, k;

	cin >> n >> k;

	vector<int> A;
	vector<int> B;

	int num = 0;

	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;

		A.push_back(j);
	}

	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		B.push_back(j);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < k; i++)
	{
		if (A[i] < B[i])
		A[i] = B[i];
	}

	for (int i = 0; i < n; i++)
	{
		num += A[i];
	}

	cout << num;

	return 0;
}