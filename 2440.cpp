#include <iostream>

using namespace std;

int main()
{
	int n;//n개를 찍을것이다.
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i+n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}