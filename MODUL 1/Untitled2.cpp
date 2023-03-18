#include <iostream>
using namespace std;

int main(){
	char input;
	cout<<"Masukkan abjad = ";
	cin>>input;
	int word = -input + 219;
	cout<<"Hasil Perubahan = "<<(char)word<<endl;
	return 0;
}

