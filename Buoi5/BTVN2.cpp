#include <iostream>
#include<string.h>
using namespace std;
class ELECTRONIC
{
protected:
    double congSuat;
    int dienAp;
public:
    ELECTRONIC(double a, int b);
};
class MAYGIAT : public ELECTRONIC
{
    double dungTich;
    char loai[30];
public:
    MAYGIAT(double a, int b, double c, char *d);
    void Xuat();
};
class TULANH : public ELECTRONIC
{
    double dungTich;
    int soNgan;
public:
    TULANH(double a,int b, double c, int d);
    void Xuat();
};
void MAYGIAT::Xuat()
{
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap : "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"Loai: "<<loai<<endl;
}
void TULANH::Xuat()
{
    cout<<"Cong suat: "<<congSuat<<endl;
    cout<<"Dien ap : "<<dienAp<<endl;
    cout<<"Dung tich: "<<dungTich<<endl;
    cout<<"So ngan: "<<soNgan<<endl<<endl;
}
ELECTRONIC::ELECTRONIC(double a, int b)
{
    congSuat = a;
    dienAp = b;
}
MAYGIAT::MAYGIAT(double a, int b, double c, char*d):ELECTRONIC(a, b)
{
    dungTich = c;
    strcpy(loai, d);
}
TULANH::TULANH(double a, int b, double c, int d):ELECTRONIC(a,b)
{
    dungTich = c;
    soNgan = d;
}
int main()
{
    MAYGIAT a(100, 220, 2, "MINI");
    cout<<"Thong tin may giat:"<<endl;
    a.Xuat();
    cout<<"========="<<endl;
    TULANH b(150, 220, 150, 4);
    cout<<"Thong tin tu lanh:"<<endl;
    b.Xuat();
    return 0;
}
