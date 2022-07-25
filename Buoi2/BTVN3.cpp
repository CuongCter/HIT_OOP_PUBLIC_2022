#include <bits/stdc++.h>

using namespace std;

class QuanLy
{
private:
	char maQL[10];
	char hoTen[20];
public:
	void Nhap();
	void Xuat();
};

void QuanLy::Nhap()
{
	cout<<"Nhap ma quan ly: "; fflush(stdin); gets(maQL);
	cout<<"Nhap ten quan ly: "; fflush(stdin); gets(hoTen);
}

void QuanLy::Xuat()
{
	cout<<"Ma quan ly: "<<maQL<<endl;
	cout<<"Ho ten: "<<hoTen<<endl;
}

class May
{
private:
	char maMay[10];
	char kieuMay[15];
	char tinhTrang[10];
public:
	void Nhap();
	void Xuat();
};

void May::Nhap()
{
	cout<<"Nhap ma may: "; fflush(stdin); gets(maMay);
	cout<<"Nhap kieu may: "; fflush(stdin); gets(kieuMay);
	cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}

void May::Xuat()
{
	cout<<setw(15)<<left<<maMay<<setw(20)<<left<<kieuMay<<tinhTrang<<endl;
}

class PhongMay
{
private:
	char maPhong[15];
	char tenPhong[20];
	float dienTich;
	QuanLy x;
	May *y;
	int n;
public:
	void Nhap();
	void Xuat();
};

void PhongMay::Nhap()
{
	cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
	cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPhong);
	cout<<"Nhap dien tich: "; cin>>dienTich;
	cout<<"Nhap thong tin quan ly: "<<endl;
	x.Nhap();
	cout<<"Nhap so luong may: "; cin>>n;
	y = new May[n];
	for(int i = 0; i < n; ++ i)
	{
		cout<<"Nhap thong tin may thu "<<i + 1<<":"<<endl;
		y[i].Nhap();
	}
}

void PhongMay::Xuat()
{
	cout<<endl<<"====================="<<endl<<endl;
	cout<<"Ma phong: "<<maPhong<<endl;
	cout<<"Ten phong: "<<tenPhong<<endl;
	cout<<"Dien tich: "<<dienTich<<endl;
	x.Xuat();
	cout<<setw(15)<<left<<"Ma may"<<setw(20)<<left<<"Kieu may"<<"Tinh trang"<<endl;
	for(int i = 0; i < n; ++ i)
		y[i].Xuat();
}
int main()
{
	PhongMay A;
	A.Nhap();
	A.Xuat();
}

