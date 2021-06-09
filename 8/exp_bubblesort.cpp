#include <iostream>
#include <string>
using namespace std;
#define n 7
//gcc -g -o bb exp_bubblesort.cpp -lstdc++
int main()
{
    int A[n] = {15,10,7,22,17,5,12};
    int X,I,K,Flag ;
    cout << "Sebelum di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] <<endl;
    }
    K=0;Flag=1;
    while(K <= n-2 && Flag ==1){
        I = 0; Flag = 0;
        while( I <= n-1 - K){
            if(A[I] > A[I+1]){
                Flag = 1;
                X = A[I];
                A[I] = A[I+1];
                A[I+1] = X;
            }
            I++;
        }
        K++;
    }
    cout << "Sesudah di sort"<<endl;
    for (I=0;I <= n-1;I++){
        cout << A[I] << endl;
    }
}
