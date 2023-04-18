#include <iostream>
using namespace std;

int sequentialSearch(int *array, int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int size;
	cout << "\nMasukan Jumlah Array : ";
	cin >> size;

	int array[size];
	int key;

	for (int i = 0; i < size; i++)
	{
		cout<<"\n Masukan value array ke "<<i<<" :";
		cin >> array[i];
	}

	cout << "\n Masukan angka yang ingin dicari : ";
	cin >> key;

	int index = sequentialSearch(array, size, key);
	if (index != -1)
	{
		cout << "\n Angka ditemukan di index ke: " << index;
	}
	else
	{
		cout << "\n Angka tidak ditemukan";
	}

	return 0;
}