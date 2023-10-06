#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void LietKe(float[], int);
int main()
{
	float b[500];
	int n;
	Nhap(b, n);
	LietKe(b, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
void LietKe(float a[], int n)
{
	cout << "\nCac gia tri cuc dai: ";
	if (n == 1)
		return;
	if (a[0] > a[1])
		cout << a[0] << setw(8);
	for (int i = 1; i < n - 1; i++)
		if (a[i - 1] < a[i] && a[i] > a[i+1])
			cout << a[i] << setw(8);
	if (a[n - 2] < a[n - 1])
		cout << a[n - 1];
}
