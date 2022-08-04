#include<bits/stdc++.h>
using namespace std;
class PERSON
{
protected:
    char hoTen[30], ngaySinh[30], que[30];
};
class KYSU : public PERSON
{
    char nganh[30];
    int namTN;
public:
    void nhap();
    void xuat();
    friend void Tim(KYSU *a, int n);
};
void KYSU::nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que: "; fflush(stdin); gets(que);
    cout<<"Nhap nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nhap nam: "; cin>>namTN;
}
void KYSU::xuat()
{
    cout<<"Ho ten: "<<hoTen<<endl;
    cout<<"Ngay sinh: "<<ngaySinh<<endl;
    cout<<"Que: "<<que<<endl;
    cout<<"Nganh: "<<nganh<<endl;
    cout<<"Nam: "<<namTN<<endl;
}
void Tim(KYSU *a, int n)
{
    int Max = 0;
    for(int i=0;i<n;i++){
        if(a[i].namTN > Max) Max = a[i].namTN;
    }
    cout<<"Sinh vien tot nghiep gan nhat la: "<<endl;
    for(int i=0;i<n;i++){
        if(a[i].namTN == Max)
            a[i].xuat();
    }
}
int main()
{
    KYSU *a;
    int n;
    cout<<"Nhap so luong ky su: "; cin>>n;
    a = new KYSU[n];
    for(int i=0;i<n;i++){
        cout<<"Nhap ky su thu: "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<"================"<<endl;
    for(int i=0;i<n;i++){
        cout<<"===Ky su thu: "<<i+1<<endl;
        a[i].xuat();
    }
    cout<<"Sau khi tim: "<<endl;
    Tim(a,n);
}
