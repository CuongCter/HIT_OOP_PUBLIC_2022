#include <bits/stdc++.h>

using namespace std;

class NhaSanXuat
{
private:
	char maNSX[10];
	char tenNSX[20];
	char diaChi[30];
public:
	void Nhap();
	void Xuat();
};

void NhaSanXuat::Nhap()
{
	cout<<"Nhap ma nha san xuat: "; fflush(stdin); gets(maNSX);
	cout<<"Nhap ten nha san xuat: "; fflush(stdin); gets(tenNSX);
	cout<<"Nhap dia chi nha san xuat: "; fflush(stdin); gets(diaChi);
}

void NhaSanXuat::Xuat()
{
	cout<<"Ma nha san xuat: "<<maNSX<<endl;
	cout<<"Ten nha san xuat: "<<tenNSX<<endl;
	cout<<"Dia chi: "<<diaChi<<endl;
}

class Hang
{
private:
	char maHang[10];
	char tenHang[20];
	NhaSanXuat x;
public:
	void Nhap();
	void Xuat();
};

void Hang::Nhap()
{
	cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	cout<<"Nhap thong tin nha san xuat: "<<endl;
	x.Nhap();
}

void Hang::Xuat()
{
	cout<<"========================"<<endl;
	cout<<"Ma hang: "<<maHang<<endl;
	cout<<"Ten hang: "<<tenHang<<endl;
	x.Xuat();
}
int main()
{
	Hang A;
	A.Nhap();
	A.Xuat();
}

