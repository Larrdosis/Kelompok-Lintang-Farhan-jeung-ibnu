#include <iostream>
using namespace std;

int main () {
	int n, i, jumlah = 0, rata;
	i = 1;
	
	cout << "Masukan banyak nilai :  ";
	cin >> n ;
	
	// perulangan //
	
	while(i<n){
		cout << i*7 <<" + ";
		jumlah = jumlah+(i*7);
		i++;
	}

	jumlah = jumlah+(i*7);
	cout << i*7 << " ";
	cout << " = " << jumlah << endl;
	
	rata = jumlah/n;
	cout << "Rata-Rata :  " << jumlah << "/" << n << " = " << rata;
	
}

