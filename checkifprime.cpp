#include<iostream>
using namespace std;

int main()
{
	int a;
	bool check;
	cout << "Enter a number: " << endl;
	cin >> a;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			check = false;
			break;
		}
		else
		{
			check = true;
		}
	}
	if (check)
	{
		cout << a << " is a prime number" << endl;
	}
	else
	{
		cout << a << " is not a prime number" << endl;
	}
	return 0;
}