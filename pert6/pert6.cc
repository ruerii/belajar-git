#include <iostream>
using namespace std;

int main(){
    int pil,c;
    char back;
    int a = 10;
    int b = 10;
    do{
        cout<<"0. Exit"<<endl;
        cout<<"1. Tambah"<<endl;
        cout<<"input pilihan : ";
        cin>>pil;
        switch (pil)
        {
        case 0:
            cout <<"exit";
            break;
        case 1:
            c=a+b;
            cout<<breakc<<endl;
        default:
            cout<<"pilihan salah"<<endl;
            break:
        }
        cout<<"pilih kembali?"<<endl;
        cin>>back;

    }
    while (back !'t');
    cout<<"thanks";
    return 0;
    }
