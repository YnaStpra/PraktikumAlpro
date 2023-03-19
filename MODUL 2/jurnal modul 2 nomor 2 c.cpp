#include <iostream>
using namespace std;

int main(){
    int x,y,n,q;
    x = 1;
    y = 2;
    n = 15;
    q = 0;
    
    cout<<"Nilai Akhir: "<<x<<endl;
    cout<<"Selisih: "<<y<<endl;
    cout<<"Banyak Barisan: "<<n<<endl;
    cout<<endl;    
int a,b1,b2;
  b1 = 21; 
  b2 = 13;
  int g = b1 - b2;
  int c;
  cout <<"Bilangan fibonacci\t: "<<b1<<", "<< b2;
  for (a=b1;a>=n;a--){
    cout << ", " << g;
    b1 = b2;
    b2 = g;
    g = b1 - b2;
        c+=y;
        q+=c;
  }
    cout<<endl;
    cout<<"\tJumlah\t: "<<q-y;
    cout<<endl;
    
    return 0;
}
