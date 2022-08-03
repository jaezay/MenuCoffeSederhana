#include <conio.h>
#include <iostream.h>
#include <dos.h>
#include <stdlib.h>

using namespace std;

int main(){
	mulai:
	system("cls");
	int pil,jml,harga1,harga2;
	long int tot,byr,kbl,akhir;
	char ulang;
	
	do {
		system("cls");
		cout <<"================================" << endl;
		cout <<"Selamat Datang Di Rasyah Coffee" << endl;
		cout <<"============ Menu ==============" << endl;
		cout <<"1.Minuman" << endl;
		cout <<"2.Desert" << endl;
		cout <<"3.Exit" << endl;
		
		cout <<"Masukkan Pilihan Anda: ";
		cin >> pil;
		
		switch(pil){
			case 1:
			system("cls");
			do{
				system("cls");
				cout << "       ## Daftar Minuman ## " << endl;
				cout << "========================================" << endl;
				cout << "   Nama                      Ice/Hot" << endl;
				cout << "========================================" << endl;
				cout << "1. Espresso        Rp.30.000/Rp.25.000" << endl;
				cout << "2. Cappuccino      RP.27.000/Rp.23.000" << endl;
				cout << "3. Moccacino       RP.25.000/Rp.21.000"<< endl;
				cout << "4. Vanilla Latte   RP.30.000/Rp.24.000" << endl;
				cout << "5. Hazelnut Latte  RP.30.000/Rp.24.000" << endl;
				cout << "0. Kembali" << endl;
				cout << "========================================" << endl;
				
				cout << "Pilihan Anda: ";
				cin >> pil;
				
				switch(pil){
					case 1:
					system("cls");
					harga1=30000;
					harga2=25000;
					cout <<"Anda Memilih Espresso" <<endl;
					cout <<"===========================================================" <<endl;
					cout <<"Komposisi Espresso: " <<endl;
					cout <<"Gula, Kafein, Protein, Emulasi dari Minyak dan Kaloid" <<endl;
					break;
					case 2:
					system("cls");
					harga1=27000;
					harga2=23000;
					cout <<"Anda Memilih Cappuccino" <<endl;
					cout <<"===========================================================" <<endl;
					cout <<"Komposisi Cappuccino: " <<endl;
					cout <<"Espresso, susu dan froth susu" <<endl;
					break;
					case 3:
					system("cls");
					harga1=25000;
					harga2=21000;
					cout <<"Anda Memilih Moccacino" <<endl;
					cout <<"===========================================================" <<endl;
					cout <<"Komposisi Moccacino: " <<endl;
					cout <<"Coklat, Espresso, dan Susu" <<endl;
					break;
					case 4:
					system("cls");
					harga1=30000;
					harga2=24000;
					cout <<"Anda Memilih Vanila Latte" <<endl;
					cout <<"===========================================================" <<endl;
					cout <<"Komposisi Vanila Latte: " <<endl;
					cout <<"Syrup Vanila, Espresso dan Susu" <<endl;
					break;
					case 5:
					system("cls");
					harga1=30000;
					harga2=24000;
					cout <<"Anda Memilih Hazelnut Latte" <<endl;
					cout <<"===========================================================" <<endl;
					cout <<"Komposisi Hazelnut Latte: " <<endl;
					cout <<"Syrup Hazelnut, Gula, Espresso dan Susu" <<endl;
					break;
					case 0:
						goto mulai;
					break;
					default:
					system("cls");
					cout <<"Menu Tidak Tersedia!!" << endl;
					continue;
				}
				cout <<"===========================================================" <<endl;
				cout <<"Ingin melanjutkan pesanan (y/t)?";
				cin >> ulang;
				cout << endl;
			}
			while (ulang!='y');
			if(ulang='y'){
				system("cls");
				cout <<"            Pesanan Anda              " <<endl;
				cout <<"=========================================" <<endl;
				cout <<"Masukkan Jumlah Pesanan: ";
				cin >> jml;
				cout <<"*Pilih 1/2" <<endl;
			}else{
				goto mulai;
			}
			cout <<"Masukkan Pilihan Ice/Hot: ";
			cin >> pil;
			
			switch(pil){
				case 1:
				tot=harga1*jml;
				
				cout <<"=========================================" <<endl;
				do{
				cout <<"Total Harga: Rp." <<tot<<endl;
				cout <<"Masukkan Nominal Pembayaran: Rp.";
				cin >> byr;
				
				akhir=byr;
				kbl=byr-tot;
				
				cout <<"=========================================" <<endl;
				system("cls");
				if(byr > harga1){
				cout <<"            Rincian Pembayaran  " <<endl;
				cout <<"=========================================" <<endl;
				cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
				cout <<"Kembalian: Rp." <<kbl<<endl;
				cout <<"=========================================" <<endl;
				cout <<"   Terima Kasih Atas Pemesanannya" <<endl;
				cout <<"=========================================" <<endl;
				break;
				}else{
					cout <<"Uang Anda Kurang!!!" <<endl;
					cout <<"=========================================" <<endl;
					cout <<"Total Harga: Rp." <<tot<<endl;
					cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
					cout <<"Kurang: Rp."<<kbl<<endl;
					cout <<"=========================================" <<endl;
				}
				cout <<"Tekan (y) untuk memasukkan uang kembali: ";
				cin >> ulang;
				system("cls");
				cout <<endl;
				}
				while(ulang!='t');
				
				break;
				case 2:
				tot=harga2*jml;
				
				cout <<"=========================================" <<endl;
				do{
				cout <<"Total Harga: Rp." <<tot<<endl;
				cout <<"Masukkan Nominal Pembayaran: Rp.";
				cin >> byr;
				
				akhir=byr;
				kbl=byr-tot;
				
				cout <<"=========================================" <<endl;
				system("cls");
				if(byr > harga2){
				cout <<"            Rincian Pembayaran  " <<endl;
				cout <<"=========================================" <<endl;
				cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
				cout <<"Kembalian: Rp." <<kbl<<endl;
				cout <<"=========================================" <<endl;
				cout <<"   Terima Kasih Atas Pemesanannya" <<endl;
				cout <<"=========================================" <<endl;
				break;
				}else{
					cout <<"Uang Anda Kurang!!!" <<endl;
					cout <<"=========================================" <<endl;
					cout <<"Total Harga: Rp." <<tot<<endl;
					cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
					cout <<"Kurang: Rp."<<kbl<<endl;
					cout <<"=========================================" <<endl;
				}
				cout <<"Tekan (y) untuk memasukkan uang kembali: ";
				cin >> ulang;
				system("cls");
				cout <<endl;
				}
				while(ulang!='t');
				
				default:
				cout <<"Tidak ada pilihan!!!" <<endl;
				break;
			}
			break;
			case 2:
			do{

				system("cls");
				cout << "       ## Daftar Makanan ## " << endl;
				cout << "========================================" << endl;
				cout << "   Nama                      Price " << endl;
				cout << "========================================" << endl;
				cout << "1. Classic French Fries     Rp.15.000" << endl;
				cout << "2. Spaghetti Bolognaise     RP.25.000" << endl;
				cout << "3. Mac & Cheese             Rp.20.000"<< endl;
				cout << "4. Banana & Carrot Cake     RP.10.000" << endl;
				cout << "5. Smoked Beef Sandwich     RP.18.000" << endl;
				cout << "0. Kembali" << endl;
				cout << "========================================" << endl;
				
				cout <<"Pilihan Anda: ";
				cin >> pil;
				
				switch(pil){
					case 1:
					system("cls");
					cout <<"Anda Telah Memilih Classic French Fries" <<endl;
					cout << "========================================" << endl;
					harga1=15000;
					break;
					case 2:
					system("cls");
					cout <<"Anda Telah Memilih Spaghetti Bolognaise" <<endl;
					cout << "========================================" << endl;
					harga1=25000;
					break;
					case 3:
					system("cls");
					cout <<"Anda Telah Memilih Mac & Cheese" <<endl;
					cout << "========================================" << endl;
					harga1=20000;
					break;
					case 4:
					system("cls");
					cout <<"Anda Telah Memilih Banana & Carrot Cake" <<endl;
					cout << "========================================" << endl;
					harga1=10000;
					break;
					case 5:
					system("cls");
					cout <<"Anda Telah Memilih Smoked Beef Sandwich" <<endl;
					cout << "========================================" << endl;
					harga1=18000;
					break;
					case 0:
					goto mulai;
					break;					
					default:
					system("cls");
					cout <<"Menu Tidak Tersedia!!!" <<endl;
					continue;
				}
				cout <<"Tekan (y) untuk melanjutkan pembayaran" <<endl;
				cout <<"Tekan (n) untuk mengganti menu lain" <<endl;
				
				cout <<"Pilihan Anda: ";
				cin >> ulang;
				cout <<endl;
			}
			while (ulang!='y');
			if(ulang = 'y'){
				system("cls");
				cout <<"            Pesanan Anda              " <<endl;
				cout <<"=========================================" <<endl;
				cout <<"Masukkan Jumlah Pesanan: ";
				cin >> jml;
				tot=harga1*jml;
				
				cout <<"=========================================" <<endl;
				do{
				cout <<"Total Harga: Rp." <<tot<<endl;
				cout <<"Masukkan Nominal Pembayaran: Rp.";
				cin >> byr;
				
				akhir=byr;
				kbl=byr-tot;
				
				cout <<"=========================================" <<endl;
				system("cls");
				if(byr > harga1){
				cout <<"            Rincian Pembayaran  " <<endl;
				cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
				cout <<"Kembalian: Rp." <<kbl<<endl;
				cout <<"=========================================" <<endl;
				cout <<"   Terima Kasih Atas Pemesanannya" <<endl;
				cout <<"=========================================" <<endl;
				break;
				}else{
					cout <<"Uang Anda Kurang!!!" <<endl;
					cout <<"=========================================" <<endl;
					cout <<"Total Harga: Rp." <<tot<<endl;
					cout <<"Total yang anda bayarkan: Rp." <<akhir<<endl;
					cout <<"Kurang: Rp."<<kbl<<endl;
					cout <<"=========================================" <<endl;
				}		
				cout <<"Tekan (y) untuk memasukkan uang kembali: ";
				cin >> ulang;
				system("cls");
				cout <<endl;
				}
				while(ulang!='t');
			}
			case 3:
			system("cls");
			cout <<"Terima Kasih, Sampai jumpa kembali..." <<endl;
			exit(0);
		}
		cout <<"Ingin Tambah Desert (y/t)?";
				cin >> ulang;
				cout << endl;
	}
	while (ulang!='t');
	cout <<"Terima Kasih.." <<endl;
	return 0;
	}