#include<iostream>

using namespace std;
void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << a[i];
	}
}