'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    # Private Attributes
    __jenisMotor = ""

    
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", kapasitasTangki="", jenisMotor=""):
        super().__init__(platNomor, merk, tahunProduksi, warna, kapasitasTangki)
        self.__jenisMotor = jenisMotor
        
    # Getter and Setter
    # Getter 
    def getJenisMotor(self):
        return self.__jenisMotor

    # Setter 
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor