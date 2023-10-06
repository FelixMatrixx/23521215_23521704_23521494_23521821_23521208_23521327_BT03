#include<iostream>

using namespace std;
void Nhap(int[], int&);
int ktSong(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = ktSong(a, n);
	cout << kq;
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int ktSong(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		if (a[0] == a[1])
			return 0;
		else
			return 1;
	int flag = 1;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) <= 0)
			flag = 0;
	return flag;
}