#include<iostream>
using namespace std;

int main()
{
    int arraysize = 7, numlist[7] = {19,27,5,99,88,32,72};
    int searchingelement = 0, flag =-1;
    
    cout<<"Data Array  :\n"<<endl;
    for(int i = 0; i < arraysize; i++)
    {
        cout<<"Indeks ke- "<<i<<" = "<<numlist[i]<<endl;
    }
    cout<<endl<<endl;
    
    cout<<"Masukkan data yang akan anda cari    =";
    cin>>searchingelement;
    
    for(int i=0; i<arraysize; i++)
    {
        if (searchingelement == numlist[i])
        {
            flag = i;
        }
    }
    
    if(flag != -1)
    {
        cout<<"\n\nData "<<searchingelement<<" berada di indeks ke -"<<flag<<endl;
    }
    else
    {
        cout<<"\n\nMaaf, data "<<searchingelement<<" tidak ada." <<endl;
    }
    
}
