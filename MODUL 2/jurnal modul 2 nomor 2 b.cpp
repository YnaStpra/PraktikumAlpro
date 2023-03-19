#include <iostream>
using namespace std;

int main(){
    int x, y, n, q;
    x= 1;
    y= 2;
    n= 15;
    q= 0;
    
    cout<<"Nilai Akhir: "<<x<<endl;
    cout<<"Selisih: "<<y<<endl;
    cout<<"Banyak Barisan: "<<n<<endl;
    cout<<endl;

    cout<<"Jumlah Bilangan Prima\t: ";
    for (int a=y*n;a>y;a--)
    {
        int check = 0;
        for (int b = 1; b<=a;b++)
        {
        if (a%b == 0) check += 1;
        }
        if (check == 2)
        {
            q += a;
            cout<<a<<" ";
        }
    }
    cout<<endl;
    cout<< "\tJumlah\t: "<<q<<endl;
    
return 0;
}
