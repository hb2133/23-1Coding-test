#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main()
{
	int n;
	int m;
	int k;
	vector<int> v;

	int index = 0;

	cin >> n;
	cin >> m;
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	int largestNum = v[0];
	int secondlargestNum = v[0];
	int largestCount = 0;

	for (int num : v)
	{
		if (num > largestNum)
		{
			secondlargestNum = largestNum;
			largestNum = num;
		}
		else if (num > secondlargestNum && num < largestNum) {
			secondlargestNum = num;
		}
	}

	largestCount = count(v.begin(), v.end(), largestNum);

	int y;
	y = k;

	for (int j = 0; j < m; j++)
	{
		if (k != 0)
		{
			index += largestNum;
			k--;
		}
		else if (k == 0 && largestCount == 1)
		{
			index += secondlargestNum;
			k = y;
		}
		else
		{
			index += largestNum;
			k = y;
		}
	}

	cout << index << endl;
}
