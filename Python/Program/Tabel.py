'''
Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
'''

class Tabel:
    __baris = 0
    __kolom = 0
    
    # Constructor
    def __init__(self, baris=0, kolom=0):
        self.__baris = baris
        self.__kolom = kolom

    # Getter and Setter
    # Getter 
    def getBaris(self):
        return self.__baris

    def getKolom(self):
        return self.__kolom

    # Setter 
    def setBaris(self, baris):
        self.__baris = baris

    def setKolom(self, kolom):
        self.__kolom = kolom

    def buatTabel(self, data, columnNames):
        baris = len(data)
        kolom = len(data[0])

        # Calculate the maximum width for each column
        maxWidths = [0] * kolom
        for j in range(kolom):
            for i in range(baris):
                maxWidths[j] = max(maxWidths[j], len(str(data[i][j])))
            # Adjust maximum width based on column names
            maxWidths[j] = max(maxWidths[j], len(columnNames[j]))

        # Print the separator line above the table
        self.printSeparator(maxWidths)

        # Print the title row
        for j in range(kolom):
            print(f"| {columnNames[j]}{' ' * (maxWidths[j] - len(columnNames[j]))} ", end="")
        print("|")

        # Print the separator line below the title row
        self.printSeparator(maxWidths)

        # Print the table data
        for i in range(baris):
            for j in range(kolom):
                if callable(data[i][j]):  # Periksa apakah data adalah metode
                    print(f"| {data[i][j]()}{' ' * (maxWidths[j] - len(str(data[i][j]())))} ", end="")
                else:
                    print(f"| {data[i][j]}{' ' * (maxWidths[j] - len(str(data[i][j])))} ", end="")
            print("|")

            # Print the separator line between rows
            self.printSeparator(maxWidths)

    # Helper method to print the separator line
    def printSeparator(self, maxWidths):
        for width in maxWidths:
            print("+" + "-" * (width + 2), end="")
        print("+")

