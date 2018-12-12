#include <iostream>
using namespace std;

int main(){
	int n, i;
	float x, total, rata;
	
	cout << "=====================================================" << endl << endl;
	cout << "Program Menghitung Rata-Rata Terhadap Nilai Mahasiswa" << endl << endl;
	cout << "=====================================================" << endl << endl;
	cout << "Masukkan jumlah nilai yang akan anda masukkan : ";
	cin >> n;
	cout << endl;
	
	i = 1;
	total = 0;
	
	while (i<=n){
		cout << "Nilai siswa ke- " << i << "= ";
		cin >> x;
		if (x == -1){
			break;
		}
	total = total + x;
	i++;
	}
	cout << endl;
	cout << "Total keseluruhan yatiu " << total << endl;
	rata = total/(i-1);
	cout << "Rata-rata nilai mahasiswa adalah " << rata << endl;
	cin.get();
return 0;
	
}