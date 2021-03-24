#include <iostream>
using namespace std;

  int main()
{
    int x = 1;
    switch (x)
    {
    case 1:
        cout << "SENIN" << endl;
        break;
    case 2:
        cout << "SELASA" << endl;
        break;
    case 3:
        cout << "RABU" << endl;
        break;
    case 4:
        cout << "KAMIS" << endl;
        break;
    case 5:
        cout << "JUMAT" << endl;
        break;
    case 6:
        cout << "SABTU" << endl;
        break;
    case 7:
        cout << "MINGGU" << endl;
        break;
    default:
        cout << "NILAI X tidak tidak diketahui" << endl;
        break;
    }
    return 0;
}



