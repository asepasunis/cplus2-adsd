#include <iostream>
#include <string>
using namespace std;
#define n 11
//gcc -g -o b2 exp_mergesort.cpp -lstdc++
int main()
{
    int i,j,k,x,size,L1,L2,U1,U2,I;
    int A[n] = {25,12,37,15,20,45,17,5,27,7,32};//data
    int aux[n];//aray temporary untuk merge
    cout << "Sebelum di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] <<endl;
    }
    size=1;
    while(size < n){
        L1=0;k=0;
        while(L1+size < n ){
            //logic group array
            L2 = L1+size; U1 =L2-1;
            if(L2+size-1 < n){
                U2 = L2+size-1;
            }else{
                U2=n-1;
            }
            i=L1;j=L2;
            //proses merge
            while(i<=U1 && j <= U2){
                if(A[i] <= A[j]){
                    aux[k] = A[i++];
                }else{
                    aux[k] = A[j++];
                }
                k++;
            }
            while(i <= U1){
                aux[k] = A[i];
                i++;k++;
            }
            while(j <= U2){
                aux[k] = A[j];
                j++;k++;
            }
            L1 = U2+1;// untuk kelompok berikutnya
        }
        // menyalin apa adanya kelompok yang tidak ada lawan mergenya
        // misalnya : ketika size 1, maka 32 diakhir tidak ada lawan
        //ketika size 3, nilai 7,27,32 tidak ada lawan
        for(i=L1; k < n; i++){
                aux[k++] = A[i];
        }
        //proses menyalin isi array aux ke array A setiap selesai 1 tahapan
        for(i=0; i < n; i++){
            A[i] = aux[i];
        }
        // n = 11, maka sizenya =  1,2,4,8 maka ada 4 tahap proses
        size = size *2;
    }
    cout << "Sesudah di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] << endl;
    }
}