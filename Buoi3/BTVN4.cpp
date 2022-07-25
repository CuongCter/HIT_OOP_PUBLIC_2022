#include <bits/stdc++.h>

using namespace std;

class NHANVIEN 
{
	char tenNV[30];
	char chucVuNV[30];
public:
	void NHAP();
	void XUAT();
};

void NHANVIEN::NHAP()
{
	cout << "NHAP TEN NV: "; fflush(stdin); gets(tenNV);
	cout << "NHAP CHUC VU NV: "; fflush(stdin); gets(chucVuNV);	
}

void NHANVIEN::XUAT()
{
	cout << "Nhan vien kiem ke: " << setw(20) << left << tenNV << "\t";
	cout << "Chuc vu: " << chucVuNV << endl;
}
	
class PHONG 
{
	char tenPhong[30];
	char maPhong[30];
	char truongPhong[30];
public:
	void NHAP();
	void XUAT();
};

void PHONG::NHAP()
{
	cout << "TEN PHONG: "; fflush(stdin); gets(tenPhong);
	cout << "MA PHONG: "; fflush(stdin); gets(maPhong);
    cout << "TRUONG PHONG: "; fflush(stdin); gets(truongPhong);	
}

void PHONG::XUAT()
{ 
	cout << "Kiem ke tai phong: " << setw(20) << left << tenPhong << "\t";
	cout << "Ma phong: " << maPhong << endl;
	cout << "Truong phong: " << truongPhong << endl;	
	
}

class TAISAN
{
    char tenTS[30];
	int soLuong;
	char tinhTrang[30];
	
public:
	void NHAP();
	void XUAT();
	
	friend class PHIEU;
};

void TAISAN::NHAP()
{
	cout << "TEN TAI SAN : ";	fflush(stdin); gets(tenTS);
	cout << "SO LUONG : "; cin >> soLuong;
	cout << "TINH TRANG: "; fflush(stdin); gets(tinhTrang);
	
}

void TAISAN::XUAT()
{
	cout << setw(20) << left << tenTS << setw(20) << left << soLuong;
	cout << setw(20) << left << tinhTrang << endl;	
}

class PHIEU
{
private:
	char maPhieu[30];
	char ngayKK[30];
	NHANVIEN x;
	PHONG y;
	TAISAN *z;
	int n;
public:
	void NHAP();
	void XUAT();
};

void PHIEU::NHAP()
{
	cout << "MA PHIEU: "; fflush(stdin); gets(maPhieu);	
	cout << "NGAY KIEM KE: "; fflush(stdin);
	gets(ngayKK);	
	x.NHAP();	
	y.NHAP();	
	cout << "NHAP SO TAI SAN KIEM KE: ";
	cin >> n;
	z = new TAISAN[n];
	for(int i = 0; i < n; i++){
		cout << "=====================" << endl;
		cout << "NHAP THONG TIN TAI SAN THU " << i + 1 << endl;
		z[i].NHAP();
	}	
}

void PHIEU::XUAT()
{
	cout << setw(40) << "PHIEU KIEM KE TAI SAN" << endl;
	cout << "Ma phieu: " << setw(30) << left << maPhieu;
	cout << "Ngay kiem ke: " << ngayKK << endl;	
	x.XUAT();	
	y.XUAT();
	cout << setw(20) << left << "Ten tai san: "<< setw(20)<< "So luong: "<< setw(20)<< "Tinh trang: " << endl;
	for(int i = 0; i < n; i++){
		z[i].XUAT();
	}	
	int tongSL = 0;
	for(int  i = 0; i < n; i++){
		tongSL += z[i].soLuong;
	}
	cout << "So tai san kiem ke: " << setw(15) << n;
	cout << "Tong so luong: " << tongSL << endl;
	
}
int main() 
{
	PHIEU a;
	a.NHAP();
	a.XUAT();
	
	return 0;
}
	

