#include <iostream>
#include<cmath>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah angka merupakan bilangan prima
bool isPrima(int bilangan ){
    if (bilangan <= 1) return false;  // Angka <= 1 bukan bilangan prima
    if (bilangan == 2 || bilangan == 3) return true; // 2 dan 3 adalah bilangan prima
    if (bilangan % 2 == 0 || bilangan % 3 == 0) return false; // Singkirkan bilangan genap dan kelipatan 3

    // Iterasi dari 5 hingga akar kuadrat dari num
     for (int i = 2; i * i <= bilangan; i++) {
        if (bilangan % i == 0) return false; // Jika habis dibagi, bukan prima
    }
    
    return true;
}

int main() {
    cout << "bilangan prima dari 0 sampai 1000 adalah : " << endl;
    int count = 0; // Menghitung jumlah bilangan prima yang sudah dicetak

    // Perulangan dari 1 sampai 1000
    for (int i = 1; i <= 1000; i++) {
        if (isPrima(i)) {
            cout << i << "\t"; // Cetak angka prima dengan tab untuk merapikan

            count++; // Menambah jumlah bilangan prima yang dicetak

            // Jika sudah 10 angka tercetak, pindah baris
            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }
    
    cout << endl; // Pindah baris setelah selesai
    
    return 0;
}
