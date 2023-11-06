#include<stdio.h>
#include<math.h> // Header math.h yang berisikan operasi-operasi matematika

int main(){

    // Deklarasi variabel
    int nilai;
    float hasil;
    int i = 1;
    
    // Perulangan akan terus berjalan selama input != 0
    while(1){
        
        // Input
        printf("");
        scanf("%d", &nilai);

        // Pernyataan if pertama, memeriksa apakah input nilai == 0
        if (nilai == 0){
            // Jika input nilai == 0, perulangan akan berhenti atau break
            break;
        } else {
            // Menambahkan 1 nilai ke nilai input, nilai ini akan terus bertambah didalam perulangan
            nilai += 1;
            /* 
            Penjumlahan menggunakan rumus pentagonal number
            Di dalam rumus, menggunakan fungsi pow yang berfungsi 
            untuk mendapatkan nilai kuadrat dari variabel nilai 
            Lalu hasil penjumlahan tersebut disimpan ke variabel hasil
            */
            hasil = (3 * pow(nilai, 2) - nilai) / (float) 2;
            // Menampilkan output mengguanakan format "%.0f"
            printf("%.0f\n", hasil);
        }

        /*
        Menambahkan 1 nilai ke variabel i 
        digunakan untuk menghitung jumlah iterasi perulangan 
        dan nilai i akan ditambahkan 1 setiap iterasi
        */
        i++;
    }

    return 0;
}