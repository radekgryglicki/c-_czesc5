#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

 int i;
 int n;
 int znak =0;
 
	system("chcp 1250");
	system("cls");
	
	do{
	cout<<"Pami�taj, �e ilo�� danych element�w tablicy a[] nie przekracza�a 10!"<<endl;
	cout<<"Podaj ilo�� element�w tablicy a:"<<endl;
	cout<<"n= ";
	cin>>n;
	}while(n>10);

 for( i=0;i< n;i++)
 {
	int a[i];
	cout<<"podaj A["<<i<<"]=";
	cin>>a[i]; 
	
	if(a[i]<0){
		znak++;
	}
 }
 cout<<"Ilosc zmian znakow wynosi:"<<znak<<endl;
	
 	
 	
 	


 


 
 

 system("PAUSE");
 return 0;
}

