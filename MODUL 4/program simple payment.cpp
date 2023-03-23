#include <iostream>
using namespace std;

int saldo=1000000 , listrik, air, belanja;
string usrname, passwrd, name, kunci, newname, newpass;
void menuUtama(int pilih){
	switch(pilih){
		case 1 :
		cout<<"Saldo Anda Adalah = "<<saldo<<endl;
		cout<<endl;
		break;
		case 2 :
		int a, b;
		cout<<"1. Lanjutkan TopUp"<<endl;
		cout<<"2. Kembali"<<endl;
		cout<<"Pilih = ";cin>>a;
		cout<<endl;
		switch(a){
			case 1 :
			cout<<"Masukkan Jumlah Saldo : ";cin>>b;saldo=saldo+b;
			cout<<"Saldo Anda Sekarang Adalah = "<<saldo<<endl;cout<<endl;
			break;
			case 2 :
			break;
		}
	break;
	case 3 :
	int c;
	cout<<"1. Lanjutkan Transfer"<<endl;
	cout<<"2. Kembali"<<endl;
	cout<<"Pilih = ";cin>>c;
	cout<<endl;
	switch(c){
		case 1 :
		int d, e;
		cout<<"Masukkan No. ID Penerima : ";cin>>d;
		cout<<"Masukkan Nominal : ";cin>>e;
		cout<<"Transfer berhasil"<<endl;
		cout<<"No. ID Penerima : "<<d<<endl;
		cout<<"Nominal : "<<e<<endl;
		saldo=saldo-e;
		cout<<"Sisa Saldo Anda Adalah = "<<saldo<<endl;
		cout<<endl;
		break;
		case 2 :
		break;
	}
	break;
	case 4 :
	int f;
	char yes;
	cout<<"1. Listrik"<<endl;
	cout<<"2. Air"<<endl;
	cout<<"3. Belanja Online"<<endl;
	cout<<"4. Kembali"<<endl;
	cout<<"Pilih : ";cin>>f;
	cout<<endl;
	switch(f){
		case 1 :
		int g;
		cout<<"Masukkan Nomor Pelanggan : ";cin>>g;
		cout<<"Nomor Pelanggan Anda : "<<g<<endl;
		cout<<"Tagihan Listrik Anda : ";cin>>listrik;
		cout<<"Lanjutkan Pembayaran ? y/n : ";cin>>yes;
		
		if(yes=='y'){
			cout<<"Pembayaran Berhasil"<<endl;
			saldo=saldo-listrik;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		else if(yes=='n'){
			cout<<"Pembayaran Gagal"<<endl;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		case 2 :
		int h;
		cout<<"Masukkan Nomor Pelanggan : ";cin>>h;
		cout<<"Nomor Pelanggan Anda : "<<h<<endl;
		cout<<"Tagihan Air Anda : ";cin>>air;
		cout<<"Lanjutkan Pembayaran ? y/n : ";cin>>yes;
		
		if(yes=='y'){
			cout<<"Pembayaran Berhasil"<<endl;
			saldo=saldo-air;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		else if(yes=='n'){
			cout<<"Pembayaran Gagal"<<endl;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		case 3 :
		int i;
		cout<<"Masukkan Nomor Pelanggan : ";cin>>i;
		cout<<"Nomor Pelanggan Anda : "<<i<<endl;
		cout<<"Tagihan Belanja Online Anda : ";cin>>belanja;
		cout<<"Lanjutkan Pembayaran ? y/n : ";cin>>yes;

		if(yes=='y'){
			cout<<"Pembayaran Berhasil"<<endl;
			saldo=saldo-belanja;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		else if(yes=='n'){
			cout<<"Pembayaran Gagal"<<endl;
			cout<<"Sisa Saldo Anda : "<<saldo<<endl;
			cout<<endl;
			break;
		}
		case 4 :
		break;

	}
	break;
	case 5 :
	int j;
	cout<<"1. Cek Profil"<<endl;
	cout<<"2. Ubah Profil"<<endl;
	cout<<"3. Kembali"<<endl;
	cout<<"Pilih = ";cin>>j;
	cout<<endl;
	switch(j){
		case 1 :
		int l;
		cout<<"1. Cek Username"<<endl;
		cout<<"2. Cek Password"<<endl;
		cout<<"3. Kembali"<<endl;
		cout<<"pilih = ";cin>>l;
		cout<<endl;
		switch(l){
			case 1 :
			cout<<"Username Anda : "<<usrname<<endl;
			cout<<endl;
			break;
			case 2 :
			cout<<"Password Anda : "<<passwrd<<endl;
			cout<<endl;
			case 3 :
			break;
		}
		break;
		case 2 :
		int m;
		cout<<"1. Ubah Username"<<endl;
		cout<<"2. Ubah Password"<<endl;
		cout<<"3. Kembali"<<endl;
		cout<<"Pilih = ";cin>>m;
		cout<<endl;
		switch(m){
			case 1:
			char pil;
			cout<<"Masukan Username Baru : ";cin>>newname;
			cout<<"Lanjutkan Perubahan ? (y/n) : ";cin>>pil;
			switch(pil){
				case'y': usrname = newname;
				break;
				case'n':
				break;
			}
			break;
			case 2:
			cout<<"Masukan Password Baru : ";cin>>newpass;
			cout<<"Lanjutkan Perubahan ? (y/n) : ";cin>>pil;
			switch(pil){
				case'y': passwrd = newpass;
				break;
				case'n':
				break;
				break;
				case 3:
				break;
			}
		}		
		break;
		case 3 :
		break;
	}
	break;
	case 6 :
	break;
	}
}

int main(){
	int pilih, menu;
	cout<<"===Simple Payment==="<<endl;
	menu :
	cout<<"1. Masuk"<<endl;
	cout<<"2. Daftar"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Pilih = ";cin>>menu;
	cout<<endl;
	switch(menu){
		case 1 :
		cout<<"Username Anda : ";cin>>name;
		cout<<"Password Anda : ";cin>>kunci;
			if(name==usrname && kunci==passwrd){
				cout<<"Login Berhasil, Pilih Menu Dibawah Ini"<<endl;
				cout<<endl;
				beranda :
				cout<<"1. Cek Saldo"<<endl;
				cout<<"2. Top Up Saldo"<<endl;
				cout<<"3. Transfer"<<endl;
				cout<<"4. Pembayaran"<<endl;
				cout<<"5. Profil"<<endl;
				cout<<"6. Logout"<<endl;
				cout<<"Pilih = ";cin>>pilih;
				cout<<endl;
				menuUtama(pilih);
				if((0<pilih)&&(pilih<6)){
					goto beranda;
				}
				else{
				goto menu;
				}				
			}			
			else{
				cout<<"Username atau Password Salah atau Tidak Terdaftar"<<endl;
				cout<<endl;
				goto menu;
			}
			break;
			case 2 :
			cout<<"Selamat Datang di Menu Daftar"<<endl;
			cout<<"Username Anda : ";cin>>usrname;
			cout<<"Password Anda : ";cin>>passwrd;
			cout<<"Terima Kasih, Silahkan Login"<<endl;
			cout<<endl;
			goto menu;
			break;
			case 3 :
			cout<<endl;
			cout<<"Sampai Jumpa :)";
			break;
	}	
	return 0;
}