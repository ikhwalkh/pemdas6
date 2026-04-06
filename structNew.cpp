#include <iostream>
#include <string>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main() {
    orang mhs;
    cout << "Nama : " ;
    cin >> mhs.nama;
    cout << "alamat : " ;
    cin >> mhs.alamat;
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;
}