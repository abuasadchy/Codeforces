#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x;
	cin >> x ;
	long long minNum = 0, i = 1;
	while (x != 0)
	{
		int t = x % 10;

		if (t > 4 && x != 9)
		{
			t = 9 - t;
		}
		minNum = minNum + i * t;
		i = i * 10;
		x = x / 10;
	}
	cout << minNum << endl;
	return 0;
}
