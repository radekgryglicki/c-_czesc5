#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	system("chcp 1250");
	int a[3][3];

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
		cout<<"Podaj element tablicy a["<<i<<"] "<<"["<<j<<"] = ";
		cin>>a[i][j];
		}
	}
	cout<<endl;
	
	
	cout<<"Pe³na macierz ze skopiowanymi elementami wygl¹da nastêpuj¹co:"<<endl;

	// 1 petla
	for(int i=0; i < 1; i++){
		for(int j=0; j < 3; j++){
		cout<<a[i][j]<<" ";
		}
	}
	
 	for(int i=0; i < 1; i++){
		for(int j=0; j < 2; j++){
		cout<<a[i][j]<<" ";
		}
	}
 	
 	cout<<endl;
 	
	// 2 petla

	for(int i=1; i < 2; i++){
		for(int j=0; j < 3; j++){
		cout<<a[i][j]<<" ";
		}
	}
	
 	for(int i=1; i < 2; i++){
		for(int j=0; j < 2; j++){
		cout<<a[i][j]<<" ";
		}
	}
 
	cout<<endl;
 	
	// 3 petla

	for(int i=2; i < 3; i++){
		for(int j=0; j < 3; j++){
		cout<<a[i][j]<<" ";
		}
	}
	
 	for(int i=2; i < 3; i++){
		for(int j=0; j < 2; j++){
		cout<<a[i][j]<<" ";
		}
	}
	
	cout<<endl;
	
	
	int l_ob1 = (a[0][0] * a[1][1] * a[2][2]);
	
	int l_ob2 = (a[0][1] * a[1][2] * a[2][0]);
	
	int l_ob3 = (a[0][2] * a[1][0] * a[2][1]);
	
	
	int r_ob1 = (a[0][2] * a[1][1] * a[2][0]);
	
	int r_ob2 = (a[0][0] * a[1][2] * a[2][1]);
	
	int r_ob3 = (a[0][1] * a[1][0] * a[2][2]);
	
	
	
	int wynik = 
	((a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1])) 
	- 
	((a[0][2] * a[1][1] * a[2][0]) + (a[0][0] * a[1][2] * a[2][1]) + (a[0][1] * a[1][0] * a[2][2]));
	
	cout<<"Wyznacznik tablicy a = ("<<l_ob1<<"+"<<l_ob2<<"+"<<l_ob3<<")-("<<r_ob1<<"+"<<r_ob2<<"+"<<r_ob3<<")="<<wynik;
 
 	cout<<endl;
 

 system("PAUSE");
 return 0;
}

