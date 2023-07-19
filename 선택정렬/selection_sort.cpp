#include <iostream>
using namespace std;

int arr[10] = { 7,5,9,0,3,1,6,2,4,8 };

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		int min = arr[i];
		int location = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				location = j;
			}
		}
		if (i != location) {
			int temp = arr[i];
			arr[i] = min;
			arr[location] = temp;
		}
		cout << arr[i] << " ";
	}


	return 0;
}