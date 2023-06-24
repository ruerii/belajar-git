#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    
    int temp, numlist [8] = {5, 34, 32, 25, 75, 42, 22, 2};
    
    cout<<"Data sebelum diurutkan   :";
    for(int i=0; i<8; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
    
    for(int i=1; i<8; i++)
    {
        for(int j=8-1; j>=i; j--)
        {
            if(numlist[j] < numlist[j-1])
            {
                temp = numlist[j];
                numlist[j] = numlist [j-1];
                numlist[j-1] = temp;
            }
        }
    }
    
    cout<<"Data setelah diurutkan  :";
    for (int i=0; i<8; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
}
    
