#include <iostream>
#include <string>
using namespace std;
#define n 7
//gcc -g -o b2 exp_insertion.cpp -lstdc++
int main()
{
    int i,k,X ;
    int A[n] = {15,10,7,22,17,5,12};
    cout << "Sebelum di sort"<<endl;
    for (i=0;i <= n-1;i++){
        cout << A[i] <<endl;
    }

    for(k=1; k<= n-1; k++){
        i=k;
        X=A[i];
        while(i >= 0 && A[i-1] > X){
            A[i] = A [i-1];
            i--;
        }
        A[i]=X;
    }

    cout << "Sesudah di sort"<<endl;
    for (i=0;i <= n-1;i++){
        cout << A[i] <<endl;
    }
}
