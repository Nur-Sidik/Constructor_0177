#include <iostream>
#include <string>
using namespace std;

class Mahasiswa;
class Dosen;
class Staff;
class Universitas;

class Mahasiswa
{
    private:
        float Nilai;
        friend class Dosen;
    public:
        string Nama;
        string Nim;
};

class Dosen
{
private:
    float Gaji = 100000;
    string Pangkat;
    friend class Staff;
    friend class Universitas;
public:
    string Nama;
    string NIDN;

    void beriNilai(Mahasiswa* m, float Nilai)
    {
        m->Nilai = Nilai;
    }
};

class Staff
{
private:
    float Gaji = 800000;
    friend class Universitas;
public:
    string Nama;
    int IDStaff;

    void UbahPangkat(Dosen* Dosen, string PangkatBaru)
    {
        Dosen->Pangkat = PangkatBaru;
    }
};
