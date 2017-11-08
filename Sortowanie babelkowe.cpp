#include <iostream>

using namespace std;
int main()
{
	int a[8]={3,2,5,7,6,1,4,8};
	
	bool p=true;
	for(int i=0; i<7; i++){
		p=true;
		for(int j=0; j<7; j++){
			if(a[j]>a[j+1]){
				swap(a[i],a[i+1]);
				p=false;
			}
		}
		
		if(true==p){
			break;
		}
	}
}

