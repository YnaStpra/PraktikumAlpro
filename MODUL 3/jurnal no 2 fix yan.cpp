#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int n,i,j,k,l;
	float a[20][20];
	cout <<"Masukkan ordo Matriks A (n x n)"<<endl;
	cout <<"n : ";
	cin >>n;
	cout <<endl;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			cout <<"A("<<i<<","<<j<<") : ";
        	cin >>a[i][j];
        }
    }
	cout <<endl;
	for (i=1;i<=n;i++){
    	for (j=1;j<=n;j++)
        cout <<"    "<<a[i][j];
    	cout <<endl;
    }

	for (j=n+1;j<=n+n;j++){
    	i=j-n;
    	a[i][j]=1;
    }
	for (j=n+1;j<=n+n;j++){
    	for (i=1;i<=n;i++)
        if (i!=(j-n)) a[i][j]=0;
    }
	for (i=1;i<=n;i++){
		for (j=1;j<=n+n;j++){
        	if (i!=j) a[i][j]=a[i][j]/a[i][i];
        }
    	for (j=1;j<=n+n;j++){
        	if (i==j) a[i][j]=1;
        }
    	for (l=1;l<=n;l++){
        	if (i!=l){
            	for (j=i+1;j<=n+n;j++){
                	a[l][j]=a[l][j]-(a[i][j]*a[l][i]);
            	}
        	}
    	}
		for (k=1;k<=n;k++){
        	if (i!=k){
            	a[k][i]=0;
            	}
    	}
    }

	cout <<"Maka invers dari matriks A adalah : "<<endl;
	cout.precision(4);
	cout.setf(ios::fixed);
	for (i=1;i<=n;i++){
    	for (j=n+1;j<=n+n;j++)
        cout <<"    "<<a[i][j];
        cout <<endl;
    }
    return 0;
}
