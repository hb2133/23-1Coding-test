#include <iostream>
using namespace std;

void main()
{
	int n, k;
	int count = 0;
	cin >> n >> k;

	while (n != 1)
	{
		if (n % k == 0)
		{
			n /= k;
			count++;
		}
		else
		{
			n--;
			count++;
		}
	}

	cout << count;
}