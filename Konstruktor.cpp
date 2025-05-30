#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa();                           // Konstruktor default
    mahasiswa(int);                        // Konstruktor dengan NIM
    mahasiswa(string);                     // Konstruktor dengan nama
    mahasiswa(int iNim, string iNama);     // Konstruktor dengan NIM dan nama
    void cetak();
};

mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim;
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << "Nim  = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main() {
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}