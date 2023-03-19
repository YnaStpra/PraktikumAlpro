#include <iostream>
using namespace std;

int main(int argc, char** argv){
    string nama;
    int tgllahir, blnlahir, thnlahir, tglskrng, blnskrng, thnskrng;
    cout<<"Masukkan Nama Anda: ";
    cin>>nama;
    cout<<endl;
    cout<<"IDENTITAS ---> "<<nama<<endl<<endl;
    
    cout<<"TANGGAL LAHIR"<<endl;
    cout<<"Tanggal = "; cin>>tgllahir;
    cout<<"Bulan = "; cin>>blnlahir;
    cout<<"Tahun = "; cin>>thnlahir;
    cout<<endl;
    cout<<"TANGGAL SAAT INI"<<endl;
    cout<<"Tanggal = "; cin>>tglskrng;
    cout<<"Bulan = "; cin>>blnskrng;
    cout<<"Tahun = "; cin>>thnskrng;
    cout<<endl;
    cout<<"UMUR ANDA SAAT INI"<<endl;
    
    if(tglskrng<tgllahir){
        tglskrng=tgllahir+30, blnskrng=blnskrng-1;
    }
    
    if(blnskrng<blnlahir){
        blnskrng=blnskrng+12, thnskrng=thnskrng-1;
    }
    
    cout<<thnskrng-thnlahir<<" Tahun "<<blnskrng-blnlahir<<" Bulan "<<tglskrng-tgllahir<<" Hari";
    
    return 0;
}