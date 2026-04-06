#include <iostream>
#include <string>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
     cout << "Nama : " ;
    getline(cin, mhs[i].nama);
    cout << "alamat desa : " ;
    getline(cin, mhs[i].alamat.desa);
    cout << "alamat kota : " ;
    getline(cin, mhs[i].alamat.kota);
    cout << "umur : " ;
    cin >> mhs[i].umur;
    cout << endl;
    cin.ignore();
    }

    for (int i = 0; i <= 2; i++)
    {
      // Tampilan
      cout << " Data penduduk : " << endl;
    cout << " Nama : " << mhs[i].nama << endl;
    cout << " Desa : " << mhs[i].alamat.desa << endl;
    cout << " Kota : " << mhs[i].alamat.kota << endl;
    cout << " umur : " << mhs[i].umur << endl;
    cout << endl;
    }
}