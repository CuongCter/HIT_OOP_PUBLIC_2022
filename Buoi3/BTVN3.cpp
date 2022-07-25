#include <bits/stdc++.h>

using namespace std;

class NCC 
{
	char maNCC[30];
	char tenNCC[30];
	char diaChi[30];
public:
    void NHAP();
	void XUAT();	
};

void NCC::NHAP()
{
	cout << "NHAP MA NCC: ";	fflush(stdin); gets(maNCC);
	cout << "NHAP TEN NCC: "; fflush(stdin); gets(tenNCC);
	cout << "NHAP DIA CHI: "; fflush(stdin); gets(diaChi);
}

void NCC::XUAT()
{
	cout << "  Ma NCC:  " << setw(25) << left << maNCC;
	cout << "Ten NCC:  " << tenNCC << endl;
	cout << "  Dia chi: " << diaChi << endl;
}
 
class HANG
{
private:
	char tenHang[30];
	float donGia;
	int soLuong;
public:
	void NHAP();
	void XUAT();
	friend class PHIEU;
};

void HANG::NHAP()
{
	cout << "NHAP TEN HANG: "; fflush(stdin); gets(tenHang);
	cout << "NHAP DON GIA: "; cin >> donGia;
	cout << "NHAP SO LUONG: "; cin >> soLuong;
}

void HANG::XUAT()
{
	cout << setw(15) << left << tenHang;
	cout << setw(15) << left << donGia;
	cout << setw(15) << left << soLuong;
	cout << setw(15) << left << soLuong * donGia << endl;
	
}


class PHIEU
{
	char maPhieu[30];
	char ngay[30];
	
	NCC x;
	HANG *a;
	int n;
public:
	void NHAP();
	void XUAT();
};

void PHIEU::NHAP()
{
	cout << "NHAP MA PHIEU: "; fflush(stdin); gets(maPhieu);
	cout << "NHAP NGAY LAP: "; fflush(stdin); gets(ngay);
	x.NHAP();
	cout << "NHAP SO LUONG HANG: ";
	cin >> n;
	a = new HANG[n];
	for(int i = 0; i < n; i++){
		cout << "=======================" << endl;
		cout << "NHAP THONG TIN HANG THU " << i + 1 << endl;
		a[i].NHAP();	
	}
}

void PHIEU::XUAT()
{
	cout << setw(35) << "PHIEU NHAP HANG" << endl;
    cout << "  Ma phieu: " << setw(24) << left << maPhieu;
	cout << "Ngay lap: " << ngay << endl;
	x.XUAT();
    cout << setw(15) << left << "Ten hang "<< setw(15)<< "Don gia "<< setw(15)<< "So luong "<< setw(15)<< "Thanh tien "<< endl;
	float sum = 0;
	for(int i = 0; i < n; i++){
		a[i].XUAT();	
	    sum += a[i].donGia * a[i].soLuong;
	}
	
	cout << setw(45) << right << "Cong thanh tien: " << setw(5) << right << sum << endl; 
}

int main(){
	PHIEU A;
	A.NHAP();
	A.XUAT();
 	
}
	
		
	

