#include <iostream>
using namespace std;

void luas(){
	cout<<"Fungsi tanpa parameter"<<endl;
}

void luas(int s){
	cout<<"Luas persegi = " <<s*s<<endl;
}

void luas(int a, float t){
	cout << "Luas segitiga = "<<0.5 * a * t<<endl;
}

int main(){
	luas();
	luas(5);
	luas(3, 9.0);
	
	return 0;
}
