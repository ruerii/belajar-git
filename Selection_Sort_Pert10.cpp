#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    
    int temp, pos, numlist [8] = {5, 34, 32, 25, 75, 42, 22, 2};
    
    cout<<"Data sebelum diurutkan   :";
    for(int i=0; i<8; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
    
    for(int i=0; i<8-1; i++)
    {
        pos = i;
    
        for(int j=i+1; j<8; j++)
        {
            if(numlist[j] < numlist[pos])
            {
                pos = j;
            }
        }
        if (pos !=1)
        {
            temp = numlist[pos];
            numlist[pos] = numlist[i];
            numlist[i] = temp;
        }
    }
    
    cout<<"Data setelah diurutkan  :";
    for (int i=0; i<8; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
}
    
