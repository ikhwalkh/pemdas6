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
    orang mhs;
    cout << "Nama : " ;
    cin >> mhs.nama;
    cout << "alamat desa : " ;
    cin >> mhs.alamat.desa;
    cout << "alamat kota : " ;
    cin >> mhs.alamat.kota;
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;

    // Tampilan
    cout << " Nama : " << mhs.nama << endl;
    cout << " Nama : " << mhs.alamat.desa << endl;
    cout << " Nama : " << mhs.alamat.kota << endl;
    cout << " Nama : " << mhs.umur << endl;

}