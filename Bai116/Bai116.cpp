#include <iostream>
using namespace std;
void Nhap(int[], int &);
void GanNhat(int[], int, int&, int&);
void LietKe(int [], int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;
}
void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	if (n <= 2)
		return ;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void GanNhat(int a[], int n, int &x, int&y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x=a[i];
				y=a[j];
			}
}
void LietKe(int a[], int n)
{
	int u, v;
	GanNhat(a, n, u, v);
	for (int i = 0; i <=n - 1; i++)
		for (int j = 0; j<= n - 1; j++)
			if ((i != j) && (abs(a[i] - a[j]) == abs(u - v)))
				cout << "(" << a[i] << "," << a[j] << ")";
}
