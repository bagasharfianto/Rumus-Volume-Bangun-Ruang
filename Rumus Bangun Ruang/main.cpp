#include <iostream>

int Kubus(int Sisi);
int Balok(int Panjang,int Lebar,int tinggi);
int Tabung(int rata_rata, int Tinggi);
int prismaSegitiga(int alas, int tinggi, int tinggiPrisma);
int limasSegiempat(int luasAlas, int Tinggi);
int Kerucut(int rataRata, int tinggi);

int main() {
	
	return 0;
}

int Kubus(int sisi) {
	int volume = sisi * sisi * sisi;
	return volume;
}

int Balok(int panjang, int lebar, int tinggi) {
	int volume = panjang * lebar * tinggi;
	return volume;
}