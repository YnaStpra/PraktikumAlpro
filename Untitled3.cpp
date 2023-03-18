#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=28;i++){
	
	if (i!=0 && i%5==0 && i%3==0){
		cout<<"fizz buzz"<<endl;
	}
	else if(i!=0 && i%3==0){
		cout<<"fizz"<<endl;
	}
	else if(i!=0 && i%5==0){
		cout<<"buzz"<<endl;
	}
	else {
		cout<<i<<endl;
	}
}
	return 0;

}