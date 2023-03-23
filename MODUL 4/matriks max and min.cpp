#include <iostream>
using namespace std;
int main(){
    int matriks1[10][10],matriks2[10][10],matriks3[100],matriks4[100],arr1[100];
    int a,k=0,temp;
    cout<<"Input Ordo Matriks Persegi: "; cin>>a;
    cout<<"Maka masukkan nilai pada matriks 1 : \n";
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<"Matriks1"<<"["<<i<<"]"<<"["<<j<<"] "<<":";cin>>matriks1[i][j];
        }
    }
    cout<<endl;

    cout<<"Maka masukkan nilai pada matriks 2 : \n";
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
        cout<<"Matriks2"<<"["<<i<<"]"<<"["<<j<<"] "<<":";cin>>matriks2[i][j];
        }
    }
    cout<<endl;
    cout<<"===Hasil Input Matriks===";
    cout<<"Matriks 1:"<<endl;
    for (int i = 0; i < a; i++){
        cout<<"[";
        for (int j = 0; j < a; j++){
            cout<<matriks1[i][j];
            if(matriks2[i][j] == matriks2[i][a-1]) cout<<"";
            else cout<<",";
        }
        cout<<"]";
        cout<<"\n";
    }
    cout<<"Matriks 2:"<<endl;
    for (int i = 0; i < a; i++){
        cout<<"[";
        for (int j = 0; j < a; j++){
            cout<<matriks2[i][j];
            if(matriks2[i][j] == matriks2[i][a-1]) cout<<"";
            else cout<<",";
        }
    cout<<"]";
    cout<<"\n";
    }
    cout<<"===Hasil Penentuan Angka Terbesar dan Terkecil Pada Dua Matriks===";
    cout<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            matriks3[k++]=matriks1[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
        matriks4[k++]=matriks2[i][j];
        }
    }
    for(int i=0;i<k;i++){
        arr1[i]=matriks3[i];
    }
    for(int i=a*a;i<k;i++){
        arr1[i]=matriks4[i];
    }
    int max = arr1[0];
    for(int i = 0; i < k; i++){
        if(max < arr1[i])
        max = arr1[i];
    }
    for(int i=0;i<k;i++){
        if(max == matriks3[i] && max == matriks4[i+(a*a)]){
        cout<<"Angka Terbesar Dari Matriks 1 dan Matriks 2 Adalah: "<<max<<" Yang Berada Pada Matriks 1 dan Matriks 2";
        break;
        }
        else
        if(max==matriks3[i] && max != matriks4[i+(a*a)]){
            cout<<"Angka Terbesar Dari Matriks 1 dan Matriks 2 Adalah: "<<max<<" Yang Berada Pada Matriks 1";
            break;
        }
        else
        if(max != matriks3[i] && max == matriks4[i+(a*a)]){
            cout<<"Angka Terbesar Dari Matriks 1 dan Matriks 2 Adalah: "<<max<<" Yang Berada Pada Matriks 2";
            break;
        }
    }  
    cout<<endl;
    int min = arr1[0];
    for(int i = 0; i < k; i++){
        if(min > arr1[i])
        min = arr1[i];
    }
    for(int i=0;i<k;i++){
        if(min == matriks3[i] && min == matriks4[i+(a*a)]){
        cout<<"Angka Terkecil Dari Matriks 1 dan Matriks 2 Adalah: "<<min<<" Yang Berada Pada Matriks 1 dan Matriks 2";
        break;
        }
        else
        if(min==matriks3[i] && min != matriks4[i+(a*a)]){
            cout<<"Angka Terkecil Dari Matriks 1 dan Matriks 2 Adalah: "<<min<<" Yang Berada Pada Matriks 1";
        break;
        }
        else
        if(min != matriks3[i] && min == matriks4[i+(a*a)]){
            cout<<"Angka Terkecil Dari Matriks 1 dan Matriks 2 Adalah: "<<min<<" Yang Berada Pada Matriks 2";
            break;
        }
    }
    return 0;
}
