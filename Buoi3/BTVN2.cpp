#include <bits/stdc++.h>

using namespace std;

class ARRAY 
{
	int n;
	int *VALUE;
public:
	ARRAY();
	ARRAY(int a);
	~ARRAY();
	void NHAP();
	void XUAT();	
};
ARRAY::ARRAY()
{
	n = 0;	
	VALUE=NULL;
}


ARRAY::ARRAY(int a)
{
	n = a;
	VALUE = new int[n];

	for(int i = 0; i < n; i++){
		VALUE[i] = 0;
	}
}	
ARRAY::~ARRAY()
{
	n = 0;
	delete [] VALUE;
}
void ARRAY::NHAP()
{	
	cout << "ENTER TOTAL NUMBER OF ELEMENTS: ";
	cin >> n;
	cout << "INPUT AN ARRAY: \n";
	VALUE = new int[n];
	for(int i = 0; i < n; i++){
		cout << "VALUE[" << i << "] = ";
		cin >> VALUE[i];		
	}
}

void ARRAY::XUAT()	
{
	for(int i = 0; i < n; i++){
		cout << VALUE[i] << " ";	
	}	
	cout << "\n";
}

int main() {
	ARRAY a(5);
	cout<<endl<<"Mang vua khoi tao: ";
	a.XUAT();
	a.NHAP();
	cout<<endl<<"Xuat mang: ";
	a.XUAT();
	
	return 0;	
}
