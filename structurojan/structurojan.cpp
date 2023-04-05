#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat :" << endl;
	cout << "\tMasukan Desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tMasukan Kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukan Umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.desa;
	cout << "\nKota = " << mhs.Alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}