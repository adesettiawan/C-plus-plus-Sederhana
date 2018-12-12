#include <iostream.h>
using namespace std;

int main (){
	int a, b, c, i, n, jumlah;
	jumlah = 0;
	
	cout << "==================================================== " << endl << endl;
	cout << "Menghitung Jumlah Bilangan Deret Menggunakan Suku n  " << endl << endl;
	cout << "==================================================== " << endl << endl;
	
	cout << "Masukkan angka awal : ";
	cin >> a;
	cout << "Masukkan selisih angka : ";
	cin >> b;
	cout << "Masukkan jumlah sampai deret ke- n : ";
	cin >> n;
	
	cout << "Deret ke- " << n << ": " << endl;
	cout << a << "+ ";
	for (i = 1; i < n-1; i++){
		c =a + b;
		a = c;
		cout << c << "+ ";
		jumlah = jumlah + c;
	}
	cout << endl;
	cout << "Jumlah deret ke- " << n << " : " << jumlah << endl;
	getchar();
return 0;
}