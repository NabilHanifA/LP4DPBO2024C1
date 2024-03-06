/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle
{
    private:
        int jumlahKursi;
        int jumlahPintu;

    public:
        /*Constructor*/
        Car(){

        }

        Car(string platNomor, string merk, string tahunProduksi, string warna, string kapasitasTangki, int jumlahKursi, int jumlahPintu) : Vehicle(platNomor, merk, tahunProduksi, warna, kapasitasTangki) {
            this->jumlahKursi = jumlahKursi;
            this->jumlahPintu = jumlahPintu;
        }

        /*Getter & Setter*/
        //Getter
        int getJumlahKursi() {
            return this->jumlahKursi;
        }

        int getJumlahPintu() {
            return this->jumlahPintu;
        }

        // Setter methods
        void setJumlahKursi(int jumlahKursi) {
            this->jumlahKursi = jumlahKursi;
        }

        void setJumlahPintu(int jumlahPintu) {
            this->jumlahPintu = jumlahPintu;
        }

    ~Car()
    {}
};