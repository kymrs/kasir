#include <iostream>
using namespace std;

int main(){
	int nasiPadang = 18000, nasiGoreng = 15000, buburAyam = 15000, bakmiAyam = 27000, ayamBakar = 30000, mieRamen = 20000, sateAyam = 2000;
	int kentangGoreng = 10000, keripikPisang = 7000, keripikSingkong = 7000, makaroni = 5000, popCorn = 15000, sosisBakar = 4000;
	int moccacino = 15000, coklat = 10000, hotMilo = 12000, esTehManis = 7000, jusmangga = 10000, jerukPeras = 10000, matcha = 15000, susu = 7000, kopi = 6000;
	int pilihan, jumlah, total, bayar, totalHarga;
	string repeat;
	
	do {
	cout << "===========================" << endl;
	cout << "=====Street Food Zikky=====" << endl;
	cout << "===========================" << endl;
	
	
	cout << "1. Makanan Berat\n2. Makanan Ringan\n3. Minuman" << endl;
	cout << "===========================" << endl;
	cout << "\nPilih Menu (1 - 3) : ";
	cin >> pilihan;
	
	cout << "\n===========================" << endl;
	
	switch (pilihan){
		case 1 :
			int pilihanIf;
			cout << "=======Makanan Berat=======" << endl;
			cout << "===========================" << endl;
			cout << "1. Nasi Padang = Rp. 18.000\n2. Nasi Goreng = Rp. 15.000" << endl;
			cout << "3. Bubur Ayam  = Rp. 15.000\n4. Bakmi Ayam  = Rp. 27.000" << endl;
			cout << "5. Ayam Bakar  = Rp. 30.000\n6. Mie Ramen   = Rp. 20.000" << endl;
			cout << "7. Sate Ayam   = Rp. 2.000" << endl;
			cout << "===========================\n\n";
			cout << "Pilih Menu (1 - 7) : ";
			cin >> pilihanIf;
			cout << "\n===========================";
			cout << endl;
			
			if ( pilihanIf == 1 ) {
				cout << "Nasi Padang\nHarga = Rp. 18.000\nBerapa bungkus? : ";
				cin >> jumlah;
				total = nasiPadang*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << nasiPadang << endl;
				cout << "Jumlah		= " << jumlah << " Bungkus"<< endl;
				cout << "Total Harga	= " << total << endl;
				do {
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				
				if ( bayar < totalHarga ) {
					cout << "Uang anda kurang!\n"; 
				}}
				
				while ( bayar < totalHarga );
				
				
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} 
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 2 ) {
				cout << "Nasi Goreng\nHarga = Rp. 15.000\nBerapa bungkus? : ";
				cin >> jumlah;
				total = nasiGoreng*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << nasiGoreng << endl;
				cout << "Jumlah		= " << jumlah << " Bungkus"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 3 ) {
				cout << "Bubur Ayam\nHarga = Rp. 15.000\nBerapa mangkuk? : ";
				cin >> jumlah;
				total = buburAyam*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << buburAyam << endl;
				cout << "Jumlah		= " << jumlah << " Mangkuk"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 4 ) {
				cout << "Bakmi Ayam\nHarga = Rp. 27.000\nBerapa mangkuk? : ";
				cin >> jumlah;
				total = bakmiAyam*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << bakmiAyam << endl;
				cout << "Jumlah		= " << jumlah << " Mangkuk"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 5 ) {
				cout << "Ayam Bakar\nHarga = Rp. 30.000\nBerapa box? : ";
				cin >> jumlah;
				total = ayamBakar*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << ayamBakar << endl;
				cout << "Jumlah		= " << jumlah << " Box"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 6 ) {
				cout << "Mie Ramen\nHarga = Rp. 20.000\nBerapa mangkuk? : ";
				cin >> jumlah;
				total = mieRamen*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << mieRamen << endl;
				cout << "Jumlah		= " << jumlah << " Mangkuk"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			
			if ( pilihanIf == 7 ) {
				cout << "Sate Ayam\nHarga = Rp. 2.000\nBerapa tusuk? : ";
				cin >> jumlah;
				total = sateAyam*jumlah;
				cout << "===========================" << endl;
				cout << "Harga		= " << sateAyam << endl;
				cout << "Jumlah		= " << jumlah << " Tusuk"<< endl;
				cout << "Total Harga	= " << total << endl;
				cout << "Bayar		= ";
				cin >> bayar;
				totalHarga = bayar-total;
				if (totalHarga > 0) {
					cout << "Kembalian \t= " << totalHarga;
				} else if (totalHarga < 0) {
					cout << "\n       Uang Anda Kurang!" << endl;
				}
				else {
					cout << "\n       Uang Anda Pas\n       Terimakasih!" << endl;
				}
			}
			break;
			
		case 2 :
			cout << "Makanan Ringan" << endl;
			break;
		case 3 :
			cout << "Minuman" << endl;
			break;
	}
				cout << "\nIngin Memesan Kembali (Y/N) ? : ";
				cin >> repeat;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n    Silahkan Pesan Kembali!\n\n\n\n\n\n\n\n\n\n\n\n";}
				while ( repeat == "y");
				cout << "Terimakasih!" << endl;


	
}