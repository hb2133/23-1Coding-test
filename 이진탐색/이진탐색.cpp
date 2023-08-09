#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size,int target)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
		{
			return true;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return false;

}


int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);

	int target = 5;

	if (binarySearch(arr, size, target))
	{
		cout << target << endl;
	}
	else
	{
		cout << "none" << endl;
	}
	return 0;
}