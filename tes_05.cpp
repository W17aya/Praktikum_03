#include <iostream>

using namespace std;

int main (){
	int tb,bb, hasil1 , hasil2 ;
	cout<<" Menghitung Badan Ideal"<<endl;
	cout<<" Input Tinggi Badan Anda = "; cin>>tb;
	cout<<" Input Berat Badan Anda  = "; cin>>bb;
	
	if (bb<(tb/2.5)){
		cout<<"Underweight"<<endl;
	}
	else if ((tb/2.5)<=bb<=(tb/2.3)){
		cout<<"Anda Normal"<<endl;
	}
	else if ((tb/2.3)<bb){
		cout<<"Overweight";
	}
	else{
		cout<<"Input tidak Valid!!!";
	}
}
