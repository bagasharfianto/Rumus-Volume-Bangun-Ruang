#include <iostream>
#include <cstdlib>
using namespace std;

void displayMenu();

void Kubus(int Sisi);
void Balok(int Panjang,int Lebar,int tinggi);
void Tabung(double rata_rata, double Tinggi);
void prismaSegitiga(double alas, double tinggi, double tinggiPrisma);
void limasSegiEmpat(double luasAlas, double Tinggi);
void Kerucut(double rataRata, double tinggi);

int main() {
	int choise = 1;
	do {
		system("cls");
		displayMenu();
		cin >> choise;
	
	switch (choise) {
	case 1:
			int sisi;
			system("cls");
			cout << "Hitung Volume Kubus\n";
			cout << "Silahkan Masukkan Velue Sisi: ";
			cin >> sisi;
			Kubus(sisi);
			system("PAUSE");
			break;
	case 2:
		int panjang, lebar, tinggi;
		system("cls");
		cout << "Hitung Volume Balok\n";
		cout << "Silahkan Masukkan: \n";
		cout << "Panjang :\n";
		cin >> panjang;
		cout << "Lebar : \n";
		cin >> lebar;
		cout << "Tinggi : \n";
		cin >> tinggi;
		Balok(panjang,lebar,tinggi);
		system("PAUSE");
		break;
	case 3:
		double rataRata, tinggi;
		system("cls");
		cout << "Hitung Volume Tabung\n";
		cout << "Silahkan Masukkan: \n";
		cout << "Rata Rata :\n";
		cin >> rataRata;
		cout << "Tinggi : \n";
		cin >> tinggi;
		Tabung(rataRata, tinggi);
		system("PAUSE");
		break;
	case 4:
		double rataRata, tinggi,tinggiPrisma;
		system("cls");
		cout << "Hitung Volume Prisma Segitiga\n";
		cout << "Silahkan Masukkan: \n";
		cout << "Rata Rata :\n";
		cin >> rataRata;
		cout << "Tinggi : \n";
		cin >> tinggi;
		cout << "Tinggi Prisma : \n";
		cin >> tinggiPrisma;
		prismaSegitiga(rataRata, tinggi,tinggiPrisma);
		system("PAUSE");
		break;
	case 5:
		double luasAlas, tinggi;
		system("cls");
		cout << "Hitung Volume Limas Segi empat\n";
		cout << "Silahkan Masukkan: \n";
		cout << "Luas Alas :\n";
		cin >> luasAlas;
		cout << "Tinggi : \n";
		cin >> tinggi;
		limasSegiEmpat(luasAlas, tinggi);
		system("PAUSE");
		break;
	case 6:
		double rataRata, tinggi;
		system("cls");
		cout << "Hitung Volume Kerucut\n";
		cout << "Silahkan Masukkan: \n";
		cout << "Rata Rata :\n";
		cin >> rataRata;
		cout << "Tinggi : \n";
		cin >> tinggi;
		cout << "Tinggi Prisma : \n";
		cin >> tinggiPrisma;
		Kerucut(rataRata, tinggi);
		system("PAUSE");
		break;
	}

	} while (choise != 0);
	system("PAUSE");
	return EXIT_SUCCESS;
}

void displayMenu() {
	cout << "====MAIN MENU====\n";
	cout << "1- Volume Kubus\n";
	cout << "2- Volume Balok\n";
	cout << "3- Volume Tabung\n";
	cout << "4- Volume Prisma Segitiga\n";
	cout << "5- Volume Limas Segi Empat\n";
	cout << "6- Volume Kerucut\n";
	cout << "=====================\n";
}

void Kubus(int sisi) {
	int volume = sisi * sisi * sisi;
	cout << "Volume dari Kubus adalah: "<< volume <<"\n";
}

void Balok(int panjang, int lebar, int tinggi) {
	int volume = panjang * lebar * tinggi;
	cout << "Volume dari Balok adalah: " << volume << "\n";
}

void Tabung(double rataRata,double tinggi) {
	const double phi = 3.14;
	double volume = phi * rataRata * tinggi;
	cout << "Volume dari Tabung adalah: " << volume << "\n";
}

void prismaSegitiga(double alas, double tinggi, double tinggiPrisma) {
	double volume = ((alas * tinggi) /2) *tinggiPrisma;
	cout << "Volume dari Prisma Segitiga adalah: " << volume << "\n";
}

void limasSegiEmpat(double luasAlas, double tinggi) {
	double volume = 1 / 3 * luasAlas * tinggi;
	cout << "Volume dari limasSegiEmpat adalah: " << volume << "\n";
}

void Kerucut(double rataRata, double tinggi) {
	const double phi = 3.14;
	double volume = 1 / 3 * (phi * rataRata) * tinggi;
	cout << "Volume dari Kerucut adalah: " << volume << "\n";
}