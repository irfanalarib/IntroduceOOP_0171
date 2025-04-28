#include <iostream>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukan jenisKelamin = " << endl;
        cin >> jenisKelamin;
        cout << "masukan tipe = " << endl;
        cin >> tipe;
        cout << "masukan umur = " << endl;
        cin >> umur;
    }
    void tampilHewan()  
    {
        cout << "tampil jenisKelamin = " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan ambon;
    ambon.inputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
    ambon.tampilHewan();
}