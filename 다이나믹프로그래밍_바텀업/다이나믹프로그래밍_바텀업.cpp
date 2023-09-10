#include <iostream>
using namespace std;

int64_t d[100];

int64_t fibo(int x)
{
	if (x == 1 || x == 2)
	{
		return 1;
	}

	if (d[x] != 0)
	{
		return d[x];
	}

	d[x] = fibo(x - 1) + fibo(x - 2);

	return d[x];
}
int main(void)
{
	cout << fibo(99) << endl;

	return 0;
}