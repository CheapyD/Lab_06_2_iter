#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Max(int* a, const int size)
{
	int max = 0;
	int imax = -1;
	for (int i = 0; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
	return imax;
}

int Min(int* a, const int size)
{
	int min = 0;
	int imin = -1;
	for (int i = 0; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	return imin;
}

int Sum(int* a, const int size)
{
	int S = 0;
	const int n = 10;
	for (int i = 0; i < size; i++)
		S = Min(a, n) + Max(a, n);
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];

	int Low = -12;
	int High = 30;

	int imax;
	int imin;

	Create(a, n, Low, High);
	cout << "Original masive" << endl;
	Print(a, n);
	cout << endl;

	cout << "Calculating sum of imax and imin" << endl;
	cout << "imax = " << Max(a, n) << endl;
	cout << "imin = " << Min(a, n) << endl;
	cout << endl;
	
	cout << "Calculacting sum" << endl;
	cout << "S = " << Sum(a, n) << endl;
	cout << endl;
	
	system("pause");
	return 0;
}