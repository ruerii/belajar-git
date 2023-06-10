#include<iostream>
using namespace std;

int main()
{
    char cnama [5][50];
    float fnilai1[5], fnilai2[5], fhasil[5];
    
    for(int i=1; i<=2; i++)
    {
        cout<<"input data ke- "<<i<<endl;
        cout<<"---------------"<<endl;
        
        cout << "nama siswa  :";
        cin.getline(cnama[i], 50);
        
        cout<<"nilai uts   :";
        cin>>fnilai1[i];
        
        cout<<"nilai uas   :";
        cin >>fnilai2[i];
        
       fhasil[i] =(fnilai1[i]*0.4) + (fnilai2[i] * 0.6);
       cout<<endl;
       
       cin.ignore();
    }
    
    cout<<endl;
    
    cout<<"===================="<<endl;
    cout<<"Nama\tuts\tuas\tnilai akhir"<<endl;
    cout<<"===================="<<endl;
    
    for (int i=1; i<=2; i++)
    {
        cout<<cnama[i]<<"\t";
        cout<<fnilai1[i]<<"\t";
        cout<<fnilai2[i]<<"\t";
        cout<<fhasil[i]<<endl;
    }
    return 0;
}


