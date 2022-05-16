#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC M;
	Nhap(M);
	cout << "\nTam giac vua nhap: ";
	Xuat(M);
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A:\n";
	Nhap(t.A);
	cout << "Nhap diem B:\n";
	Nhap(t.B);
	cout << "Nhap diem C:\n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nA: " << endl;
	Xuat(t.A);
	cout << "\nB: " << endl;
	Xuat(t.B);
	cout << "\nC: " << endl;
	Xuat(t.C);

}