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
