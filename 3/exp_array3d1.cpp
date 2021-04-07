#include <iostream>
using namespace std;

const int MAX_X = 2; //h
const int MAX_Y = 3; //v
const int MAX_Z = 4; //d

int main ()
{
    int angka [MAX_X][MAX_Y][MAX_Z];
    int x,y,z;
    int n=1;
    for(x=0;x<MAX_X;x++){
        for(y=0;y<MAX_Y;y++){
            for(z=0;z<MAX_Z;z++){
                cout<<"masukan angka ke "<<n<<" indeks ke ["<<x<<"]["<<y<<"]["<<z<<"]"<<" = ";
                cin>>angka[x][y][z];
                n++;
            }
        }
    }
    cout<<"== Tampil nilai elemen Array =="<<endl;
    n=1;
    for(x=0;x<MAX_X;x++){
        for(y=0;y<MAX_Y;y++){
            for(z=0;z<MAX_Z;z++){
                 cout<<n<<" angka indeks ["<<x<<"]["<<y<<"]["<<z<<"]"<<"="<<angka[x][y][z]<<endl;
                 n++;
            }
        }
    }
    return 0;
}


