#include <iostream.h>
using namespace std;

int main(){
	int i, j;
	int n;
	cout << "=======================================================" << endl << endl;
	cout << "Program Membuat Bintang dengan Pola Segitiga siku-siku " << endl << endl;
	cout << "=======================================================" << endl << endl;
	cout << "Masukan jumlah baris : ";
	cin >> n;
	cout << endl;
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}

}