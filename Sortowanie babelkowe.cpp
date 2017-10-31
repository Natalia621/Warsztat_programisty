#include <iostream>

using namespace std;
int main()
{
	int i, j, t;
	int a[50];
	for(i=0; i<49; i++){
		for(j=0; j<49; j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
}
