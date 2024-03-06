/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle 
{
    /*Attribute*/
    private:
        string jenisMotor;

    public:
        /*Constructor*/
        Motorcycle(){

        }

        Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string kapasitasTangki, string jenisMotor) : Vehicle(platNomor, merk, tahunProduksi, warna, kapasitasTangki) {
            this->jenisMotor = jenisMotor;
        }

        /*Getter & Setter*/
        //Getter
        string getJenisMotor() {
            return this ->jenisMotor;
        }

        //Setter
        void setJenisMotor(string jenisMotor) {
            this->jenisMotor = jenisMotor;
        }

        ~Motorcycle()
        {}
};
