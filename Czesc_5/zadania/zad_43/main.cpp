#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int a[7];
 int i;
int suma = 0;
int srednia;
 for( i=0;i<=6;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; 
 suma = suma+a[i];
 }
 
 srednia = suma/7;
 
  cout<<"Suma wszystkich liczb w przedziale wynosi:"<<suma<<endl;
  cout<<"Srednia liczb w przedziale wynosi:"<<srednia<<endl;
 

 system("PAUSE");
 return 0;
}

