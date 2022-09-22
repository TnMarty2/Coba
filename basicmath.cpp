#include <iostream>
using namespace std;

//Nama  :Akhdan Ferdiansyah Ramadhan 
//NIM   : 21.11.4218

int main()
{
    //Variabel dan tipe data
    int a, b, c;
    int aritmatik;

    //Input angka yang diinginkan
    cout <<"Masukkan angka = ";
    cin >> a;
    cout <<"Masukkan angka = ";
    cin >> b;
    cout <<endl;

    cout <<"===Pilih Metode Aritmatika===\n";
    cout <<"1. Penjumlahan\n";
    cout <<"2. Pengurangan\n";
    cout <<"3. Perkalian\n";
    cout <<"4. Pembagian\n";
    cout <<"Masukkan pilihan = ";
    cin >>aritmatik ;   //Inputkan pilihan metode aritmatika
    cout <<endl;

    switch (aritmatik)
    {
    case 1 : //Aritmatika penjumlahan a+b
        cout <<"Hasil penjumlahan adalah " <<a+b <<endl;
        break;
    case 2 : //Aritmatika pengurangan a-b
        cout <<"Hasil pengurangan adalah " <<a-b <<endl;
    break;
    case 3 : //Aritmatika perkalian a*b
        cout <<"Hasil perkalian adalah " <<a*b <<endl;
    break;
    case 4 : //Aritmatika pembagian a/b
        cout <<"Hasil pembagian adalah " <<a/b <<endl;
    break;
    default:
        break;
    }

    return 0;
}
