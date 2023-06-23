#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int low, high, pos;
    int ArraySize = 8;
    int NumList[8] = {25, 34, 41, 56, 63, 72, 88, 96};
    int SearchingElement, flag = -1;
    float position;

    cout << "Data Array :" << endl;
    for (int i = 0; i < ArraySize; i++)
        cout << "Indeks ke-" << i << " = " << NumList[i] << endl;

    cout << endl << endl;

    cout << "Masukkan data yang akan Anda cari = ";
    cin >> SearchingElement;

    low = 0;
    high = ArraySize - 1;

    do {
        position = ((float)(SearchingElement - NumList[low]) / (NumList[high] - NumList[low])) * (high - low) + low;
        pos = floor(position);

        if (SearchingElement == NumList[pos]) {
            flag = pos;
            break;
        }
        else if (SearchingElement < NumList[pos])
            high = pos - 1;
        else
            low = pos + 1;
    } while (SearchingElement >= NumList[low] && SearchingElement <= NumList[high]);

    if (flag != -1)
        cout << "\n\nData " << SearchingElement << " berada di Indeks ke-" << flag << endl;
    else
        cout << "\n\nMaaf, Data " << SearchingElement << " tidak ada." << endl;

    return 0;
}
