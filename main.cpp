#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    cout << "==================================" << endl;
    cout << "<<<<<<<<< MENU >>>>>>>>>" << endl;
    cout << " 1. Cari Nilai Maksimum " << endl;
    cout << " 2. Cari Nilai Minimum " << endl;
    cout << " 3. Cari Nilai Rata-Rata " << endl;
    cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>" << endl;
    cout << "==================================" << endl;
    cout << "Masukan Pilihan : ";
    cin >> pilihan;
    cout << endl << endl;

    switch (pilihan)
    {
        case 1:
        {
            int m;
            cout << "Masukan Panjang Array : ";
            cin >> m;
            int maksimum = INT_MIN; // Inisialisasi dengan nilai terkecil
            cout << "<<< Mencari Nilai Maksimum >>>" << endl;
            cout << "Masukan " << m << " angka " << endl;
            for (int i = 0; i < m; i++)
            {
                int nilai;
                cout << "Array ke- " << (i + 1) << " : ";
                cin >> nilai;
                if (nilai > maksimum)
                {
                    maksimum = nilai;
                }
            }
            cout << "Nilai Maksimumnya Adalah : " << maksimum << endl;
            break;
        }
        case 2:
        {
            int a;
            cout << "Masukan Panjang Array : ";
            cin >> a;
            int minimum = INT_MAX; // Inisialisasi dengan nilai terbesar
            cout << "<<< Mencari Nilai Minimum >>>" << endl;
            cout << "Masukan " << a << " angka " << endl;
            for (int i = 0; i < a; i++)
            {
                int nilai;
                cout << "Array ke- " << (i + 1) << " : ";
                cin >> nilai;
                if (nilai < minimum)
                {
                    minimum = nilai;
                }
            }
            cout << "Nilai Minimumnya Adalah : " << minimum << endl;
            break;
        }
        case 3:
        {
            int r;
            cout << "Masukan Panjang Array : ";
            cin >> r;
            float total = 0;
            cout << "<<< Mencari Nilai Rata-Rata >>>" << endl;
            cout << "Masukan " << r << " angka : " << endl;
            for (int i = 0; i < r; i++)
            {
                int nilai;
                cout << "Nilai ke- " << (i + 1) << " = ";
                cin >> nilai;
                total = total + nilai;
            }
            float rata_rata = total / r;
            cout << "Nilai Rata-Ratanya Adalah : " << rata_rata << endl << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}

