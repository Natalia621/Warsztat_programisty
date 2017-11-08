#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int size=8;
	int tab[size]={3,2,5,7,6,1,4,8};

	int /*max=tab[0],*/ min=tab[0];
	for(int j=1; j<size; j++){
		/*if(tab[j]>max) max=tab[j]; 
		else*/ if(tab[j]<min) min=tab[j];
	}
	
	//cout << max << endl;
	cout << min << endl;
}
