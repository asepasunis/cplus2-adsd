#include <iostream>
#include <string>
using namespace std;
#define n 10
//gcc -g -o b1 exp_singlestack1.cpp -lstdc++
int main()
{
    int S[n],Top,X;
    Top = -1;
    cout<<"contoh stack, masukan >=60 untuk PUSH selain itu untuk POP"<<"\n";
    cout<<"Masukan X ";cin>>X;
    while (X != 999)
    {
        if(X >= 60){
            if(Top < n-1){
                Top = Top +1;S[Top] = X;//push
                cout<<" TOP "<<Top<<" "<<X<<"\n";
            }else{
                cout<<"Stack Penuh ";
                break;
            }
        }else{
            if(Top > -1){
                X=S[Top];Top = Top -1;//pop
                cout<<" Data Diambil "<<X<<" pada TOP "<<Top+1<<"\n";
            }else{
                cout<<"Stack Kosong \n";
                break;
            }
        }
        cout<<"Masukan X ";cin>>X;
    }
}