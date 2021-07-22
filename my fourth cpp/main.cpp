//
//  main.cpp
//  my fourth cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 23/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
//    std::string nama, kampus;
//    int mahasiswaNow, mahasiswaFuture, birthYear;
//
//    std::cout << "Nama dosen : ";
//    getline(std::cin, nama);
//    std::cout << std::endl;
//
//    std::cout << "Mengajar di kampus : ";
//    getline(std::cin, kampus);
//    std::cout << std::endl;
//
//    std::cout << "Jumlah mahasiswa tahun ini : ";
//    std::cin >> mahasiswaNow;
//    std::cout << std::endl;
//
//    std::cout << "Rencana jumlah mahasiswa tahun depan : ";
//    std::cin >> mahasiswaFuture;
//    std::cout << std::endl;
//
//    std::cout << "Tahun lahir : ";
//    std::cin >> birthYear;
//    std::cout << std::endl;
//
//    std::cout << "Halo, nama saya " << nama << ". Saat ini saya mengajar di kampus " << kampus << ". Saya berusia " << 2021 - birthYear << " dan tahun ini saya mengajar sebanyak " << mahasiswaNow << " mahasiswa. Tahun depan yaitu tahun 2022 saya berusia " << 2022 - birthYear << " dan akan berupaya memiliki jumlah mahasiswa sebanyak " << mahasiswaFuture << std::endl;
    
//    int jumlahLembar, harga, totalHarga;
//    int lembarWarna = 1000;
//    int lembarHitam = 150;
//    int diskon = 0;
//    char isBerwarna = 'y';
//
//    std::cout << "Jumlah lembar yang akan di fotokopi : ";
//    std::cin >> jumlahLembar;
//    std::cout << std::endl;
//
//    std::cout << "Apakah berwarna? (y/N) : ";
//    std::cin >> isBerwarna;
//    std::cout << std::endl;
//
//    if (jumlahLembar > 100) {
//        if (isBerwarna != 'y') {
//            harga = jumlahLembar * lembarHitam;
//            diskon = harga * 2 / 100;
//            totalHarga = harga - diskon;
//        } else {
//            totalHarga = jumlahLembar * lembarWarna;
//        }
//    } else if (jumlahLembar > 500) {
//        if (isBerwarna != 'y') {
//            harga = jumlahLembar * lembarHitam;
//            diskon = harga * 5 / 100;
//            totalHarga = harga - diskon;
//        } else {
//            harga = jumlahLembar * lembarWarna;
//            diskon = harga * 2 / 100;
//            totalHarga = harga - diskon;
//            std::cout << "Masuk" << std::endl;
//        }
//    } else if (jumlahLembar > 1000) {
//        if (isBerwarna != 'y') {
//            harga = jumlahLembar * lembarHitam;
//            diskon = harga * 10 / 100;
//            totalHarga = harga - diskon;
//        } else {
//            harga = jumlahLembar * lembarWarna;
//            diskon = harga * 5 / 100;
//            totalHarga = harga - diskon;
//        }
//    } else {
//        if (isBerwarna != 'y') {
//            totalHarga = jumlahLembar * lembarHitam;
//        } else {
//            totalHarga = jumlahLembar * lembarWarna;
//        }
//    }
//
//    std::cout << "Jumlah lembar : " << jumlahLembar << std::endl;
//    std::cout << "Warna / tidak : " << isBerwarna << std::endl;
//    std::cout << "Diskon : " << diskon << std::endl;
//    std::cout << "total Bayar : " << totalHarga << std::endl;
    
    int jamParkir = 0;
    int jenisKendaraan;
    int denda = 0;
    int totalBiaya = 0;
    
        std::cout << "Jumlah total jam parkir : ";
        std::cin >> jamParkir;
        std::cout << std::endl;
    
        std::cout << "Jenis Kendaraan : \n1. Mobil\n2. Motor" << std::endl;
        std::cin >> jenisKendaraan;
        std::cout << std::endl;
    
    if (jenisKendaraan == 1) {
        totalBiaya = 5000;
        if (jamParkir > 2) {
            totalBiaya += (jamParkir - 2) * 3000;
        }
        
        if (totalBiaya > 20000) {
            totalBiaya = 20000;
        }
        
        if (jamParkir > 24) {
            denda = (jamParkir - 24) * 3000;
            totalBiaya += denda;
        }
    } else {
        totalBiaya = 3000;
        if (jamParkir > 2) {
            totalBiaya += (jamParkir - 2) * 1000;
        }
        
        if (totalBiaya > 10000) {
            totalBiaya = 10000;
        }
        
        if (jamParkir > 24) {
            denda = (jamParkir - 24) * 1000;
            totalBiaya += denda;
        }
    }
    
    
    std::string kendaraan = (jenisKendaraan == 1) ? "Mobil" : "Motor";
    std::cout << "Jenis kendaraan : " << kendaraan << std::endl;
    std::cout << "Jumlah jam : " << jamParkir << std::endl;
    std::cout << "Denda : " << denda << std::endl;
    std::cout << "Total biaya : " << totalBiaya << std::endl;
    
    
    return 0;
}
