#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
using namespace std;
void Create(int* a, int size)
{
	for (int i = 0; i < size; i++)
		a[i] = 2 + rand() % (0 + 1);
}
void Print(int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(2) << a[i] << " ";
}
int FindAver(int* a, int size)
{
	double aver = 0;
	double k = 0;
	double find = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 != 0)
		{
			find += a[i];
			k++;
		}
	}
	aver = find / k;
	if (k == 0)
	{
		cerr << "There isn`t odd numbers!";
		return false;
	}
	else
		return aver;

}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	Create(a, n);
	cout << "a[";
	Print(a, n);
	cout << "]" << endl;
	cout << "Average Element = " << FindAver(a,n) << endl;
	return 0;
}