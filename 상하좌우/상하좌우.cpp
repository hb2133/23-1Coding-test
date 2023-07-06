#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int x = 1;
	int y = 1;

	int arry[10][10];
	int n;
	cin >> n;

	string m;
	cin.ignore();
	getline(cin, m);
	
	for (int k = 0;k < m.size(); k++)
	{
		char strit = m[k];

		switch (strit)
		{
		case 'R':
			if (y < n)
				y += 1;
			break;
		case 'L':
			if (y > 1)
				y -= 1;
			break;
		case 'U':
			if (x > 1)
				x -= 1;
			break;
		case 'D':
			if (x < n)
				x += 1;
			break;
		default:
			break;
		}
	}

	cout << x << " " << y;

	return 0;
}