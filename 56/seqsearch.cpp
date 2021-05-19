#include <iostream>
using namespace std;

int main()
{
    int i, N, Bilangan;
    bool ketemu = false;
    cout<<"Masukkan Banyaknya Bilangan = ";
    cin>>N;
    int Nilai[N];
    //Membaca elemen Array
    for(i=0; i<N; i++)
    {
        cout<<"Masukkan elemen ke-"<<i<<" = ";
        cin>>Nilai[i];
    }

    //Mencetak Elemen Array
    cout<<"Deretan Bilangan = ";
    for(i=0; i<N; i++)
    cout<<Nilai[i]<<" ";

    cout<<"Masukkan Bilangan yang akan Dicari = ";
    cin>>Bilangan;

    //Melakukan Pencarian
    i=0;
    do
    {
        if(Nilai[i]==Bilangan){
            ketemu = true;
        }
        i++;
    }
    while(i<=N);

    if(ketemu){
        cout<<"Bilangan "<<Bilangan<<" ditemukan";
    }else{
        cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
    }

}