/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Garage 
{
    /*Attribute*/
    private:
        string nama;
        string luas;
        int kapasitas;
        vector<string> vehicleList;
        int currentCount;

    public:
        /*Constructor*/
        Garage(){

        }

        Garage(string nama, string luas, int kapasitas) {
            this->nama = nama;
            this->luas = luas;
            this->kapasitas = kapasitas;
        }

        Garage(string nama, string luas, int kapasitas, vector<string> vehicleList, int currentCount) {
            this->nama = nama;
            this->luas = luas;
            this->kapasitas = kapasitas;
            this->vehicleList = vehicleList;
            this->currentCount = currentCount;
        }

        /*Getter & Setter*/
        //Getter
        string getNama() {
            return this->nama;
        }

        string getLuas() {
            return this->luas;
        }

        int getKapasitas() {
            return this->kapasitas;
        }

        vector<string> getVehicleList() {
            return this->vehicleList;
        }

        int getCurrentCount() {
            return this->currentCount;
        }

        //Setter
        void setNama(string nama) {
            this->nama = nama;
        }

        void setLuas(string luas) {
            this->luas = luas;
        }

        void setKapasitas(int kapasitas) {
            this->kapasitas = kapasitas;
        }

        void setVehicleList(vector<string> vehicleList) {
            this->vehicleList = vehicleList;
        }

        void setCurrentCount(int currentCount) {
            this->currentCount = currentCount;
        }
    ~Garage()
    {}
};
