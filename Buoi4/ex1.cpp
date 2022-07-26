#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include <string.h>
using namespace std;
class Phieu;
class taiSan{
private:
	char tenTS[30];
	int soLuong;
	char tinhTrang[30];
	friend class Phieu;
public: 
	void Nhap();
	void Xuat();
	taiSan();
	taiSan(char *tenTs,int sl,char *tt);
	friend void ChangeTaiSan(Phieu &a);
	friend void SortTaiSan(Phieu a);

};
taiSan::taiSan(){
	
}
taiSan::taiSan(char *tenTs,int sl,char *tt){
	strcpy(tenTS,tenTs);
	soLuong=sl;
	strcpy(tinhTrang,tt);
}

class KiemKe{
private:
	char nvKK[30];
	char chucVu[30];
	char diaDiem[30];
	char maPhong[30];
	char truongPhong[30];
public:
	void Nhap();
	void Xuat();
	
};
class Phieu{
private:
	char maPhieu[30];
	char ngayKK[30];
	int n;
	KiemKe a;
	taiSan *taiSans;
	
public:
	void Nhap();
	void Xuat();
	friend void ChangeTaiSan(Phieu &a);
	friend void Insert(Phieu &a, taiSan x, int pos);
	friend void SortTaiSan(Phieu a);
	
;};
void taiSan::Nhap(){
	cout<<"Nhap ten tai san: "; fflush(stdin); gets(tenTS);
	cout<<"Nhap so luong: "; cin>>soLuong;
	cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}
void taiSan::Xuat(){
	cout<<left<<setw(20)<<tenTS<<setw(20)<<soLuong<<setw(20)<<tinhTrang<<endl;
}
void KiemKe::Nhap(){
	cout<<"Nhap nhan vien kiem ke: "; fflush(stdin); gets(nvKK);
	cout<<"Nhap chuc vu: "; fflush(stdin); gets(chucVu);
	cout<<"Nhap dia diem kiem ke: "; fflush(stdin); gets(diaDiem);
	cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
	cout<<"Nhap truong phong: "; fflush(stdin); gets(truongPhong);
}
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Ngay kiem ke: "; fflush(stdin); gets(ngayKK);
	cout<<"\tNhap thong tin van phong kiem ke"<<endl;
	a.Nhap();
	cout<<"Nhap so luong tai san: "; cin>>n;
	taiSans = new taiSan[n];
	for(int i=0;i<n;i++){
		cout<<"\tNhap thong tin tai san thu: "<<i+1<<endl;
		taiSans[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\t\tPhieu Kiem Ke Tai San"<<endl;
	cout<<left<<setw(20)<<"Ma Phieu: "<<setw(20)<<maPhieu<<"Ngay kiem ke: "<<ngayKK<<endl;
	cout<<left<<setw(20)<<"Ten tai san "<<setw(20)<<"So luong "<<setw(20)<<"Tinh trang "<<endl;
	int sum = 0;
	for(int i=0; i<n; i++) {
		taiSans[i].Xuat();
		sum += taiSans[i].soLuong;
	}
	cout<<right<<"So tai san da kiem ke: "<<n<<setw(25)<<"Tong so luong: "<<sum<<endl;
}
void ChangeTaiSan(Phieu &a){
	for(int i=0;i<a.n;i++){
		if(strcmp(a.taiSans[i].tenTS,"May vi tinh")==0){
			a.taiSans[i].soLuong=20;
		}
	}
}
void Insert(Phieu &a, taiSan x, int pos) { 
	a.taiSans = (taiSan*)realloc(a.taiSans, (a.n+1)*sizeof(taiSan)); 
	for(int i=a.n; i>=pos; i--) {
		a.taiSans[i] = a.taiSans[i-1];
	}
	a.taiSans[pos-1] = x;
	a.n++;
}
void SortTaiSan(Phieu a) { 
	for(int i=0; i<a.n-1; i++) {
		for(int j=a.n-1; j>i; j--) {
			if(a.taiSans[j-1].soLuong > a.taiSans[j].soLuong) {
				taiSan temp = a.taiSans[j-1];
				a.taiSans[j-1] = a.taiSans[j];
				a.taiSans[j] = temp;
			}
		}
	}
}
int main(){
	Phieu a;
	a.Nhap();
	cout<<"\nPhieu vua nhap la: "<<endl;
	a.Xuat();
	ChangeTaiSan(a);
//	cout<<"\nPhieu sau khi thay doi so luong may vi tinh: "<<endl;
//	a.Xuat();
	taiSan x("Laptop",10,"tot");
	Insert(a,x,2);
	cout<<"\nPhieu sau khi chen: "<<endl;
	a.Xuat();
//	SortTaiSan(a);
//	cout<<"\nPhieu sau khi sap xep: "<<endl;
//	a.Xuat();
}

