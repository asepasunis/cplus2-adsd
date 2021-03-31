#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
	cout<<"Masukan Jumlah Data = ";
	cin>>n;
    string nama[n];
	cout<<endl;

	for (int i=0; i<n; i++) {
        cout<<"Masukan nama ke "<<i+1<<":";
		cin>>nama[i];
	}

	for (int i=0; i<n;i++) {
        cout<<"nama ke "<<i+1<<":"<<nama[i]<<endl;
	}

}
