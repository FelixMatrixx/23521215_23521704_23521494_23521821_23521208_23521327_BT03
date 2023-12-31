#include<iostream>

using namespace std;
void Nhap(int[], int&);
int LeDauTien(int[], int);
int LeNhoNhat(int[], int);
int TimGiaTri(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = TimGiaTri(a, n);
	cout << kq;
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int LeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			return a[i];
	return 0;
}
int LeNhoNhat(int a[], int n)
{
	int lc = LeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0 && a[i] < lc)
			lc = a[i];
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}