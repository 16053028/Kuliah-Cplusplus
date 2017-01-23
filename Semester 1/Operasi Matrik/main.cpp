/*
NAMA    : MOCH. FIQIH BURHANUDDIN
NPM     : 160 530 28
TUGAS   : OPERASI MATRIK (ORDO SAMA)
*/

#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

int Matrik1[3][3], Matrik2[3][3], MatrikHasil[3][3];
int Ordo, IMenu, temp;

int Penjumlahan();
int Pengurangan();
int Perkalian();

void InputMatrik();
void Header();
void ShowMatrix();
void ShowHasil();
void Menu();

int main()
{
    system("color 2");
    system("title Matrik Calculator");
    Header();
    cout<<"Buat Ordo (NxN) : ";
    cin>>Ordo;
    cout<<"Ordo yang anda buat adalah "
        <<"("<<Ordo<<" x "<<Ordo<<")\n";
    Matrik1[Ordo][Ordo];
    Matrik2[Ordo][Ordo];
    MatrikHasil[Ordo][Ordo];
    InputMatrik();
    Menu();
return 0;
}

void Header()
{
    cout<<"\n\tMatrik Calculator\n\n";
}

void InputMatrik()
{
    //Matrik 1 Start
    cout<<"\nMasukkan Angka Matrik 1 \n"
        <<"Contoh : \n";
    for(int x=0; x<Ordo;x++)
        {
            cout<<"|\t";
            for(int y=0; y<Ordo; y++)
            {
                cout<<"N\t";
            }
            cout<<"|\n";
        }
    cout<<"\n\n";

        //Input Nilai Matrik 1
    for(int x=0; x<Ordo; x++)
    {
        for (int y=0; y<Ordo; y++)
        {
            cout<<"Masukan nilai Matrik 1 baris ke-"
                <<(x+1)
                <<" kolom ke-"
                <<(y+1)
                <<" : ";
            cin>>Matrik1[x][y];
        }
    }
    cout<<endl;

        //Output Matrik 1
    cout<<"Matrik 1 :"<<endl;
    for (int x = 0;x<Ordo;x++)
    {
        for (int y =0;y<Ordo;y++)
        {
            cout <<Matrik1[x][y]<<"   ";
        }
        cout<<endl;
    }
    //Matrik 1 End.

    //Matrik 2 Start.
    cout<<endl;
    cout<<"\nMasukkan Angka Matrik 2 \n"
        <<"Contoh : \n";
    for(int x=0; x<Ordo;x++)
        {
            cout<<"|\t";
            for(int y=0; y<Ordo; y++)
            {
                cout<<"N\t";
            }
            cout<<"|\n";
        }

        //Input Nilai Matrik 2.
    cout<<"\n\n";
    for(int x=0; x<Ordo; x++)
    {
        for (int y=0; y<Ordo; y++)
        {
            cout<<"Masukan nilai Matrik 2 baris ke-"
                <<(x+1)
                <<" kolom ke-"
                <<(y+1)
                <<" : ";
            cin>>Matrik2[x][y];
        }
    }
    cout<<endl;

        //Output Matrik 2
    cout<<"Matrik 2 :"<<endl;
    for (int x = 0;x<Ordo;x++)
    {
        for (int y =0;y<Ordo;y++)
        {
            cout <<Matrik2[x][y]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Matrik 2 End.
}

void Menu()
{

    system("cls");
    Header();
    ShowMatrix();
    cout<<"Pilih operasi yang anda pilih : \n"
        <<"1. Penjumlahan\n"
        <<"2. Pengurangan\n"
        <<"3. Perkalian\n\n";
    Menu:
        cout<<"Masukkan kode angka : ";
    cin >> IMenu;
    switch(IMenu)
    {
    case 1:
        system("cls");
        Header();
        ShowMatrix();
        cout<<"Hasil Penjumlahan dari Matrik 1 dan Matrik 2 adalah \n";
        Penjumlahan();
        ShowHasil();
        break;
    case 2:
        system("cls");
        Header();
        ShowMatrix();
        cout<<"Hasil Pengurangan dari Matrik 1 dan Matrik 2 adalah \n";
        Pengurangan();
        ShowHasil();
        break;
    case 3:
        system("cls");
        Header();
        ShowMatrix();
        cout<<"Hasil Perkalian dari Matrik 1 dan Matrik 2 adalah \n";
        Perkalian();
        ShowHasil();
        break;
    default :
        cout<<"Maaf, kode yang anda masukkan tidak ada.\n"
            <<"Masukkan Kode Angka yang tersedia.\n";
        goto Menu;
    }
}

void ShowHasil()
{
    cout<<endl;
    cout<<"\tMatrik Hasil\n";
    for(int x=0;x<Ordo;x++)
    {
        cout<<"|\t";
        for(int y=0;y<Ordo;y++)
        {
            cout<<MatrikHasil[x][y]<<"\t";
        }
        cout<<"|"<<endl;
    }
}

void ShowMatrix()
{
    cout<<"\tMatrik 1\n";
    for(int x=0;x<Ordo;x++)
    {
        cout<<"|\t";
        for(int y=0;y<Ordo;y++)
        {
            cout<<Matrik1[x][y]<<"\t";
        }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;
    cout<<"\tMatrik 2\n";
    for(int x=0;x<Ordo;x++)
    {
        cout<<"|\t";
        for(int y=0;y<Ordo;y++)
        {
            cout<<Matrik2[x][y]<<"\t";
        }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;
}

int Penjumlahan()
{
    for(int x=0;x<Ordo;x++)
    {
        for(int y=0;y<Ordo;y++)
        {
            MatrikHasil[x][y]= Matrik1[x][y] + Matrik2[x][y];
        }
    }
}

int Pengurangan()
{
    for(int x=0;x<Ordo;x++)
    {
        for(int y=0;y<Ordo;y++)
        {
            MatrikHasil[x][y]=Matrik1[x][y]-Matrik2[x][y];
        }
    }
}

int Perkalian()
{
    for (int x = 0;x<Ordo;x++)
    {
        for (int y =0;y<Ordo;y++)
        {
            for (int z =0;z<Ordo;z++)
            {
                MatrikHasil[x][y]=MatrikHasil[x][y]+Matrik1[x][z]*Matrik2[z][y];
            }
        }
    }
}
