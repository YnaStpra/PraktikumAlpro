#include <iostream>
using namespace std;
int main()
{
	int dollar,yen,rupiah,rupee,sen,a,b,c,x;
	cout<<"Masukkan Nilai Uang (dalam sen) = ";
	cin>>x;
	
	dollar = x/280; 
	a = x - (dollar*280);
	yen = a/(280/7);
	b = x - (dollar*280) - (yen*280/7);
	rupiah = b/8;
	c = x - (dollar*280) - (yen*280/7) - (rupiah*8);
	rupee = c/(40/20);
	sen = x - (dollar*280) - (yen*280/7) - (rupiah*8) - (rupee*40/20);
	
	cout<<"Hasil Konversi = ";
	cout<<dollar<<" dollar "<<yen<<" yen "<<rupiah<<" rupiah "<<rupee<<" rupee "<<sen<<" sen "<<endl;
	
	return 0;
}