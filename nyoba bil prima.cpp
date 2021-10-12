#include <iostream>

using namespace std;

int main (){
	
	int b;
	
	cout << "Masukkan angka : "; cin >>b;
	for(int a = 2 ; a < b ; a++) {
		
		if(b%a==0) {
			cout << b << " bukan bilangan prima";
	return 0;
}
		else {
			cout << b << " adalah bilangan prima" ;
		}
		
		return 0;
}

}
