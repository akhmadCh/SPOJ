#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int n, m;
    double hasil;

    // Perulangan while
    // Perulangan terus berjalan jika pengguna meinginputkan bilangan bulat n dan m dan
    // m + n tidak sama dengan 0
    while (scanf("%d %d", &n, &m) && (m + n) ){

        // Pengkondisian
        // Jika input n == 0, akan mengeksekusi code didalamnya
        if (n == 0){
            printf("1.000000\n");
        // Jika kondisi diatas tidak tereksekusi
        // maka kondisi kedua akan tereksekusi, input n > input m, akan mengeksekusi code didalamnya
        } else if (n > m){
            printf("0.000000\n");
        // Jika kedua kondisi diatas tidak tereksekusi
        } else {
            // Menghitung hasil dengan rumus probabilitas
            hasil = (double) (m - n + 1) / (m + 1);
            // Menampilkan output menggunakan format "%.lf"
            printf("%lf\n", hasil);
        }
    }

    return 0;
}