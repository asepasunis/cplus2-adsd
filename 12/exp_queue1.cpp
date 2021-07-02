#include <iostream>
#include <string>
using namespace std;
#define n 10
char Q[n];
int F,R;
void Insert(char X);
void Delete();
void Awal();
void Reset();
//gcc -g -o b1 exp_queue1.cpp -lstdc++
int main()
{
    int I;
    char X,Y;
    Awal();
    //cout<<"Masukan X ";cin>>X;
    Insert('a');Insert('b');Insert('c');Insert('d');
    Delete();
    Insert('e');Insert('f');Insert('g');Insert('h');
    Delete();
}
void Awal(){
    F = 0;
    R=-1;
}
void Insert(char X){
    if(R < n-1){
        R++;Q[R]=X;
    }else{
        cout<<"Queue penuh \n";
    }
}
void Delete(){
    char X;
    if(F < R+1){
        X=Q[F];
        cout<<" hapus "<<X<<" pada "<<F<<"\n";
        F++;
        if(F==n){
            Reset();
        }
    }else{
        cout<<"Queue Kosong \n";
    }
}
void Reset(){
    F=0;
    R=-1;
}
