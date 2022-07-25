#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    char ten[20], gioiTinh[10];
    int tuoi;
public:
    Student(); 
    Student(const char* name, int age, const char* gender); 
    ~Student();
    void Xuat();
};


Student::Student() 
{
    ten[0] = '\0'; 
    tuoi = 0; 
    gioiTinh[0] = '\0'; 
}

Student::Student(const char* name, int age, const char* gender) 
{
    strcpy(ten, name); 
    strcpy(gioiTinh, gender); 
    tuoi = age; 
}

Student::~Student()
{
    
}

void Student::Xuat()
{
    cout<<"Ten: "<<ten<<"\t\tTuoi: "<<tuoi<<"\t\tGioi Tinh: "<<gioiTinh<<endl;
}

int main()
{
    Student B; 
    B.Xuat();
    Student A ("Nguyen Van A", 19, "Nam"); 
    A.Xuat();
}

