#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    
    int temp, numlist [7] = {5, 2, 3, 1, 7, 6, 4};
    
    cout<<"Data sebelum diurutkan   :";
    for(int i=0; i<7; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
    
    for(int i=1; i<7; i++)
    {
        for(int j=7-1; j>=i; j--)
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
    for (int i=0; i<7; i++)
    {
        cout<<setw(3)<<numlist[i];
    }
    cout<<endl<<endl;
}
    
