#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim(); //deklarasi method
};


void mahasiswa::showNim() { //implenmentasi method diluar class 
    cout << "No Induk = " << nim << endl;
}

int main()
{
    mahasiswa mhs{ 1 };                 // object mhs
    mhs.showNim();                    // member acces Operator

    mahasiswa& ref = mhs; //ponter reference refMhs
    pMhs->nim = 3;           // arrow operator
    mhs.showNim();
    system("pause");
    return 0;
}