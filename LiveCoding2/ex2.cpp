#include<bits/stdc++.h>
using namespace std;
class PRINTER
{
protected:
    double trongLuong;
    char hangSX[30];
    int nam;
    int tocDo;
};
class DOTPRINTER : public PRINTER
{
    int matDoKim;
public:
    void nhap();
    void xuat();
};
class LASERPRINTER : public PRINTER
{
    int doPhanGiai;
public:
    void nhap();
    void xuat();
};
void DOTPRINTER::nhap()
{
    cout<<"Trong luong: "; cin>>trongLuong;
    cout<<"Hang san xuat: "; fflush(stdin); gets(hangSX);
    cout<<"Nam san xuat: " ; cin>>nam;
    cout<<"Toc do kim: "; cin>>tocDo;
    cout<<"Mat do kim: "; cin>>matDoKim;
}
void DOTPRINTER::xuat()
{
    cout<<"Trong luong: "<<trongLuong<<endl;
    cout<<"Hang san xuat: "<<hangSX<<endl;
    cout<<"Nam san xuat: "<<nam<<endl;
    cout<<"Toc do kim: "<<tocDo<<endl;
    cout<<"Mat do kim: "<<matDoKim<<endl;
}
int main()
{
    DOTPRINTER a;
    cout<<"Nhap thong tin cho may in Kim: "<<endl;
    a.nhap();
    cout<<"Xuat thong tin cho may in Kim: "<<endl;
    a.xuat();
    //Tu code tiep phan LASERPRINTER
    //LASERPRINTER b;
}
