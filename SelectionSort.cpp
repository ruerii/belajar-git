#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int temp, numlist[7] = {6, 4, 2, 1, 3, 5, 7};

    cout << "Data sebelum diurutkan   :";
    for(int i = 0; i < 7; i++)
    {
        cout << setw(3) << numlist[i];
    }
    cout << endl << endl;

    for(int i = 0; i < 6; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < 7; j++)
        {
            if(numlist[j] < numlist[minIndex])
            {
                minIndex = j;
            }
        }
        
        temp = numlist[minIndex];
        numlist[minIndex] = numlist[i];
        numlist[i] = temp;
    }

    cout << "Data setelah diurutkan  :";
    for (int i = 0; i < 7; i++)
    {
        cout << setw(3) << numlist[i];
    }
    cout << endl << endl;

    return 0;
}
