#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;//n개를 찍을것이다.
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int k = 0; k < n - i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++ )
		{
			
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}