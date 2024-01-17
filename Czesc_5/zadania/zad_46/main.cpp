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
	

cout<<"liczba wyrazów w ci¹gu które s¹ wiêksze od 0 wynosi: "<<wieksze<<endl;
cout<<"liczba wyrazów w ci¹gu które s¹ równe 0 wynosi: "<<rowne<<endl;
cout<<"liczba wyrazów w ci¹gu które s¹ mniejsze od 0 wynosi: "<<mniejsze<<endl;


 
 

 system("PAUSE");
 return 0;
}

