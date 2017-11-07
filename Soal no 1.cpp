#include <iostream>

using namespace std;

int main (){
	int X,Y,Z;
		cout<<" Masukkan X\t\t = "; cin>>X;
		cout<<" Masukkan Y\t\t = "; cin>>Y;
		if (X<Y){
			Z=Y-X;
		}
		else {
			Z=X-Y;
		}
		cout<< " Hasil Pengurangan \t = " << Z;
}
