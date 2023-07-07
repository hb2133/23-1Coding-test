#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int x_steps[] = { -2, -2, -1, 1, 2, 2, -1, 1 };
	int y_steps[] = { -1, 1, -2, -2, -1, 1, 2, 2 };

	string inputData;
	cin >> inputData;

	int row = inputData[1] - '0';
	int column = inputData[0] - 'a' + 1;
	
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		int row_step = row;
		row_step += x_steps[i];
		int column_step = column;
		column_step += y_steps[i];

		if (row_step >= 1 && row_step <= 8 && column_step >= 1 && column_step <= 8)
		{
			count++;
		}
	}


	cout << count;
}