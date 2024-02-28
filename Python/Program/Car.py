'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

from Vehicle import Vehicle

#Private Attributes
class Car(Vehicle):
    #Private Attributes
    __jumlahKursi = 0
    __jumlahPintu = 0
    
    # Constructor
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", kapasitasTangki="", jumlahKursi=0, jumlahPintu=0):
        super().__init__(platNomor, merk, tahunProduksi, warna, kapasitasTangki)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu
    
    # Getter and Setter
    # Getter 
    def getJumlahKursi(self):
        return self.__jumlahKursi

    def getJumlahPintu(self):
        return self.__jumlahPintu
    
    # Setter 
    def setJumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    def setJumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu