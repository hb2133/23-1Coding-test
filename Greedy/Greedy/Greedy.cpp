#include <iostream>
using namespace std;

int main()
{
	int cointype[4] = { 500, 100, 50, 10 };
	int a = 1260;
	int b = 0;
	int c = 0;
	int d = 0;
	cout << "소지 금액:" << a << endl;
	cout << "고객이 지불할 금액:";
	cin >> d;
	cout << "거스름 돈:";

	cout << endl;

	a -= d;

	for (int i = 0; i < 4; i++)
	{
		int coin = cointype[i];
		b += a / coin;
		c = a / coin;
		a %= coin;
		cout << coin << "원:" << c << "개 ";
	}

	return 0;
}