#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	int noProduk;
	string name;
	Node* next;
	Node* prev;
};

class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); //Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		cin.ignore();
		cout << "Produk berhasil ditambahkan!" << endl; 
	}
	 
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
		}
	}

	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				cout << targetNama[posisi] << " ";
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}

	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		cout << "JumlahProduk" << endl;
	}
};int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk();
			break;
		case 3:
			manajemenProduk.cariProdukByNama();
			break;
		case 4:
			manajemenProduk.algorithmaSortByJumlahProduk();
			break;
		case 5:
			return 0;
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. Linked List (double), stack array
//3. algoritma queue adalah algoritma dengan sistem FIFO (first in first out) jadi elemen yang pertama masuk itu akan menjadi elemen yang pertama keluar. 
//Front adalah elemen yang akan dikeluarkan/ elemen pertama, sedangkan Rear adalah elemen yang baru saja dimasukkan. Jika kita ingin mengeluarkan output maka yang pertama keluar adalah angka 10.
//Apabila menambahkan elemen baru maka dari rear (index 4) kemudian angka di index 3 akan bergeser ke index 2 dan di index 4 akan bergeser ke index 3, begitu seterusnya bila ingin memasukkan elemen lagi.
//4. kita menggunakan algoritma stack ketika ingin mengambil elemen terakhir yang dimasukkan itu merupakan elemen terakhir yang ingin dikeluarkan.
//algoritma stack adalah algoritma dimana LIFO last in first out yaitu pertama masuk pertama keluar seperti urutan pada kotak bola pingpong. Dimana bola pertama yang kita masukkan akan menjadi bola terakhir yang keluar.
//cara kerja algoritma ini yaitu push,pop dan top, dimana push untuk menambahkan/menyimpan elemen baru, pop untuk menghapus/mengeluarkan elemen atas dan top untuk elemen teratas.
//5. a. 5
//b. Inorder, yaitu dengan metode kiri ke akar dan ke kanan. pertama kita ke kiri terlebih dahulu untuk membaca nilainya. bila dikiri pohon kosong maka kembalikan apabila nilai yang dicari ada maka menggunakan fungsi untuk membaca subpohon.