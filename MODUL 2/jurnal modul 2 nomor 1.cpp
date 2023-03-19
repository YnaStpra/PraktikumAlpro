#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a,b,c;
    a = 5;
    for(b = 0;b<a;b++){
    for(c = 0;c<a;c++){
        cout<<" "<<fabs(b-c);
    }
        cout<<endl;
    }
    
    
    return 0;
}
