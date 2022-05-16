#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC ff;
	Nhap(ff);
	cout << "\nDa thuc vua nhap: ";
	Xuat(ff);
	return 1;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac cua da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "\nNhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 0; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
}