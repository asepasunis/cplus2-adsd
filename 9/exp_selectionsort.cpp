#include <iostream>
#include <string>
using namespace std;
#define n 7
//gcc -g -o b1 exp_selectionsort.cpp -lstdc++
int main()
{
    int A[n] = {15,10,7,22,17,5,12};
    int I,K,X,V1,V2 ;
    cout << "Sebelum di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] <<endl;
    }
    K=0;
    while(K < n-1 ){// loop sampe sebelum nilai terakhir
    //karena nilai kedua ada di loop yang ke 2 v2=k+1
        V1=K; V2=K+1;
        while(V2 < n ){
            //mengganti nilai index dengan yang terkecil
            if(A[V2] < A[V1]){
                V1=V2;
            }
            //lanjutkan loop sisa array sampe selesai
            V2++;
        }
        //update nilai index, ke nilai terkecil yang ditemukan
        //algoritma tukar isi gelas
        X = A[K];
        A[K]=A[V1];
        A[V1]=X;
        K++;
    }
    cout << "Sesudah di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] << endl;
    }
}
