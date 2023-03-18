#include <iostream>
using namespace std;

int main(){
	cout<<"============="<<endl;
	char abjad;
	cout<<"Masukkan abjad = "<<endl;
	cin>>abjad;
	int word = -abjad + 219;
	cout<<"Hasil Perubahan = "<<(char)word<<endl;
	return 0;
}

