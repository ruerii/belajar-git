#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int temp, j, numlist[7] = {6, 7, 5, 4, 1, 3, 2};

    cout << "Data sebelum diurutkan   :";
    for(int i = 0; i < 7; i++)
    {
        cout << setw(3) << numlist[i];
    }
    cout << endl << endl;

    for(int i = 1; i < 7; i++)
    {
        temp = numlist[i];
        j = i - 1;

        while(j >= 0 && numlist[j] > temp)
        {
            numlist[j + 1] = numlist[j];
            j--;
        }

        numlist[j + 1] = temp;
    }

    cout << "Data setelah diurutkan  :";
    for (int i = 0; i < 7; i++)
    {
        cout << setw(3) << numlist[i];
    }
    cout << endl << endl;

    return 0;
}
