

#include <bits/stdc++.h>

using namespace std;

#define f fflush(stdin);
#define Set(a, n) for(int i = 0; i < n; ++ i) cout<<char(a); // Khong can care

void Show(int a); // Khong can care

class Phieu;

class NguoiLap
{
private:
    char maNguoiLap[15];
    char hoTen[30];
    char caTruc[10];
public:
    void Nhap();
    void Xuat();
};

void NguoiLap::Nhap()
{
    cout<<"Nhap ma nguoi lap: "; f; gets(maNguoiLap);
    cout<<"Nhap ten nguoi lap: "; f; gets(hoTen);
    cout<<"Nhap ca truc: "; f; gets(caTruc);
}

void NguoiLap::Xuat()
{
    cout<<left<<setw(5)<<char(186); // Khong can care
    // ==================================================================================================
    cout<<"Nguoi lap: "<<setw(19)<<maNguoiLap<<"Ho ten: "<<setw(20)<<hoTen<<"Ca truc: "<<setw(9)<<caTruc;
    // ==================================================================================================
    cout<<char(186)<<endl; // Khong can care
}

class HanhKhach
{
private:
    char maHanhKhach[15];
    char hoTen[20];
    char passPost[15];
    float thu;
    friend class Phieu;
    friend void SuaTen(Phieu A);
    friend void SapXep(Phieu A);
    friend void Xoa(Phieu &A);
public:
    void Nhap();
    void Xuat();
};

void HanhKhach::Nhap()
{
    cout<<"Nhap ma hanh khach: "; f; gets(maHanhKhach);
    cout<<"Nhap ten hanh khach: "; f; gets(hoTen);
    cout<<"Nhap passpost: "; f; gets(passPost);
    cout<<"Nhap tien thu: "; cin>>thu;
}

void HanhKhach::Xuat()
{
    
    cout<<left<<setw(5)<<char(186); cout<<char(195); // Khong can care
    Show(197); cout<<setw(5)<<char(180)<<char(186)<<endl; // Khong can care
    cout<<left<<setw(5)<<char(186); // Khong can care
    cout<<setw(3)<<char(179); // Khong can care
    // =============================================================
    cout<<setw(15)<<maHanhKhach<<setw(3)<<char(179)<<setw(20)<<hoTen;
    cout<<setw(3)<<char(179)<<setw(14)<<passPost<<setw(3)<<char(179)<<setw(10)<<thu;
    // =============================================================================
    cout<<setw(5)<<char(179)<<char(186)<<endl; // Khong can care
}

class ChuyenBay
{
private:
    char maCB[15];
    char diemKH[20];
    char thoiGianDen[10];
public:
    void Nhap();
    void Xuat();
};

void ChuyenBay::Nhap()
{
    cout<<"Nhap ma chuyen bay: "; f; gets(maCB);
    cout<<"Nhap diem khoi hanh: "; f; gets(diemKH);
    cout<<"Nhap thoi gian toi: "; f; gets(thoiGianDen);
}

void ChuyenBay::Xuat()
{
    cout<<left<<setw(5)<<char(186); // Khong can care
    // ============================================================================================================
    cout<<"Ma chuyen bay: "<<setw(15)<<maCB<<"Khoi hanh tu: "<<setw(14)<<diemKH<<"Toi luc: "<<setw(9)<<thoiGianDen;
    // ============================================================================================================
    cout<<char(186)<<endl; // Khong can care
}

class Phieu
{
private:
    char maPhieu[15];
    char ngayLap[15];
    NguoiLap x;
    ChuyenBay y;
    HanhKhach *hk;
    int n;
    friend void SuaTen(Phieu A);
    friend void SapXep(Phieu A);
    friend void Xoa(Phieu &A);
public:
    void Nhap();
    void Xuat();
};

void Phieu::Nhap()
{
    cout<<"Nhap ma phieu: "; f; gets(maPhieu);
    cout<<"Nhap ngay lap: "; f; gets(ngayLap);
    x.Nhap();
    y.Nhap();
    cout<<"Nhap so hanh khach: "; cin>>n;
    hk = new HanhKhach[n];
    for(int i = 0; i < n; ++ i)
    {
        cout<<"== Nhap thong tin hanh khach thu "<< i + 1<<":"<<endl;
        hk[i].Nhap();
    }
}

void Show(int a) // Khong can care
{
    Set(196, 17); cout<<char(a); Set(196, 22); cout<<char(a); Set(196, 16); cout<<char(a); Set(196, 12); // Khong can care
}

void ShowTren() // Khong can care
{
    cout<<left<<setw(5)<<char(186); cout<<char(218);
    Show(194); cout<<setw(5)<<char(191)<<char(186)<<endl;
    cout<<left<<setw(5)<<char(186);
}

void ShowDuoi() // Khong can care
{
    cout<<left<<setw(5)<<char(186); cout<<char(192);
    Show(193); cout<<setw(5)<<char(217)<<char(186)<<endl;
}

void Phieu::Xuat()
{
    cout<<char(201) ; Set(205, 80); cout<<char(187)<<endl; // Khong can care
    cout<<left<<setw(5)<<char(186); // Khong can care
    // =======================
    cout<<"CHARLES DE GAULLE";
    // =======================
    cout<<right<<setw(80 - 20)<<char(186)<<endl; cout<<char(186); // Khong can care
    // ========================================
    cout<<setw(30)<<""<<"THONG TIN CHUYEN BAY";
    // ========================================
    cout<<right<<setw(80 - 49)<<char(186)<<endl; // Khong can care
    cout<<left<<setw(5)<<char(186); // Khong can care
    // ===================================================================
    cout<<"Ma phieu: "<<setw(20)<<maPhieu<<"Ngay lap: "<<setw(36)<<ngayLap; 
    // ===================================================================
    cout<<char(186)<<endl; // Khong can care
    // ======
    x.Xuat();
    y.Xuat();
    // ======
    ShowTren(); // Khong can care
    // ====================================================================
    cout<<setw(3)<<char(179)<<setw(15)<<"Ma hanh khach"<<setw(3)<<char(179);
    cout<<setw(20)<<"Ho ten"<<setw(3)<<char(179)<<setw(14)<<"Passposs"<<setw(3)<<char(179)<<setw(10)<<"Thu";
    // =====================================================================================================
    cout<<setw(5)<<char(179)<<char(186)<<endl; // Khong can care
    // ===========
    float Sum = 0;
    for(int i = 0; i < n; ++ i)
        hk[i].Xuat(), Sum += hk[i].thu;

    ShowDuoi(); // Khong can care

    cout<<left<<setw(5)<<char(186); cout<<char(218); // Khong can care
    Show(196); cout<<setw(5)<<char(191)<<char(186)<<endl; // Khong can care
    cout<<left<<setw(5)<<char(186)<<char(179); // Khong can care
    // ==============================================================
    cout<<right<<setw(60)<<"Tong so tien thu: "<<left<<setw(10)<<Sum;
    // ==============================================================
    cout<<setw(5)<<char(179)<<char(186)<<endl; // Khong can care
    cout<<left<<setw(5)<<char(186); cout<<char(192); // Khong can care
    Show(196); cout<<setw(5)<<char(217)<<char(186)<<endl; // Khong can care
    // =============================================================================================
    cout<<left<<setw(21)<<char(186)<<setw(30)<<"TRUONG PHONG"<<setw(30)<<"THU NGAN"<<char(186)<<endl;
    // =============================================================================================
    cout<<char(200); // Khong can care
    Set(205, 80); cout<<char(188)<<endl; // Khong can care
}

void SuaTen(Phieu A)
{
    for(int i = 0; i < A.n; ++ i)
    {
        if(strcmpi(A.hk[i].maHanhKhach, "K005") == 0)
            strcpy(A.hk[i].hoTen, "Le Thi Hai");
    }
}

void SapXep(Phieu A)
{
    for(int i = 0; i < A.n - 1; ++ i)
    {
        for(int j = i + 1; j < A.n; ++ j)
            if(A.hk[i].thu < A.hk[j].thu)
                swap(A.hk[i], A.hk[j]);
    }
}

void Xoa(Phieu &A)
{
    for(int i = 0; i < A.n; ++ i)
        if(A.hk[i].thu < 5000)
        {
            A.n = i;
            break;
        }
    A.hk = (HanhKhach *) realloc(A.hk, A.n * sizeof(HanhKhach));
}
int main()
{
    Phieu A;
    A.Nhap();
    cout<<endl<<"========== Phieu sau khi nhap =========="<<endl;
    A.Xuat();
    SuaTen(A);
    cout<<endl<<"========== Phieu sau khi sua ten =========="<<endl;
    A.Xuat();
    SapXep(A);
    cout<<endl<<"========== Phieu sau khi sap xep =========="<<endl;
    A.Xuat();
    Xoa(A);
    cout<<endl<<"========== Phieu sau khi xoa =========="<<endl;
    A.Xuat();
}
