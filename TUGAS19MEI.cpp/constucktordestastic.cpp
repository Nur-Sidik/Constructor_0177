#include <iostream>
using namespace std;

class mahasiswa{
    private:
        static int jmlMhs;

    public:
        string status;
        string nama;
        int nim;
        mahasiswa(string pnama, int pnim)
        {
            status = "Mahasiswa  Baru";
            nama = pnama;
            nim = pnim;
            cout << "Mahasiswa Di Buat " << nama << endl;
            cout << "Status  = " << status << endl;
            ++jmlMhs;
        };

        ~mahasiswa()
        {
            cout << "Mahasiswa Dengan Nama " << nama << " Dihancurkan " << endl;
            --jmlMhs;
        };

        static int getTotalMhs()
        {
            return jmlMhs;
        };
};

int mahasiswa ::jmlMhs = 0;

int main()
{
    cout << "Jumlah Mahasiswa = " << mahasiswa::getTotalMhs() << endl;
    mahasiswa Mhs1("Apip", 28);
    mahasiswa Mhs2("Dila", 24);
    Mhs2.status = "Mahasiswa Biadab ";
    cout << Mhs2.status << endl;
    mahasiswa Mhs3("Ima", 60);
    cout << "Jumlah Mahasiswa = " << mahasiswa::getTotalMhs() << endl;

    {
        mahasiswa Mhs4("Atun", 103);
        cout << "Jumlah Mahasiswa dalam bracket = " << mahasiswa::getTotalMhs() << endl;
    }

    cout << "Jumlah Mahasiswa = " << mahasiswa::getTotalMhs() << endl;
    return 0;
};