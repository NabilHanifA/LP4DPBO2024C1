'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

class Vehicle:
    # Private Attributes
    __platNomor = ""
    __merk = ""
    __tahunProduksi = ""
    __warna = ""
    
    
    # Constructor
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna=""):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna
        
    # Getter and Setter
    # Getter 
    def getPlatNomor(self):
        return self.__platNomor
    
    def getMerk(self):
        return self.__merk
    
    def getTahunProduksi(self):
        return self.__tahunProduksi
    
    def getWarna(self):
        return self.__warna
    
    # Setter
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor
    
    def setMerk(self, merk):
        self.__merk = merk
    
    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi
    
    def setWarna(self, warna):
        self.__warna = warna
    