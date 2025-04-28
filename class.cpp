#include <iostream>
using namespace std;

class Lingkaran{
    public:
    double jarijari;
    double luasLingkaran;

    void inputData(){
        cout << "Masukan jariari = " << endl;
        cin >> jarijari;

    }
    double hitungLuas(){
       return 3.14 * jarijari * jarijari;
    } 
};


int main(){
    Lingkaran bulet;
    bulet.inputData();
    bulet.jarijari;
    cout << endl;
    cout << "luasnya adalah = " << bulet.hitungLuas() << endl;
    cout << endl;
}