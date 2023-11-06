#include<stdio.h>
#include<math.h>

int main(){
    
    // Deklarasi Variabel
    int panjang;
    float area;
    double PI = 3.14159265359;

    // Perulangan While yang bernilai true
    while (1)
    {
        // Input panjang
        printf("");
        scanf("%d", &panjang);

        // Jika input panjang bernilai nol, perulangan akan berakhir
        if (panjang == 0){
            break;
        }
        // Rumus menghitung area
        area = (panjang*panjang) / (2*PI);
        // Menampilkan output menggunakan format "%.2f"
        printf("%.2f\n", area);
    }

    return 0;
}