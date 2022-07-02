#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Scramble()
{
	const int size = 10;
	srand(time(0));
	string kata[size];
	
	cout << endl;
	for (int x = 0; x < 10; ++x)
	{
		cout << "Huruf : ";
		cin >> kata[x];
	}

	cout << endl;
	cout << "Data yang diinput\t : ";
	for (int y = 0; y < size; ++y)
	{
		cout << kata[y];
	}

	for (int i = 0; i < size; ++i)
	{
		int index = rand() % size;
		string temp = kata[i];
		kata[i] = kata[index];
		kata[index] = temp;
	}

	cout << endl;
	cout << "Data yang diacak\t : ";
	for (int j = 0; j < size; ++j)
	{
		cout << kata[j];
	}

	return 0;
}

int main()
{
	Scramble();
}