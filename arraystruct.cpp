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
    
    // Tampilan
    cout << " Nama : " << mhs.nama << endl;
    cout << " Nama : " << mhs.alamat.desa << endl;
    cout << " Nama : " << mhs.alamat.kota << endl;
    cout << " Nama : " << mhs.umur << endl;

}