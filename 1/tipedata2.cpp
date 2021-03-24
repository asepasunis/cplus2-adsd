#include <iostream>
using namespace std;
int main(){
    //--->*
    int angka; //Tipe data Integer untuk menyimpan data bersifat bilangan bulat
    bool hasil = true; //Tipe data Boolean yang mempunyai nilai awal true ( 1 )
    cout << "Masukan angka = ";cin >> angka; //Input Bilangan bulat ke variabel "angka"
    hasil = angka > 10;
    //variabel "hasil" akan menyimpan nilai kondisi dari variabel "angka" > 10.
    cout << hasil << endl; //jika kondisi True maka akan tertulis angka 1 atau 0 jika kondisi False.
    //--->*
    char x = 'A'; //Variabel Char hanya dapat memuat satu karakter.
    cout << "Masukan kelas = "; cin >> x; 
    //Jika anda memasukan karakter lebih dari satu maka variabel "x" hanya akan mengambil satu karakter pertama.
    cout << endl <<"Yang anda masukan adalah " << x << endl;
    //--->*
    int bilangan = 0, hasil2=0;
    cout << "Masukan angka = "; cin >> bilangan;
    hasil2 = bilangan * 2;
    cout<<"Hasil dari "<<bilangan<<" X 2 adalah "<<hasil2 << endl;
    //--->*
    float jari1, hasil3 ;
    const float p1 =3.14; //variabel konstanta
    cout << "Masukan Jumlah jari-jari = "; cin >> jari1;
    hasil3 = (jari1 * p1)*2; //disini kita menggunakan variabel float
    //karena hasil dari penghitungan lingkaran biasanya berbentuk bilangan pecahan
    cout << "Keliling dari Lingkaran adalah " << hasil3 << endl;
    //--->*
    double jari2, hasil4 ;
    const double p2=3.14;
    cout << "Masukan Jumlah jari-jari = "; cin >> jari2;
    hasil4 = jari2*(jari2 * p2);
    cout<<"Luas dari lingkaran 3.14 X "<< jari2 << " X " << jari2 << " adalah " << hasil4 << endl;
    //--->*
    string pesan = "Selamat Belajar Di c++", kalimat = "";
    cout << pesan << endl;
    getline(cin,kalimat); //Fungsi input agar dapat membaca kalimat panjang dan yang menggunakan spasi.
    cout << kalimat << endl;
    return 0;
}