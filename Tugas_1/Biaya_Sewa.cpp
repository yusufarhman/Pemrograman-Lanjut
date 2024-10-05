#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk hitung biaya sewa kendaraan
int hitungBiayaSewaKendaraan(int jumlah_hari, int biaya_sewa_per_hari) {
    return jumlah_hari * biaya_sewa_per_hari;
}
int main(){

    int biaya_sewa_per_hari = 1103000;
    int jumlah_hari = 20;
    int total_anggaran = 88000000;

    // Menghitung total biaya sewa kendaraan
    int total_biaya_sewa = hitungBiayaSewaKendaraan(jumlah_hari, biaya_sewa_per_hari);
    cout << "Total biaya sewa adalah : " << total_biaya_sewa << endl;
    cout << "Batas total anggaran : " << total_anggaran << endl;

 // Memeriksa apakah total biaya melebihi anggaran

    if (total_biaya_sewa > total_anggaran )
        cout << "Anggaran tidak dapat diterima " << endl;
    else
        cout << "Anggaran dapat diterima " << endl;

    return 0;

}
