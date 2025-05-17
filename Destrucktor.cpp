#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;

public:
    angka(int i);     // Constructor
    angka();         // Destructor
    void cetakData();
    void isiData();
};
