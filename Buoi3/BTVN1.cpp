#include<iostream>
#include<string.h>
using namespace std;
class School{
	private:
		char Name[30];
		char Date[30];
	public: 
		
		friend class Faculty;
};
class Faculty{
	private:
		char Name[30];
		char Date[30];
	public: 
		void Input();
		void Output();
		School x;
};
class Student{
	private:
		char Class[30];
		char Score[30];
		int n;
	public:
		Faculty	y;
		void Input();
		void Output();
		Student();
};

Student::Student(){
	strcpy(Class,"");
	strcpy(Score,"");
}
void Faculty::Input(){
	cout<<"\nName School : "; fflush(stdin); gets(x.Name);
	cout<<"Date School: "; fflush(stdin); gets(x.Date);
	cout<<"Name Faculty: "; fflush(stdin); gets(Name);
	cout<<"Date Faculty: "; fflush(stdin); gets(Date);
}
void Faculty::Output(){
	cout<<"School: "<<"Name: "<<x.Name<<" - "<<"Date: "<<x.Date<<endl;
	cout<<"Fuculty: "<<"Name: "<<Name<<" - "<<"Date: "<<Date<<endl;
}
void Student::Input(){
	y.Input();
	cout<<"Class: "; fflush(stdin); gets(Class);
	cout<<"Score: "; fflush(stdin); gets(Score);
}
void Student::Output(){
	y.Output();
	cout<<" Class: "<<Class<<endl;
	cout<<" Score: "<<Score<<endl;
}

int main(){
	int n;
	cout<<"How many student: "; cin>>n;
	Student *a=new Student[n] ;
	for(int i=0; i<n; i++){
		cout<<"====Student: "<<i+1;
		a[i].Input();
	}
	for(int i=0; i<n; i++){
		cout<<"----Student--- "<<i+1<<endl;
		a[i].Output();
	}
}

