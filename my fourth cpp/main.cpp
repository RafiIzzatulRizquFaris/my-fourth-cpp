//
//  main.cpp
//  my fourth cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 23/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string nama, kampus;
    int mahasiswaNow, mahasiswaFuture, birthYear;
    
    std::cout << "Nama dosen : ";
    getline(std::cin, nama);
    std::cout << std::endl;
    
    std::cout << "Mengajar di kampus : ";
    getline(std::cin, kampus);
    std::cout << std::endl;
    
    std::cout << "Jumlah mahasiswa tahun ini : ";
    std::cin >> mahasiswaNow;
    std::cout << std::endl;
    
    std::cout << "Rencana jumlah mahasiswa tahun depan : ";
    std::cin >> mahasiswaFuture;
    std::cout << std::endl;
    
    std::cout << "Tahun lahir : ";
    std::cin >> birthYear;
    std::cout << std::endl;
    
    std::cout << "Halo, nama saya " << nama << ". Saat ini saya mengajar di kampus " << kampus << ". Saya berusia " << 2021 - birthYear << " dan tahun ini saya mengajar sebanyak " << mahasiswaNow << " mahasiswa. Tahun depan yaitu tahun 2022 saya berusia " << 2022 - birthYear << " dan akan berupaya memiliki jumlah mahasiswa sebanyak " << mahasiswaFuture << std::endl;
    
    return 0;
}
