#include <stdio.h>

int main(void) {
    float baris_1;
    float kolom_1;
    float baris_2;
    float kolom_2;
    int i, j,m,n, k; //i =baris; m = baris; j=kolom; n=kolom
    int matriks_1[10][10];
    int matriks_2[10][10];
    int jumlah[10][10];
    int kurang[10][10];
    int kali[10][10];
    int sum=0; 
    // determinan 
    float baris_d;
    float kolom_d;
    int a, b, det, det_a, det_b, det_c, det_d; //a=baris, b=kolom
    int matriks_d[10][10];

    // MATRIKS PERTAMA
    // memasukan jumlah baris dan kolom pada matrix 1
    printf("Masukkan jumlah baris matriks_1: ");
    scanf ("%f", &baris_1);
    if (baris_1 != (int)baris_1)
    {
        printf("Jumlah baris yang kamu masukkan salah, coba kembali!");
        return 1;
    }

    else {
    printf("Masukkan jumlah kolom matriks_1: ");
    scanf("%f", &kolom_1);
    if (kolom_1 != (int)kolom_1)
    {
        printf ("Jumlah kolom yang kamu masukkan salah, coba kembali!");
        return 1;
    }  
    }
    // end of memasukan jumlah baris dan kolom pada matriks 1 
    
    // memasukkan nilai pada masing2 baris dan kolom pada matriks 1
    printf("Masukkan nilai pada matriks_1");
    printf("\n");
    for ( i = 0; i < baris_1; i++)
    {
        for ( j = 0; j < kolom_1; j++)
        {
            printf("Masukkan Matriks_1 [%d][%d]: ", i+1, j+1);
            scanf("%3d", &matriks_1[i][j]);
        }
        
    }

    printf("Matriks_1 : ");
    printf("\n");
    for (i=0; i< baris_1; i++)
    {
        for (j=0; j<kolom_1; j++)
        {
            printf("%3d", matriks_1[i][j]);
        }
    printf("\n");
    }
    // end of memasukan nilai pada masing2 baris dan kolom pada matrix 1

    printf("\n");

    // MATRIX KEDUA
    // memasukkan jumlah baris dan kolom pada matrix 2
    printf("Masukkan jumlah baris matriks_2: ");
    scanf ("%f", &baris_2);
    if (baris_2 != (int)baris_2)
    {
        printf("Jumlah baris yang kamu masukkan salah, coba kembali!");
        return 1;
    }

    else {
    printf("Masukkan jumlah kolom matriks_2: ");
    scanf("%f", &kolom_2);
    if (kolom_2 != (int)kolom_2)
    {
        printf ("Jumlah kolom yang kamu masukkan salah, coba kembali!");
        return 1;
    }  
    }

    // cek apakah kolom dan baris pada matrix 1 dan 2 sama
    if((int)baris_1 != (int)baris_2 || (int)kolom_1 != (int)kolom_2) {
        printf("\n");
        printf ("Ordo Matrix 1 & 2 Tidak Sama. Ulangi!");
    }

    else {
    // memasukkan nilai pada masing2 baris dan kolom pada matrix 1
        printf("Masukkan nilai pada matriks_2");
        printf("\n");
        for (m = 0; m < baris_2; m++)
        {
            for (n = 0; n < kolom_2; n++)
            {
                printf("Masukkan Matriks_2 [%d][%d]: ", m+1, n+1);
                scanf("%3d", &matriks_2[m][n]);
            }
        }

        printf("Matriks_2 : ");
        printf("\n");
        for (m=0; m< baris_2; m++)
        {
            for (n=0; n<kolom_2; n++)
            {
                printf("%3d", matriks_2[m][n]);
            }
        printf("\n");
        printf("\n");
        }
    // end of memasukan nilai pada masing2 baris dan kolom pada matrix 1

    // PENJUMLAHAN KEDUA MATRIX

    printf("Hasil Penjumlahan kedua Matriks diatas:");
    printf("\n");

    matriks_2[m][n] = matriks_2[i][j];
    
    for ( i = 0; i < baris_1; i++)
    {
        for ( j = 0; j < kolom_1; j++)
        {
            jumlah[i][j] = matriks_1[i][j] + matriks_2[i][j];
            printf("%3d", jumlah[i][j]);
        }

        printf("\n");
        printf("\n");
        
    }

    // end of penjumlahan matrix

    // PENGURANGAN KEDUA MATRIX

    printf("Hasil Pengurangan Kedua Matriks diatas:");
    printf("\n");
    for ( i = 0; i < baris_1; i++)
    {
        for ( j = 0; j < kolom_1; j++)
        {
            kurang[i][j] = matriks_1[i][j] - matriks_2[i][j];
            printf("%3d", kurang[i][j]);
        }

        printf("\n");
        printf("\n");
    }

    //PERKALIAN MATRIX
        
    // perkalian 
    printf("Hasil perkalian Kedua Matriks diatas: ");
    printf("\n");
    for ( i = 0; i < baris_1; i++)
    {
        for ( j = 0; j < kolom_1; j++)
        {
            kali[i][j] = 0;
            for ( k = 0; k < kolom_1; k++)
            {
                kali[i][j] += matriks_1[i][k]*matriks_2[i][k];
            }
            
        } 
    }

    printf("\n");

        for ( i = 0; i < baris_1; i++)
        {
            for (j = 0; j < kolom_1; j++)
            {
                printf("%3d", kali[i][j]);
            }

            printf("\n");
            printf("\n");
        }

        // OPERASI DETERMINAN
    
    printf("\n");
    printf("------MASUK OPERASI DETERMINAN----------");
    printf("\n");
    
   // masukkan variabel baris dan kolom 
    printf("Masukkan jumlah baris matriks_d: ");
    scanf ("%f", &baris_d);
    if (baris_d != (int)baris_d)
    {
        printf("Jumlah baris yang kamu masukkan salah, coba kembali!");
        return 1;
    }

    else {
    printf("Masukkan jumlah kolom matriks_d: ");
    scanf("%f", &kolom_d);
    if (kolom_d != (int)kolom_d)
    {
        printf ("Jumlah kolom yang kamu masukkan salah, coba kembali!");
        return 1;
    }  
    }

    if ((int)baris_d > 3 && (int)kolom_d > 3)
    {
        printf("Jumlah baris & kolom tidak dapat dilakukan operasi Determinan");
    }

    else if ((int)baris_d == 1 && (int)kolom_d == 1){
        printf("Jumlah baris & kolom tidak dapat dilakukan operasi Determinan");
    }

    else if ((int)baris_d != (int)kolom_d ){
        printf("Jumlah baris & kolom tidak dapat dilakukan operasi Determinan");
    }


    // matrix terdeteksi ordo 2x2

    else if((int)baris_d == 2 && (int)kolom_d == 2) {
        printf("\n");
        printf("Operasi Determinan Ordo 2x2");
        printf("\n");
        printf("Masukkan nilai Matriks yang dingin dilakukan operasi determinan");
        printf("\n");

        for ( a = 0; a < baris_d; a++)
        {
            for ( b = 0; b < kolom_d; b++)
            {
                printf("Masukkan Matriks [%d][%d]: ", a+1, b+1);
                scanf("%3d", &matriks_d[a][b]);
            }
        }

        printf("Matriks Operasi Determinan : ");
        printf("\n");
        for (a=0; a< baris_d; a++)
        {
            for (b=0; b<kolom_d; b++)
            {
                printf("%3d", matriks_d[a][b]);
            }
        printf("\n");
        }

    // hasil operasi determinan matrix ordo 2x2
    det = matriks_d[0][0]*matriks_d[1][1] - matriks_d[0][1]*matriks_d[1][0];
    printf("Determinan:");
    printf("%3d", det);
    }

    // matrix terdeteksi ordo 3x3

    else if ((int)baris_d == 3 && (int)kolom_d == 3){
        printf("\n");
        printf("Operasi Determinan Ordo 3x3");
        printf("\n");
        printf("Masukkan nilai Matriks yang dingin dilakukan operasi determinan");
        printf("\n");

        for ( a = 0; a < baris_d; a++)
        {
            for ( b = 0; b < kolom_d; b++)
            {
                printf("Masukkan Matrix [%d][%d]: ", a+1, b+1);
                scanf("%3d", &matriks_d[a][b]);
            }
        }

        printf("Matrix Operasi Determinan : ");
        printf("\n");
        for (a=0; a< baris_d; a++)
        {
            for (b=0; b<kolom_d; b++)
            {
                printf("%3d", matriks_d[a][b]);
            }
        printf("\n");
        }

        // hasil operasi determinan matrix ordo 3x3
        det_a = matriks_d[1][1]*matriks_d[2][2] - matriks_d[1][2]*matriks_d[2][1];
        det_b = matriks_d[1][0]*matriks_d[2][2] - matriks_d[1][2]*matriks_d[2][0];
        det_c = matriks_d[1][0]*matriks_d[2][1] - matriks_d[2][0]*matriks_d[1][1];

        det_d = matriks_d[0][0]*det_a - matriks_d[0][1]*det_b + matriks_d[0][2]*det_c;
        printf ("Derterminan: ");
        printf ("%3d", det_d);
    }
    }
return 0;
}


// SUMBER 
// 1. https://wiearthabatch7.wordpress.com/2013/04/25/operasi-pada-matriks-ordo-2-x-2-menggunakan-bahasa-c/
// 2. https://www.ketutrare.com/2019/04/membuat-matrik-dengan-bahasa-c.html
// 3. https://kotakode.com/blogs/4513/Membuat-Matriks-dengan-Bahasa-C
// 4. https://www.kopicoding.com/perkalian-matriks-bahasa-c/
// 5. Yoshi Inne Herawati on YouTube
// 6. https://stackoverflow.com/
// ...