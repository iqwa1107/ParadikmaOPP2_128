#include <iostream>
using namespace std;

class orang
{
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang di buat dengan umur " << umur << "\n" << endl;
	}

};

class pekerja : public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{}
};

class pelajaran : public orang{
public:
	pelajaran(int pUmur):
		orang(pUmur)
	{
		cout << "pelajaran di buat\n" << endl;
	}

}


