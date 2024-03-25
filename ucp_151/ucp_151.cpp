// 1. misal ada arr 0-4 yg tidak berurutan, langkah pertama kita lihat dulu apakah arr 0 itu lebih kecil atau lebih besar dari pada arr 1, kalo lebih besar kita tukar, untuk langkah berikutnya sama saja sampai kita uruutkan elemen tersebut dari kecil ke besar
// 2. misal ada arr 0-10, kita pilih elemen di dalam grup dan bikin list untuk mempermudah nya, sekitar ada 3 list yg dibuat, kita urutkan dari kecil ke besar dari setiap list tersebut,  terus kita gabungkan list tersebut dari kecil ke besar 
// 3. jika sudah berurutan akan disimpan ke dalam variabel dari yg terkecil hingga yg terbesar

#include <iostream>
using namespace std;

int fara[51];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 51)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + i) << ":";
        cin >> fara[i];
    }
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;

    for (int j = n - 2; j < n; j++) {
        cout << "Data ke-" << (j + 1) << ":";
        cin >> fara[n - 1];
    }
}

void shellsort() {
    for (int j = n - 2; j > 0; j = j / 2) {

    }
    if (arr[i] < arr[min_index]) {

    }
    temp = arr[i];
    arr[i] = arr[min_index]
        arr[min_index] = temp;



}
int main() {
    input();
    shellsort();
    display();
}


