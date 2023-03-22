#include <iostream>
using namespace std;

void Sorting(int arr[10][10], int a){
    int x[10]; //x = invers matriks
    int k=0 ,temp;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j];
        }    
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            x[k++]=arr[i][j];
        }
    }
    
    for(k=0;k<9;k++){
        x[k];
        for(int i=0;i<9;i++){
            for(int j=0;j<(8-i);j++){
                if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
                }
            }
        }
    }
    
    for(int i=0;i<9;i++){
        x[i];
    }
    k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=x[k];
            k++;
        }
    }
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int matriks1[10][10],matriks2[10][10],hasil[10][10];
    int tukarmatriks1[10],matrikstukar2[10];
    int a,jumlah=0,k=0,temp;
    cout<<"masukkan ordo : "; cin>>a;
    
    cout<<"Maka masukkan nilai pada matriks 1 : \n";
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cout<<"Matriks1"<<"["<<i<<"]"<<"["<<j<<"] "<<": ";cin>>matriks1[i][j];
        }
}
    cout<<endl;
    
    cout<<"Maka masukkan nilai pada matriks 2 : \n";
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cout<<"Matriks2"<<"["<<i<<"]"<<"["<<j<<"] "<<": ";cin>>matriks2[i][j];
        }
}
    cout<<endl;
    cout<<"Matriks 1:"<<endl;
    for (int i = 0; i < a; i++){
    for (int j = 0; j < a; j++){ 
    cout<<matriks1[i][j];
    cout<<"\t";
  }
  cout<<"\n";
 }
    
    cout<<"Matriks 2:"<<endl;
    for (int i = 0; i < a; i++){
    for (int j = 0; j < a; j++){ 
    cout<<matriks2[i][j];
    cout<<"\t";
  }
  cout<<"\n";
 }
    
    cout<<"Matriks setelah diurutkan : "<<endl;
    cout<<"Martiks 1 : "<<endl;
    Sorting(matriks1, a);
    cout<<endl;
    cout<<"Martiks 2 : "<<endl;
    Sorting(matriks2, a);
    
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
    for(int k=0;k<a;k++){
        jumlah=jumlah+matriks1[i][k]*matriks2[k][j];
        }
        hasil[i][j]=jumlah;
        jumlah=0;
        }
    }
    cout<<endl;
    cout << "Hasil perkalian matriks: \n";
    for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
        cout << hasil[i][j] <<"\t";
      }
      cout << endl;
    }
    return 0;
}