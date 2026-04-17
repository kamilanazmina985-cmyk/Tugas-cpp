#include <iostream>
using namespace std;
int main(){
	string nama;
	int nilaiBasisData;
	int nilaiAlJabar;
	int nilaiPAI;
	int nilaiStrukturData;
	int nilaiPemrograman;
	float hasil;
	
	cout << "Masukkan Nama : ";
	cin >> nama;
	
	cout << "Masukkan Nilai Basis Data : ";
	cin >> nilaiBasisData;
	
	cout << "Masukkan Nilai Al Jabar : ";
	cin >> nilaiAlJabar;
	
	cout << "Masukkan Nilai PAI : ";
	cin >> nilaiPAI;
	
	cout << "Masukkan Nilai Struktur Data : ";
	cin >> nilaiStrukturData;
	
	cout << "Masukkan Nilai Pemrograman : ";
	cin >> nilaiPemrograman;
	
	hasil = (nilaiBasisData + nilaiAlJabar + nilaiPAI + nilaiStrukturData + nilaiPemrograman) / 5.0;
	cout << "\nRata-rata : " << hasil <<endl;
	
	if (hasil >= 86) {
		cout << "Predikat A";
	} else if(hasil >= 80) {
		cout << "Predikat B";
	}else if (hasil >= 70) {
		cout << "Predikat C";
	}else if (hasil >= 60) {
		cout << "Predikat D";
	}else {
		cout << "Predikat E";
	}
	return 0;
}
