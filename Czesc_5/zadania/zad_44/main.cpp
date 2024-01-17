#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int a[5];
 int i;
int iloczyn;


 for( i=0;i<=4;i++)
 {
 cout<<"podaj A["<<i<<"]=";
 cin>>a[i]; 
 iloczyn = iloczyn * a[i];
 }
cout<<"iloczyn liczb wynosi:"<<iloczyn<<endl; 

 
 

 system("PAUSE");
 return 0;
}

