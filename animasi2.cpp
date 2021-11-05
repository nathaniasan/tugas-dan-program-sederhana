#include <iostream>
#include <windows.h>
using namespace std;



void animasi(char kata [1000]){
		for(int i=0 ; i <= strlen(kata);i++) {
		cout << kata[i];
		Sleep(3000);	
			
	}
}	

int main(){
	
	
	
	animasi("KAMUANAKBAIK");
	
	
}

//	cout << "kucing";
//	Sleep(5000);
//	system("cls");
//
//	cout << "kucing...";
//	Sleep(1000);
//	system("cls");	
//	
//	
//	cout << "kucing...........";
//	Sleep(5000);
//	system("cls");
//


