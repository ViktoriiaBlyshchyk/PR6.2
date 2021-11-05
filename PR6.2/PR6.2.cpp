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

void Sort(int* a, const int n) 
{
	
	for (int i = 0; i < n; i++) 
	{
		int max = a[0];
		int min = a[0]; 
		int imax = 0;
		int imin = 0; 
		for (int i = 1; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				imax = i;
			}
			else
				if (a[i] < min)
				{
					min = a[i];
					imin = i;
				}
		}
		a[imin] = max;
		a[imax] = min;
	}
}

int main()
{
	int n;
	cout << " " << "n = ";
	cin >> n;
	int* a = new int[n];

	Input(a, n);
	Print(a, n);

	Sort(a, n);
	Print(a, n);

	return 0;
}