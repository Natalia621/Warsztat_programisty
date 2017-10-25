#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int size=50;
	int tab[size];

	for(int i=0; i<size; i++){
	
	tab[i]=(rand()%100);
	}

	int max=tab[0], min=tab[0];
	for(int j=1; j<size; j++){
		if(tab[j]>max) max=tab[j];
		else if(tab[j]<min) min=tab[j];
	}
	
	cout << max << endl;
	cout << min << endl;
}

