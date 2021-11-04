#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Input(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
	cout << endl;
}

int Max(int* a, const int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int Min(int* a, const int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}
int main()
{
	int n;
	cout << " " << "n = ";
	cin >> n;
	int* a = new int[n];


	Input(a, n);
	Print(a, n);

	cout << "max = " << Max(a, n) << endl;
	cout << "min = " << Min(a, n) << endl;

	return 0;
}