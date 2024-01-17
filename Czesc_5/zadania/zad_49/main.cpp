#include <iostream>

using namespace std;

int main()
{

int a[3][4];
int b;
int suma;
	
	system("chcp 1250");
	
for(int i = 0; i < 3;i++){
	for(int j = 0;j < 4;j++){
		cout<<"Podaj element a["<<i<<"] "<<"["<<j<<"] = ";
		cin>>a[i][j];
		suma = suma + a[i][j];
	}
}

for(int i=0; i < 3;i++){
	for(int j = 0;j < 4;j++){
		cout<<a[i][j]<<"\t";
		if(j==3){
			cout<<endl;
		}
	}
}
	cout<<"suma wszystkich elementow macierzy a = "<<suma<<endl;
	
	cout<<"Podaj liczbê przez któr¹ chcesz pomno¿yæ macierz:";
	cin>> b;
	
for(int i=0; i < 3;i++){
	for(int j = 0;j < 4;j++){
	cout<<a[i][j] * b<<"\t";
	if(j==3){
		cout<<endl;
	}
	}
}



}
	

