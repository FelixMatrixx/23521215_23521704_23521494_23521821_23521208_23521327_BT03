#include <iostream>
using namespace std;
void Nhap(float[], int&);
void ConLonNhat(float[], int, int &vtd, int &vtc);
float TongCon(float[], int, int, int, int);
int main()
{
	float a[100];
	int k;
	int vtd, vtc;
	Nhap(a, k);
	ConLonNhat(a, k, vtd,vtc );
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}
void ConLonNhat(float a[], int n, int &vtd, int &vtc)
{
	vtd = 0;
	vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
			for (int i = vtd; i <= vtc; i++)
				cout << a[i] << "    ";
}
