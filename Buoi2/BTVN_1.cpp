#include <bits/stdc++.h>

using namespace std;

class Hang
{
private:
	char maHang[10];
	char tenHang[20];
	float donGia;
	int soLuong;
public:
	void Nhap();
	void Xuat();
};

void Hang::Nhap()
{
	cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	cout<<"Nhap don gia: "; cin>>donGia;
	cout<<"Nhap so luong: "; cin>>soLuong;
}

void Hang::Xuat()
{
	float thanhTien = soLuong * donGia;
	cout<<setw(15)<<left<<maHang<<setw(20)<<left<<tenHang<<setw(15)<<left<<soLuong<<setw(15)<<left<<donGia<<thanhTien<<endl;
}

int main()
{
	int n;
	cout<<"Nhap so luong mat hang: "; cin>>n;
	Hang *a = new Hang[n];
	for(int i = 0; i < n; ++ i)
	{
		cout<<"Nhap thong tin mat hang thu "<<i + 1<<":"<<endl;
		a[i].Nhap();
	}
	cout<<"==============="<<endl;
	cout<<"**********Danh sach hang**********"<<endl;
	cout<<setw(15)<<left<<"Ma hang"<<setw(20)<<left<<"Ten hang"<<setw(15)<<left<<"So luong"<<setw(15)<<left<<"Don gia"<<"Thanh tien"<<endl;
	for(int i = 0; i < n; ++ i)
	{
		a[i].Xuat();
	}
}

