#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int a[7];
 int i;
 int wieksze = 0, rowne = 0, mniejsze = 0;
system("chcp 1250");
system("cls");


 for( i=0;i<8;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; 
 
 if(a[i]>0){
		wieksze++;
	}else if(a[i]<0){
		mniejsze++;
	}else{
		rowne++;
	}
 }
	

cout<<"liczba wyraz�w w ci�gu kt�re s� wi�ksze od 0 wynosi: "<<wieksze<<endl;
cout<<"liczba wyraz�w w ci�gu kt�re s� r�wne 0 wynosi: "<<rowne<<endl;
cout<<"liczba wyraz�w w ci�gu kt�re s� mniejsze od 0 wynosi: "<<mniejsze<<endl;


 
 

 system("PAUSE");
 return 0;
}

