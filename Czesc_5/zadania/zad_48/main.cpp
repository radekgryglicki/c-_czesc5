#include <iostream>

using namespace std;

int main()
{

int a[5][2];
float b[5];

	system("chcp 1250");


	for(int i=0;i < 5;i++)
	{
		for(int j=0;j < 2;j++){
			cout<<"Podaj element a ["<<i<<"]"<<"["<<j<<"]"<<" = ";
			cin>>a[i][j];
		}
	}
	
	float wynik = 0;
	
	for(int i=0;i < 5;i++)
	{
		for(int j=0;j < 2;j++){
			cout<<a[i][j]<<" ";
			wynik = wynik + a[i][j] ;  // liczy wynik
		}
			wynik = wynik / 2;  // srednia arytmetyczna
			b[i] = wynik;  // wsadza do tablicy b[i], ktora ma 5 elementów wartoœci, z wczeœniej obliczonego wyniku
			cout<<" œrednia w wierszu "<<i<<" macierzy wynosi "<<wynik<<endl;
			wynik = 0; // zeruje wynik
	}
	
	
	cout<<"tablica srednich wyglada nastepujaco: A[";  // tutaj zapamietuje w innej tablicy œrednie i potem je wypisuje
	for(int i=0;i < 5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"]"<<endl;
	
	float min,max;   			// obliczanie œredniej i maksymalnej wartoœci
	int index_min, index_max;  // index min, max to s¹ indeksy A[indeks], tak aby program wiedzia³, który element z tablicy jest na jakim miejscu
	for(int i=0;i < 5;i++)
	{
		if(i==0){				// jesli i jest równe 0, to wtedy wartosc min i max, daje indeks zerowy (w przypadku gdy wartosc min i max  
			min = b[0];			//znajdywa³aby siê na 1 miejscu w tablicy
			max = b[0];
			index_min = i;
			index_max = i;
		}else{
			if(b[i] < min){			
				min = b[i];
				index_min = i;
			}else if(b[i] > max){
				max = b[i];
				index_max = i;
			}
		}
	}
	
	cout<<"max: A["<<index_max<<"]"<<" = "<<max<<endl; // wypisanie np. max = A[2] = 25.5
	cout<<"min: A["<<index_min<<"]"<<" = "<<min<<endl; // wypisanie np. min = A[1] = 5
}
	
