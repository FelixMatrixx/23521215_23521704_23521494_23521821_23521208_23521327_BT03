#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nGia tri am lon nhat trong mang la: " << AmLonNhat(b, k);
	return 0;
}

void Nhap(float  a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>lc)
			lc = a[i];
	return lc;
}