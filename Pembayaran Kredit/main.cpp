#include <iostream>

using namespace std;

int main()
{
    int hutang=20000000;
    int cicilan=500000;
    int bulan=hutang/cicilan;
    int bungaTerbayar=0;
    int input, tagihan, sisaHutang, hutangTerbayar, bunga, sisa ;
    cout<<"masukan bulan ke = ";
    cin>>input;
    for (int a=0;a<bulan;a++){
            sisaHutang=hutang-(a*cicilan);
            bunga=(1*sisaHutang)/100;
            tagihan=bunga+cicilan;
            hutangTerbayar=(cicilan*(a+1));
            bungaTerbayar=bungaTerbayar+bunga;
            sisa=hutang-(cicilan*(a+1));
            if (input==a+1){
                cout<<"bunga yang harus di bayar pada bulan ke "<<a+1<<" adalah Rp "<<bunga<<endl;
                cout<<"tagihan yang harus di bayar pada bulan ke "<<a+1<<" adalah Rp "<<tagihan<<endl;
                cout<<"hutang pokok yang sudah di bayar sampai bulan ke "<<a+1<<" adalah Rp "<<hutangTerbayar<<endl;
                cout<<"bunga yang sudah di bayar sampai bulan ke "<<a+1<<" adalah Rp "<<bungaTerbayar<<endl;
                cout<<"sisa hutang sampai bulan ke "<<a+1<<" adalah Rp "<<sisa<<endl<<endl;
                break;
            }
    }
    if (input>bulan){
        cout<<"pembayaran lunas pada bulan ke "<<bulan<<" dengan total pembayaran Rp "<<hutangTerbayar+bungaTerbayar<<endl;
    }
    return 0;
}
