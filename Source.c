#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int jamLembur;
	long gajiPokok = 1000000, gajiKotor, totalGajiLembur;
	float Pajak, gajiBersih;
	char Nama[50];

	system("cls");
	printf("Nama Pegawai    : "); fflush(stdin); gets(Nama);
	printf("Lama Lembur     : "); scanf_s("%i", &jamLembur);

	totalGajiLembur = (long int)5000 * jamLembur;
	gajiKotor = gajiPokok + totalGajiLembur;
	Pajak = 0.1 * gajiKotor;
	gajiBersih = gajiKotor - Pajak;

	system("cls");
	printf("Hasil Penghitungan\n");
	printf("Nama Pegawai       : %s\n", Nama);
	printf("Gaji Pokok         : Rp. %10li\n", gajiPokok);
	printf("Lama Lembur        : %i jam\n", jamLembur);
	printf("Total Gaji Lembur  : Rp. %10li\n", totalGajiLembur);
	printf("Gaji Kotor         : Rp. %10li\n", gajiKotor);
	printf("Pajak (10%%)        : Rp. %10.0f\n", Pajak);
	printf("Gaji Bersih        : Rp. %10.0f\n\n", gajiBersih);

	_getch();
	return 0;
}