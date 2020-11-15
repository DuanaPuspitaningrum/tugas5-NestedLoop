#include <iostream>

using namespace std;

int main()
{
    int a, b, p, l, t, m, pilih;
    cout << "Nama : Duana Puspitaningrum \nNIM  : 124200055 \nTugas 5 - Nested Loop \n";
    cout << "---------------------------\n";
    cout << "Gambar Bangun Datar";
    cout << "\n===========================\n";
    cout << "1. Kotak Bolong" << endl ;
    cout << "2. Segitiga" << endl ;
    cout << "pilih : " ; cin >> pilih ;
    cout << endl ;
    switch (pilih){
        case 1 :
            cout << "Panjang : " ; cin >> p ;
            cout << "Lebar   : " ; cin >> l ;
            for (a=0 ; a < p; a++)
            {
                for (b=0; b < l; b++){
                    if ((b == 0)||(b == l - 1)) {
                        cout << "* " ;
                    }else if ((a == 0)||(a == p - 1)){
                        cout << "* " ;
                    }else {
                        cout << "  " ;
                    }
                }
                cout << "\n";
            }

        break ;
        case 2 :
            cout << "Tinggi : " ; cin >> t ;
            for (a = 1; a <= t; a++)
            {
                m = a;
                for (b = 1; b <= a; b++)
                {
                    cout << m ;
                    cout << " ";
                    m = m + t - b;
                }
                cout << "\n";
            }
        break;
        default:
            cout << ("Input Salah!") << endl ;
    }

    return 0;
    }


