#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEM = 10;

string itemNames[MAX_ITEM];
int itemPrices[MAX_ITEM];
int itemCount=0;

void addItem() {
	if (itemCount >= MAX_ITEM){
		cout<<"Daftar item sudah penuh! Tidak bisa menambahkan lagi.\n";
		return;
	}
	cout << "Masukkan nama item: ";
	cin.ignore();
	getline(cin, itemNames[itemCount]);
	cout<<"Masukkan harga item: ";
	cin>>itemPrices[itemCount];
	itemCount++;
	cout<<"Item berhasil ditambahkan!\n";
}

void viewItems(){
	if(itemCount == 0){
		cout<<"Belum ada daftar.\n";
		return;
	}
	cout<<"Daftar Item:\n";
	for (int i=0; i<itemCount; i++){
		cout<<i+1<<itemNames[i]<<" - Rp "<<itemPrices[i]<<endl;
	}
}

void calculateTotal(){
	if (itemCount == 0 ){
		cout<<"Belum ada item untuk dihitung.\n";
		return;
	}
	int total = 0;
	for(int i=0; i<itemCount; i++){
		total += itemPrices[i];
	}
	cout <<"Total harga semua item adalah: Rp "<<total<< endl;
}

int main(){
	int choice;
	do {
		cout<< "\n=== Sistem Penjualan Toko ===\n";
		cout<< "1. Tambah Item\n";
		cout<< "2. L:ihat Daftar Item\n";
		cout<< "3. Hitung Total Harga\n";
		cout<< "4. Keluar\n";
		cout<< "Pilih Opsi: ";
		cin>> choice;
		
		switch(choice){
			case 1:
				addItem();
				break;
			case 2:
				viewItems();
				break;
			case 3:
				calculateTotal();
				break;
			case 4:
				cout<<"Terimakasih telah menggunakan sistem ini. Sampai jumpa!\n";
				break;
			default:
				cout<<"Pilihan tidak valid. Silahkan coba lagi.\n";	
		}
	}
	while (choice !=4);
	
	return 0;
}
