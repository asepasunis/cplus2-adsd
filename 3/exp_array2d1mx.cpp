#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

const int MAX_R = 3;
const int MAX_C = 3;

int main ()
{
    string nama[MAX_R][MAX_C]={
        {"1a", "1b", "1c"},
        {"2a", "2b", "2c"},
        {"3a", "3b", "3c"}
    };

    for(int i=0;i<MAX_R;++i){
        for(int j=0;j<MAX_C;++j){
            cout<<nama[i][j]<<setw(5);
        }
        cout<<"\n";
    }

    return 0;
}


