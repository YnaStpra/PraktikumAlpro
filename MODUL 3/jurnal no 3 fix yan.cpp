#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int x, jumlah_orang; //x = universe 
	char huruf;
	cout << "masukan jumlah universe : ";
	cin >> x;
	cout << "jumlah orang tiap universe : ";
	cin >> jumlah_orang;
	cout << "masukan huruf : "; 
	cin >> huruf;
	string matriks[x][jumlah_orang];
	cout<<endl;
	 
	for (int i = 0; i < x; i++){
		cout << "universe " << i + 1 << endl;
		for (int j = 0; j < jumlah_orang; j++) {
			cout << "orang ke-" << j + 1 << " : ";
			getline(cin >> ws, matriks[i][j]);
		}
	}
	cout << "\n";
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < jumlah_orang; j++) {
			for (int k = j + 1; k < jumlah_orang; k++) {
				if (matriks[i][j] == matriks[i][k]) {
 					matriks[i][k] = "";
				}
			}
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < jumlah_orang; j++) {
			for (int k = 0; k < matriks[i][j].length(); k++) {
				if (huruf >= 65 && huruf <= 90) {
					if (matriks[i][j][k] == huruf || matriks[i][j][k] == huruf + 32)matriks[i][j][k] = '\0';
				}
				if (huruf >= 97 && huruf <= 122) {
					if (matriks[i][j][k] == huruf || matriks[i][j][k] == huruf - 32)matriks[i][j][k] = '\0';
				}
			}
		}
	}
	for (int i = 0; i < x; i++) {
		cout << "universe " << i + 1 << endl;
		for (int j = 0; j < jumlah_orang; j++) {
			if (matriks[i][j] != "") {
			cout << matriks[i][j] << endl;
			}
		}
	}
}