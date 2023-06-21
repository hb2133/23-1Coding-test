#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int n; //배열의 크기
	int m; //숫자가 더해지는 횟수
	int k; //연속으로 더할 수 있는 횟수
	
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	cout << v.size();
}