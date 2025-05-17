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
