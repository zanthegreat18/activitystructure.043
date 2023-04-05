#include <iostream>
using namespace std;
struct DetailAlamat {
	char desa[20];
	char kota[20];
 };

struct Mahasiswa
{
	char NIM[12];
	char Nama[20];
	DetailAlamat Alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukan Nama = ";
		cin.getline(mhs[i].Nama, 20);
		cout << "Alamat :" << endl;
		cout << "\tMasukan desa = ";
		cin.getline(mhs[i].Alamat.desa, 20);
		cout << "\tMasukan kota = ";
		cin.getline(mhs[i].Alamat.kota, 20);
		cout << "Masukan umur = ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}


	for (int i = 0; i < 3; i++) {
		cout << "\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].Nama;
		cout << "\nDesa = " << mhs[i].Alamat.desa;
		cout << "\nKota = " << mhs[i].Alamat.kota;
		cout << "\nUmur = " << mhs[i].umur;
	}

}