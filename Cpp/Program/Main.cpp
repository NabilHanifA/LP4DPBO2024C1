/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "Tabel.cpp"

int main() {
    vector<Vehicle*> listKendaraan1;

    Car car1("ABC123", "Toyota", "2019", "Hitam", "80", 5, 4);
    Car car2("DEF456", "Honda", "2020", "Merah", "100", 4, 2);
    Car car3("GHI789", "Mitsubishi", "2018", "Biru", "200", 7, 4);
    Motorcycle motorcycle1("XYZ123", "Yamaha", "2021", "Biru", "15", "Sport");
    Motorcycle motorcycle2("UVW456", "Suzuki", "2020", "Hitam", "20", "Cruiser");
    Motorcycle motorcycle3("MNO789", "Kawasaki", "2019", "Hijau", "20", "Off-road");

    listKendaraan1.push_back(&car1);
    listKendaraan1.push_back(&car2);
    listKendaraan1.push_back(&car3);
    listKendaraan1.push_back(&motorcycle1);
    listKendaraan1.push_back(&motorcycle2);
    listKendaraan1.push_back(&motorcycle3);

    vector<vector<string>> data1;
    vector<string> columnNames = {"Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jenis Kendaraan", "Kapasitas Tangki", "Jumlah Kursi/Pintu", "Jenis Motor/Mobil"};

    // Memasukkan data kendaraan ke dalam list data
    cout << "\nData Kendaraan Keseluruhan:" << endl;
    for (Vehicle* kendaraan : listKendaraan1) {
        if (Car* car = dynamic_cast<Car*>(kendaraan)) {
            data1.push_back({car->getPlatNomor(), car->getMerk(), (car->getTahunProduksi()), car->getWarna(), "Mobil", (car->getKapasitasTangki()) + " Liter", to_string(car->getJumlahKursi()) + " Kursi, " + to_string(car->getJumlahPintu()) + " Pintu", "-"});
        } else if (Motorcycle* motorcycle = dynamic_cast<Motorcycle*>(kendaraan)) {
            data1.push_back({motorcycle->getPlatNomor(), motorcycle->getMerk(), (motorcycle->getTahunProduksi()), motorcycle->getWarna(), "Motor", (motorcycle->getKapasitasTangki()) + " Liter", "-", motorcycle->getJenisMotor()});
        }
    }



    // Membuat objek tabel dan menampilkan data
    Tabel table;
    table.buatTabel(data1, columnNames);
    cout << endl;


    /*Error*/
    // Garage garage1("Garage 1", "100 m2", 5);

    // // Memasukkan kendaraan ke dalam garage1 dengan memeriksa kapasitas
    // for (Vehicle* kendaraan : listKendaraan1) {
    //     if (garage1.getCurrentCount() < garage1.getKapasitas()) {
    //         garage1.getVehicleList().push_back(kendaraan);
    //         garage1.setCurrentCount(garage1.getCurrentCount() + 1);
    //         cout << "Kendaraan " << kendaraan->getPlatNomor() << " berhasil ditambahkan ke garasi." << endl;
    //     } else {
    //         cout << "Garasi sudah penuh, tidak bisa menambahkan kendaraan " << kendaraan->getPlatNomor() << " lagi." << endl;
    //         break;
    //     }
    // }

    // cout << "\nKendaraan yang berhasil dimasukkan ke dalam garasi:" << endl;
    // vector<vector<string>> data2;
    // for (Vehicle* kendaraan : garage1.getVehicleList()) {
    //     if (Car* car = static_cast<Car*>(kendaraan)) {
    //         data2.push_back({car->getPlatNomor(), car->getMerk(), (car->getTahunProduksi()), car->getWarna(), "Mobil", (car->getKapasitasTangki()) + " Liter", to_string(car->getJumlahKursi()) + " Kursi, " + to_string(car->getJumlahPintu()) + " Pintu", "-"});
    //     } else if (Motorcycle* motorcycle = static_cast<Motorcycle*>(kendaraan)) {
    //         data2.push_back({motorcycle->getPlatNomor(), motorcycle->getMerk(), (motorcycle->getTahunProduksi()), motorcycle->getWarna(), "Motor", (motorcycle->getKapasitasTangki()) + " Liter", "-", motorcycle->getJenisMotor()});
    //     }
    // }

    // // Membuat objek tabel dan menampilkan data
    // table.buatTabel(data2, columnNames);
    // cout << endl;

    return 0;
}
