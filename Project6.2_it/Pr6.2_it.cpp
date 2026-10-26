#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0;i < size;i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int *a, const int size)
{
	for (int i = 0;i < size;i++)
		cout << setw(4) << a[i];
	cout << endl;
}

// середнє арифметичне індексів парних елементів
// (якщо парних елементів немає - повертає 0 і виводить повідомлення)
double AverageIndexEven(int* a, const int size)
{
	int S = 0;
	int k = 0;
	for(int i =0;i< size;i++)
		if (a[i] % 2 == 0)
		{
			S += i;
			k++;
		}
	if (k == 0)
	{
		cout << "no even elements" << endl;
		return 0;
	}
	return (double)S / k;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int a[n];

	int Low = 10;
	int High = 99;

	Create(a, n, Low, High);
	Print(a, n);

	cout << "average index of even elements =" << AverageIndexEven(a, n) << endl;

	return 0;
}