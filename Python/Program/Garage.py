'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

class Garage:
    
    #Private Attributes
    __nama = ""
    __luas = ""
    __kapasitas = 0
    __vehicleList = []
    __currentCount = 0
    
    # Constructor
    def __init__(self, nama="", luas="", kapasitas=0, vehicleList=[], currentCount=0):
        self.__nama = nama
        self.__luas = luas
        self.__kapasitas = kapasitas
        self.__vehicleList = vehicleList
        self.__currentCount = currentCount
        
    # Getter and Setter
    # Getter 
    def getNama(self):
        return self.__nama

    def getLuas(self):
        return self.__luas
    
    def getKapasitas(self):
        return self.__kapasitas

    def getVehicleList(self):
        return self.__vehicleList
    
    def getCurrentCount(self):
        return self.__currentCount
    
    # Setter
    def setNama(self, nama):
        self.__nama = nama
    
    def setLuas(self, luas):
        self.__luas = luas

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def setVehicleList(self, vehicleList):
        self.__vehicleList = vehicleList
   
    def setCurrentCount(self, currentCount):
        self.__currentCount = currentCount