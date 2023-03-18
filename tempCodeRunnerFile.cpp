#include <iostream>
using namespace std;
int pilih;
string user, pw;
int menu_login(){
    menulog:
    cout<<endl;
    cout<<"=====Menu Login====="<<endl;
    cout<<"1. Masuk" <<endl;
    cout<<"2. Daftar" <<endl;
    cout<<"3. Keluar" <<endl;
    cin>>pilih;
    if (pilih == 1){
        cout << "Username Anda : ";cin >> user;
        cout << "Password Anda : ";cin >> pw;
        if (pw == "123"){
            cout << "Username atau Password Salah atau Tidak Terdaftar" << endl;
            goto menulog;
        }
    }
    else if (pilih == 2){
        cout << "Selamat Datang di Menu Daftar!" << endl;
        cout << "Username Anda : ";cin >> user;
        cout << "Password Anda : ";cin >> pw;
        cout << "Terima Kasih, Silahkan Login" << endl;
    }
}
int main(){
    menu_login();
}