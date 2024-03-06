/*Saya Nabil Hanif Achmaddiredja mengerjakan Latihan Praktikum 4 dalam 
mata kuliah Desain dan Pemrograman Berorientasi Objek untuk 
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Tabel 
{   
    /*Attribute*/
    private:
        int baris;
        int kolom;

    public:
        /*Constructor*/
        Tabel()
        {

        }
        Tabel(int baris, int kolom){
            this->baris = baris;
            this->kolom = kolom;
        }
        
        /*Getter & Setter*/
        //Getter
        int getBaris() {
            return this->baris;
        }

        int getKolom() {
            return this->kolom;
        }

        //Setter
        void setBaris(int baris) {
            this->baris = baris;
        }

        void setKolom(int kolom) {
            this->kolom = kolom;
        }

        // Method to create and print the table
        void buatTabel(vector<vector<string>> data, vector<string> columnNames) {
            int baris = data.size();
            int kolom = data[0].size();

            // Calculate the maximum width for each column
            vector<int> maxWidths(kolom, 0);
            for (int j = 0; j < kolom; j++) {
                for (int i = 0; i < baris; i++) {
                    maxWidths[j] = max(maxWidths[j], (int)data[i][j].length());
                }
                // Adjust maximum width based on column names
                maxWidths[j] = max(maxWidths[j], (int)columnNames[j].length());
            }

            // Print the separator line above the table
            printSeparator(maxWidths);

            // Print the title row
            for (int j = 0; j < kolom; j++) {
                cout << "| " << setw(maxWidths[j]) << left << columnNames[j] << " ";
            }
            cout << "|" << endl;

            // Print the separator line below the title row
            printSeparator(maxWidths);

            // Print the table data
            for (int i = 0; i < baris; i++) {
                for (int j = 0; j < kolom; j++) {
                    cout << "| " << setw(maxWidths[j]) << left << data[i][j] << " ";
                }
                cout << "|" << endl;

                // Print the separator line between rows
                printSeparator(maxWidths);
            }
        }

        // Helper method to print the separator line
        void printSeparator(vector<int> maxWidths) {
            for (int width : maxWidths) {
                cout << "+" << setfill('-') << setw(width + 2) << "-" << setfill(' ');
            }
            cout << "+" << endl;
        }
    ~Tabel()
    {}
};
