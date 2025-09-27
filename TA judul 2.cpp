#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int harga;
};

void insertionSort(Barang arr[], int n) {
    for (int i = 1; i < n; i++) {
        Barang temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].harga > temp.harga) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    Barang daftar[n];
    for (int i = 0; i < n; i++) {
        cout << "Nama barang ke-" << i+1 << " : ";
        cin >> daftar[i].nama;
        cout << "Harga barang ke-" << i+1 << " : ";
        cin >> daftar[i].harga;
    }

    insertionSort(daftar, n);

    cout << "\nDaftar barang setelah diurutkan berdasarkan harga (murah -> mahal):\n";
    for (int i = 0; i < n; i++) {
        cout << daftar[i].nama << " - Rp" << daftar[i].harga << endl;
    }

    return 0;
}
