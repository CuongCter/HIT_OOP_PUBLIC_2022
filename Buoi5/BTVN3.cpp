#include<bits/stdc++.h>
using namespace std;

class HinhBinhHanh
{
        double a;
        double b;
        double h;
    public:
        HinhBinhHanh(double a, double b, double h);
        double ChuVi();
        double DienTich();
        void xuat();
};

HinhBinhHanh::HinhBinhHanh(double a, double b, double h)
{
    this->a = a;
    this->b = b;
    this->h = h;
}

double HinhBinhHanh::ChuVi()
{
    return (a+b)*2;
}

double HinhBinhHanh::DienTich()
{
    return a*h;
}

void HinhBinhHanh::xuat()
{
    cout<<"Do dai day: "<<a<<endl;
	cout<<"Do dai ben: "<<b<<endl;
	cout<<"Chieu cao: "<<h<<endl;
	cout<<"Chu vi: "<<ChuVi()<<endl;
	cout<<"Dien tich: "<<DienTich()<<endl;
}

int main()
{
    HinhBinhHanh a(2, 3.4, 5);
    HinhBinhHanh b(3, 5, 2.4);
    cout<<"Hinh binh hanh a"<<endl;
    a.xuat();
    cout<<"================="<<endl;
    cout<<"Hinh binh hanh b"<<endl;
    b.xuat();
    cout<<"================="<<endl;
    if(a.DienTich()>b.DienTich())
    {
    	cout<<"Hinh a co dien tich lon hon!";
	}else if(a.DienTich()<b.DienTich())
	{
		cout<<"Hinh b co dien tich lon hon!";
	}else
	{
		cout<<"Hai hinh co dien tich bang nhau!";
	}
	
    return 0;
}
