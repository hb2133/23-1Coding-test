#include <iostream>
using namespace std;

int main(void)
{
	int ary[6][6] = {};
	for (int i = 0; i < 6; i++)
	{
		int a, b;
		cin >> a >> b;
		ary[a][b] = 1;
		ary[b][a] = 1;
	}

	//for (int k = 0; k < 6; k++)
	//{
	//	for (int j = 0; j < 6; j++)
	//	{
	//		cout << ary[k][j] << " ";
	//	}
	//	cout << endl;
	//}
}