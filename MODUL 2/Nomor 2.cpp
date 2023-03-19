#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,y,n,q;
	cout<<"Nilai Akhir : ";
	cin>>x;
	cout<<"Nilai Selisih : ";
	cin>>y;
	cout<<"Banyak Barisan : ";
	cin>>n;
	cout<<endl;
	
	cout<<"a. Bilangan Arimetika\t : ";
	q = 0;
	for (int i = y*n;i>x;i-=y){
		q = q+(i-1);
		cout<<(i-1)<<" ";
	}
	cout<<endl;
	cout<<"\tJumlah\t : "<<q<<endl;
	q = 0;
	cout<<"b. Bilangan Prima\t : ";
	for (int i = y*n,a=0;i > x;i -= y)
	{
		a = i-1;
		int check = 0;
		for(int b=1;b<=a;b++){
			if(a%b==0)
			check +=1;
		}
		if (check ==2){
			q +=a;
			cout<<a<<" ";
		}
	}
	cout<<endl;
	cout<<"\tJumlah\t : "<<q<<endl;
	q=0;
	cout<<"c. bilangan Fibonacci\t : ";
	for (int i=y*n,a =0;i>=(x-1);i-=y){
		a = abs(i-1);
		for(int sum = 0,curr = x,last = 0;sum<=(y*n);){
			sum=curr+last;
			last = curr;
			curr = sum;
			if(sum==a&&(a-x)%y==0){
				cout<<sum<<" ";
				q+=sum;
			}
		}
	}
	cout<<endl;
	cout<<"\tJumlah\t : "<<q<<endl;
	return 0;
}
