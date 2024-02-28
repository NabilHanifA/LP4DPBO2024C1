'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from Tabel import Tabel

listKendaraan1 = []


car1 = Car("ABC123", "Toyota", 2019, "Hitam", 80, 5, 4)
car2 = Car("DEF456", "Honda", 2020, "Merah", 100, 4, 2)
car3 = Car("GHI789", "Mitsubishi", 2018, "Biru", 200, 7, 4)
motorcycle1 = Motorcycle("XYZ123", "Yamaha", 2021, "Biru", 15, "Sport")
motorcycle2 = Motorcycle("UVW456", "Suzuki", 2020, "Hitam", 20, "Cruiser")
motorcycle3 = Motorcycle("MNO789", "Kawasaki", 2019, "Hijau", 20, "Off-road")

listKendaraan1.append(car1)
listKendaraan1.append(car2)
listKendaraan1.append(car3)
listKendaraan1.append(motorcycle1)
listKendaraan1.append(motorcycle2)
listKendaraan1.append(motorcycle3)

data1 = []
columnNames = ["Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jenis Kendaraan", "Kapasitas Tangki", "Jumlah Kursi/Pintu", "Jenis Motor/Mobil"]
    
# Memasukkan data kendaraan ke dalam list data
print("\nData Kendaraan Keseluruhan:")
for kendaraan in listKendaraan1:
    if isinstance(kendaraan, Car):
        data1.append([kendaraan.getPlatNomor(), kendaraan.getMerk(), kendaraan.getTahunProduksi(), kendaraan.getWarna(), "Mobil", f"{kendaraan.getKapasitasTangki()} Liter", f"{kendaraan.getJumlahKursi()} Kursi, {kendaraan.getJumlahPintu()} Pintu", "-"])  
    elif isinstance(kendaraan, Motorcycle):
        data1.append([kendaraan.getPlatNomor(), kendaraan.getMerk(), kendaraan.getTahunProduksi(), kendaraan.getWarna(), "Motor", f"{kendaraan.getKapasitasTangki()} Liter", "-", kendaraan.getJenisMotor()])

# Membuat objek tabel dan menampilkan data
table = Tabel()
table.buatTabel(data1, columnNames)
print()
garage1 = Garage("Garage 1", "100 m2", 5)

# Memasukkan kendaraan ke dalam garage1 dengan memeriksa kapasitas
for kendaraan in listKendaraan1:
    if garage1.getCurrentCount() < garage1.getKapasitas():
        garage1.getVehicleList().append(kendaraan)
        garage1.setCurrentCount(garage1.getCurrentCount() + 1)
        print("Kendaraan", kendaraan.getPlatNomor(), "berhasil ditambahkan ke garasi.")
    else:
        print("Garasi sudah penuh, tidak bisa menambahkan kendaraan", kendaraan.getPlatNomor(), "lagi.")
        break

print("\nKendaraan yang berhasil dimasukkan ke dalam garasi:")
data2 = []
for kendaraan in garage1.getVehicleList():
    if isinstance(kendaraan, Car):
        data2.append([kendaraan.getPlatNomor(), kendaraan.getMerk(), kendaraan.getTahunProduksi(), kendaraan.getWarna(), "Mobil", f"{kendaraan.getKapasitasTangki()} Liter", f"{kendaraan.getJumlahKursi()} Kursi, {kendaraan.getJumlahPintu()} Pintu", "-"])  
    elif isinstance(kendaraan, Motorcycle):
        data2.append([kendaraan.getPlatNomor(), kendaraan.getMerk(), kendaraan.getTahunProduksi(), kendaraan.getWarna(), "Motor", f"{kendaraan.getKapasitasTangki()} Liter", "-", kendaraan.getJenisMotor()])
# Membuat objek tabel dan menampilkan data

table.buatTabel(data2, columnNames)
print()