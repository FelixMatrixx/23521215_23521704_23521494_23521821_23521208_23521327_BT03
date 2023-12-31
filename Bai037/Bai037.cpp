#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int s = TongDoiXung(a, n);
	cout << "Tong cac gia tri doi xung trong mang: " << s;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}
int TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (ktDoiXung(a[i]))
			s += a[i];
	}
	return s;
}
