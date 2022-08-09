#include <iostream>
#include<iomanip>
using namespace std;
class DOTPRINTER;
class LASERPRINTER ;
class PRINTER
{
protected:
    double trongLuong;
    char hangSX[20];
    int namSX,tocDo;
};
class DOTPRINTER : public PRINTER
{
    int matDo;
public:
    void Nhap();
    void Xuat();
};
class LASERPRINTER : public PRINTER
{
    int doPhanGiai;
public:
    void Nhap();
    void Xuat();
};
void DOTPRINTER::Nhap()
{
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap hang sx: "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam sx: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap do kim: "; cin>>matDo;
}
void DOTPRINTER::Xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang SX "<<hangSX<<endl;
    cout<<"Nam SX: "<<namSX<<endl;
    cout<<"Toc do: "<<tocDo<<endl;
    cout<<"Mat do kim: "<<matDo<<endl;
}
void LASERPRINTER::Nhap()
{
    cout<<"Nhap trong Luong: "; cin>>trongLuong;
    cout<<"Nhap hang SX "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam SX: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap do phan giai: "; cin>>doPhanGiai;
}
void LASERPRINTER::Xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang SX "<<hangSX<<endl;
    cout<<"Nam SX: "<<namSX<<endl;
    cout<<"Toc do: "<<tocDo<<endl;
    cout<<"Mat do phan giai: "<<doPhanGiai<<endl;
}

int main()
{
    DOTPRINTER a;
    LASERPRINTER *b;
    cout<<"Nhap thong tin may in KIM:"<<endl;
    a.Nhap();
    cout<<"===May in Kim==="<<endl;
    a.Xuat();
    int n;
    cout<<"Nhap so luong may in LASER: "; cin>>n;
    b = new LASERPRINTER[n];
    for(int i=0;i<n;i++){
    	cout<<"===May in LASER thu  "<<i+1<<endl;
    	b[i].Nhap();
	}
	cout<<"================"<<endl;
    for(int i=0;i<n;i++){
    	cout<<"May in LASER thu : "<<i+1<<endl;
    	b[i].Xuat();
	}
    
    return 0;
}
