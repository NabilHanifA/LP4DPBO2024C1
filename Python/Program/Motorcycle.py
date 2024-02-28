'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 2 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    # Private Attributes
    __jenisMotor = ""
    __kapasitasTangki = ""
    
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jenisMotor="", kapasitasTangki=""):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki
        
    # Getter and Setter
    # Getter 
    def getJenisMotor(self):
        return self.__jenisMotor

    def getKapasitasTangki(self):
        return self.__kapasitasTangki
    
    # Setter 
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    def setKapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki