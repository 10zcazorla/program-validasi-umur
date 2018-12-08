#include <iostream>

using namespace std;

int main()

{
    int umur;
    cout << "Selamat Datang Di Program Validasi Umur" << endl;
    cout << "Masukkan Tahun Kelahiran Anda : ";
    cin >> umur;
    umur = 2018 - umur;
    cout << "Umur Anda Adalah : " << umur;

    if (umur > 17)
    {
        cout << "\nUmur Kamu lebih dari 17, Kamus sudah dewasa. " << endl;
    }
    else {
        cout << "\nUmur kamu masih dibawah 17, Kamu masih anak-anak. " << endl;
     }
    return 0;
}
