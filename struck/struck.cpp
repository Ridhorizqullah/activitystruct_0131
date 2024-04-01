#include <iostream>
#include <string>
using namespace std;
// struct adalah kumpulan kumpulan dari beberapa
// variabel yang memiliki bnayak tipe

struct Brand {
	string namaBrand;
	int tahun;
};

struct Handphone
{
	Brand brand;
	string type;
	int harga;
};

int main()
{
	Brand merek;
	merek.namaBrand = "apple";
	merek.tahun = 1976;

	Handphone hp;

	hp.brand = merek;
	hp.type = "iphone 7";
	hp.harga = 1000000;

	cout << "Nama Brand = " << hp.brand.namaBrand << endl;

	
}