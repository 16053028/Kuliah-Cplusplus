#include<iostream>
#include<conio.h>
#include<iomanip>
#include <windows.h>

using namespace std;

void gotoxy (int x, int y)
{

COORD coord;
coord.X = x;
coord.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main() {

    char nama[30], barang[30];
    int jumlah_barang, jumlah_beli, harga_satuan, jumlah_harga, total_bayar = 0;

    cout << "Tekan 'Enter' untuk memulai.";
    cin.ignore();
    system("cls");
    cout << "Nama Pembeli            : " << endl;
    cout << "Jumlah Barang yg Dibeli : " << endl;
    gotoxy (25,0); cin >> nama;
    gotoxy (28,1); cin >> jumlah_barang;
    cout << endl;

    cout << "====================================================================" << endl;
    cout << "| NO |   NAMA BARANG   | JUMLAH BELI | HARGA SATUAN | JUMLAH HARGA |" << endl;
    cout << "====================================================================" << endl;

    for (int i = 1; i <= jumlah_barang; i++) {
        gotoxy(1,i+6); cout << "|";
        gotoxy(6,i+6); cout << "|";
        gotoxy(24,i+6); cout << "|";
        gotoxy(38,i+6); cout << "|";
        gotoxy(53,i+6); cout << "|";
        gotoxy(68,i+6); cout << "|";
        gotoxy(3,i+6); cout << setw(2) << i;
    }

    cout << endl;
    cout << "====================================================================" << endl;
    cout << "|                     TOTAL                         |              |" << endl;
    cout << "====================================================================" << endl;

    for (int j = 1; j <= jumlah_barang; j++) {
        gotoxy(8,j+6); cin >> barang;
        gotoxy(26,j+6); cin >> jumlah_beli;
        gotoxy(40,j+6); cin >> harga_satuan;
        jumlah_harga = jumlah_beli * harga_satuan;
        gotoxy(55,j+6); cout << setw(12) << jumlah_harga;
        total_bayar = total_bayar + jumlah_harga;
    }
    gotoxy(55,jumlah_barang+8); cout << setw(12) << total_bayar << endl;

    gotoxy(1,jumlah_barang+11);cout << "TERIMA KASIH";

    getch();
}
