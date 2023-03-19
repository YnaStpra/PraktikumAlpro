#include <iostream>
using namespace std;

int main(){
    int x,y,n,q;
    x = 1;
    y = 2;
    n = 15;
    q = 0;
    cout<<"Nilai Akhir: "<<x<<endl;
    cout<<"Nilai Selisih: "<<y<<endl;
    cout<<"Banyak Barisan: "<<n<<endl;
    cout<<endl;
    
    cout<<"Seluruh Bilangan Aritmatika\t: ";
    for(int a = y*n;a>0;a--)
    { 
        a-=1;
        cout<<a<<" ";
        q += a;       
    }   
    cout<<endl;
    cout<<"\tJumlah\t: "<<q;
    
return 0;
}
