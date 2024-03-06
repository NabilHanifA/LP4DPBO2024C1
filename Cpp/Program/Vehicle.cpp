/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle{

    /*Attribute*/
    private:
        string platNomor;
        string merk;
        string tahunProduksi;
        string warna;
        string kapasitasTangki;


    /*Constructor*/
    public:
        Vehicle()
        {}

        Vehicle(string platNomor, string merk, string tahunProduksi, string warna, string kapasitasTangki){
            this->platNomor = platNomor;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            this->warna = warna;
            this->kapasitasTangki = kapasitasTangki;
        }

        /*Getter & Setter*/
        //Getters
        string getPlatNomor() {
            return platNomor;
        }
        
        string getMerk() {
            return merk;
        }
        
        string getTahunProduksi() {
            return tahunProduksi;
        }
        
        string getWarna() {
            return warna;
        }
        
        string getKapasitasTangki() {
            return kapasitasTangki;
        }
        
        // Setters
        void setPlatNomor(string platNomor) {
            this->platNomor = platNomor;
        }
        
        void setMerk(string merk) {
            this->merk = merk;
        }
        
        void setTahunProduksi(int tahunProduksi) {
            this->tahunProduksi = tahunProduksi;
        }
        
        void setWarna(string warna) {
            this->warna = warna;
        }
        
        void setKapasitasTangki(float kapasitasTangki) {
            this->kapasitasTangki = kapasitasTangki;
        }

        virtual ~Vehicle(){}
};