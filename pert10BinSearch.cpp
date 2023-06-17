#include <iostream>
using namespace std;

int main()
{
    int arraysize =8, numlist[8] = {2,5,8,12,25,37,57};
    int temp, searchingelement = 0;
    int start, middle, end, position;
    
    cout<<" Data Array :"<<endl;
    for(int i =0; i<arraysize; i++)
    {
        cout <<"Indeks ke-"<<i<<" = "<<numlist[i]<<endl;
    }
    cout<<endl<<endl;
    
    for (int i=1; i<arraysize; i++)
    {
        for (int j=arraysize-i; j>=i; j--)
    {
        if(numlist[j] < numlist[j-1])
        {
            temp = numlist[j];
            numlist[j] = numlist[j-1];
            numlist[j-1] = temp;
        }
    }
    }
    cout <<"Data array setelah diurutkan :"<<endl;
    for (int i=0; i<arraysize; i++)
    {
        cout<<"Indeks ke -"<<i<<" = "<<numlist[i]<<endl;
    }
    cout<<endl<<endl;
    
    cout<<"Masukkan data yang akan anda cari =";
    cin>>searchingelement;
    
    start = 0;
    end = arraysize - 1;
    middle = (start + end) / 2;
    position =-1;
    
    
    do
    {
        if(searchingelement < numlist[middle])
        {
            end = middle -1;
        }
        else if (searchingelement > numlist[middle])
        {
            start = middle +1;
        }
        middle = (start + end) / 2;
    }
    while(start <= end && searchingelement != numlist[middle]);
    
    if(searchingelement == numlist [middle]){
        position = middle;
    }
    
    if(position != -1)
    {
        cout<<"\n\nData"<<searchingelement<< "berada di indeks ke-"<<position<<endl;
    }
    else
    {
        cout<<"\n\nData "<<searchingelement<<"tidak ada."<<endl;
    }
}
