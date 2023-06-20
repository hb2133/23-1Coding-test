#include <iostream>
#include <ctime>
using namespace std;

void func(int coin)
{
	int a;
	int b;
	int c;
	int d;

	a = coin / 500;
	if (coin < 500)
		a = 0;
	else
		coin -= a * 500;

	b = coin / 100;
	if (coin < 100)
		b = 0;
	else
		coin -= b * 100;

	c = coin / 50;
	if (coin < 50)
		c = 0;
	else
		coin -= c * 50;

	d = coin / 10;
	if (coin < 10)
		d = 0;
	else
		coin -= d * 10;

	cout << "500원 " << a << "개, ";
	cout << "100원 " << b << "개, ";
	cout << "50원 " << c << "개, ";
	cout << "10원 " << d << "개";
}

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();

	int a = 1260;
	int b;
	int c;
	cout << "소지 금액:" << a << endl;
	cout << "고객이 지불할 금액:";
	cin >> b;

	c = a - b;
	cout << "거스름 돈:" << c << endl;

	func(c);

	cout << endl;
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "초" << endl;

	return 0;
}