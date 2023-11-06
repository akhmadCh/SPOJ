#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int n, m;
    int i, j;
    int batas;
    
    // Input batas
    printf("");
    scanf("%d", &batas);

    // Perulangan
    // Perulangan akan terus berjalan jika i belum mencapai batas
    for (i = 1; i <= batas; i++){
        // Input nilai n dan m
        printf("");
        scanf("%d", &n);
        scanf("%d", &m);

        // Nested if
        // Pernyataan if pertama, n > m, akan memeriksa apakah nilai input n > m
        if (n > m){
            // Pernyataan if kedua, memeriksa apakah nilai sisa bagi m = 0
            if (m % 2 == 0)
                // Menampilkan output U atau Under
                printf("U\n");
            // Jika nilai sisa bagi m != 0
            else 
                // Menampilkan output D atau Down
                printf("D\n");
            }
            // d
            else {
            // Pernyataan if ketiga, memeriksa apakah nilai sisa bagi n == 0
            if (n % 2 == 0){
                // Menampilkan output L atau left
                printf("L\n");
            // Jika nilai sisa bagi n!= 0
            } else 
                // Menampilkan output R atau right
                printf("R\n");
        }
    }

    return 0;
}