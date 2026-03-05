#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n; //deklarasi variabel global n untuk menyimpan banyakya elemen

void input(){ //prosedur untuk input
    while (true){
        cout << "Masukkan banyaknya elemen pada array : "; //output ke layar
        cin >> n; //input dari pengguna 
        if(n <= 20) //jika n kurang dari atau sama dengan 20
            break; //keluar dari loop
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
        }
    }
    cout << endl;
    cout << "=========================" << endl;
    cout << "Masukkan lemen array" << endl;
    cout << "=========================" << endl;

    for (int i=0; 1 < n; i++){
        cout << "Data ke- " << (i+1) << ": "; //output menampilkan data ke-
        cin >> arr[i]; //input dari pengguna
    }
}

void bubbleSortArray(){ //prosedur untuk mengurutkan array 
    int pass = 1; //step 1

    do{
        for (int j=0; j <= n-1-pass; j++){ //step 2 integer j sama dengan nol; j lebih kecil atau sama dengan n dikurangi satu dikurangi pass; j bertambah satu setiap perulangan
            if (arr[j] > arr[j + 1]) { // step 3 Jika nilai array pada indeks j lebih besar dari nilai array pada indeks j tambah satu
                int temp;
                temp = arr[j];
                arr[j] = arr [j=1];
                arr[j+1] = temp;                    
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass " << pass - 1 << ": "; //number of pass
            
        } 
    }
}