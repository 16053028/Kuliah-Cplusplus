#include <iostream>

using namespace std;

int main()
{
    char hitam=219;
    char putih=255;
    char atasbawah=196;
    char samping=179;
    char atskr=218;
    char atskn=191;
    char bwkr=192;
    char bwkn=217;
    int hasil;
    int input;
    cout<<"masukan angka = ";
    cin>>input;

    for (int w=0;w<=input+1;w++){
        if(w==0){
            cout<<atskr;
        }else
        {
            if(w==input+1){
                cout<<atskn;
            }else
            {
                cout<<atasbawah;
            }
        }
    }
    cout<<endl;


    for (int w=0;w<input;w++){
        for (int q=0;q<=input+1;q++){
                if (q==0||q==input+1){
                    cout<<samping;
                }else{
                    hasil=(q+w)%2;
                    if (hasil==1){
                    cout<<hitam;
                    }else{
                    cout<<putih;
                    }
                }

            }

        cout<<endl;
        }
    for (int w=0;w<=input+1;w++){
        if(w==0){
            cout<<bwkr;
        }else
        {
            if(w==input+1){
                cout<<bwkn;
            }else
            {
                cout<<atasbawah;
            }
        }
    }


    return 0;
}
