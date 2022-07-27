#include<bits/stdc++.h>
using namespace std;
class Phieu;
class NCC{
    char MaNCC[30], TenNCC[30], DiaChi[30], SDT[20];
public:
    void nhap();
    void xuat();
};
void NCC::nhap(){
    cout<<"Nhap ma NCC: "; fflush(stdin); gets(MaNCC);
    cout<<"Nhap ten NCC: "; fflush(stdin); gets(TenNCC);
    cout<<"Nhap dia chi NCC: "; fflush(stdin); gets(DiaChi);
    cout<<"Nhap sdt NCC: "; fflush(stdin); gets(SDT);
}
void NCC::xuat(){
    cout<<left<<"Ma NCC: "<<setw(25)<<MaNCC<<"Ten NCC: "<<TenNCC<<endl;
    cout<<left<<"Dia chi: "<<setw(25)<<DiaChi<<"SDT: "<<SDT<<endl;
}
class SanPham{
    char MaSP[30], TenSP[30];
    int SoLuong;
    double DonGia;
public:
    void nhap();
    void xuat();
    double ThanhTien()
    {
        return SoLuong * DonGia;
    }
    friend class Phieu;
    friend int Dem(Phieu a);
    friend void SapXep(Phieu a);
    friend void Change(Phieu a);
    friend void Sort(Phieu a);
    friend void Insert(Phieu &a,SanPham x, int pos);
    friend void Delete(Phieu &a, int pos);
};
void SanPham::nhap(){
    cout<<"Nhap ma san pham: "; fflush(stdin); gets(MaSP);
    cout<<"Nhap ten san pham: "; fflush(stdin); gets(TenSP);
    cout<<"Nhap so luong: "; cin>>SoLuong;
    cout<<"Nhap don gia: "; cin>>DonGia;
}
void SanPham::xuat()
{
    cout<<left<<setw(15)<<MaSP<<setw(25)<<TenSP<<setw(15)<<SoLuong<<setw(15)<<DonGia<<setw(15)<<DonGia*SoLuong<<endl;
}
class Phieu
{
    char MaPhieu[30], NgayLap[30];
    NCC x;
    SanPham *y;
    int n;
public:
    void nhap();
    void xuat();
    friend int Dem(Phieu a);
    friend void SapXep(Phieu a);
    friend void Change(Phieu a);
    friend void Sort(Phieu a);
    friend void Insert(Phieu &a,SanPham x, int pos);
    friend void Delete(Phieu &a, int pos);
};
void Phieu::nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(MaPhieu);
    cout<<"Nhap ngay lap: "; fflush(stdin); gets(NgayLap);
    x.nhap();
    cout<<"Nhap so luong san pham: "; cin>>n;
    y = new SanPham[n];
    for(int i=0;i<n;i++){
        cout<<"===Nhap san pham thu: "<<i+1<<endl;
        y[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"Dai hoc Victory"<<endl;
    cout<<"\t\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<left<<"Ma phieu: "<<setw(25)<<MaPhieu<<"Ngay lap: "<<NgayLap<<endl;
    x.xuat();
    cout<<left<<setw(15)<<"Ma san pham"<<setw(25)<<"TenSP<"<<setw(15)<<"SoLuong"<<setw(15)<<"DonGia"<<setw(15)<<"Thanh tien"<<endl;
    double sum=0;
    for(int i=0;i<n;i++){
        y[i].xuat();
        sum += y[i].SoLuong * y[i].DonGia;
    }
    cout<<left<<setw(63)<<"\t\tTong: "<<sum<<endl;
    cout<<"\tHieu truong \t\t Phong tai chinh \t\t Nguoi lap"<<endl;
}
int Dem(Phieu a)
{
    int dem=0;
    for(int i=0;i<a.n;i++){
        if(a.y[i].SoLuong < 80)
            dem++;
    }
    return dem;
}
void SapXep(Phieu a)
{
    for(int i=0;i<a.n;i++){
        for(int j=i+1;j<a.n;j++){
            if(a.y[i].DonGia > a.y[j].DonGia){
                /*swap(a.y[i], a.y[j]);*/
                SanPham tg = a.y[i];
                a.y[i] = a.y[j];
                a.y[j] = tg;
            }
        }
    }
}
void Change(Phieu a){
    for(int i=0;i<a.n;i++){
        if(strcmp(a.y[i].TenSP, "Giay in A4")==0)
            a.y[i].DonGia = 60;
    }
}
void Sort(Phieu a)
{
    for(int i=0;i<a.n;i++){
        for(int j=i+1;j<a.n;j++){
            if(a.y[i].ThanhTien() < a.y[j].ThanhTien())
                swap(a.y[i],a.y[j]);
        }
    }
}
void Insert(Phieu &a,SanPham x, int pos)
{
    a.y = (SanPham*)realloc(a.y, (a.n+1)*sizeof(SanPham));

    for(int i=a.n; i>=pos;i--){
        a.y[i] = a.y[i-1];
    }
    a.y[pos-1] = x;
    a.n++;
}
//tim hieu malloc calloc realloc
void Delete(Phieu &a, int pos)
{
    for(int i=pos-1;i<a.n-1;i++){
        a.y[i] = a.y[i+1];
    }
    a.y = (SanPham*)realloc(a.y, (a.n-1)*sizeof(SanPham));
    a.n--;
}
int main(){
    Phieu a;
    a.nhap();
    a.xuat();
    /*cout<<"So san pham co so luong < 80 la: "<<Dem(a)<<endl;
    SapXep(a);
    cout<<"Phieu sau khi sap xep: "<<endl;
    a.xuat();*/
    cout<<"Phieu sau khi thay doi"<<endl;
    /*Change(a);
    a.xuat();*/
    /*Sort(a);
    a.xuat();*/
    SanPham x;
    x.nhap();
    Insert(a,x,1);
    a.xuat();
    /*int pos;
    cout<<"Nhap vi tri can xoa: "; cin>>pos;
    Delete(a,pos);
    cout<<"Phieu sau khi xoa: "<<endl;
    a.xuat();*/

}
