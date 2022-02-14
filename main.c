#include <stdio.h>

void main(){

    int i,l,c,s,star,lin;
    // i = Input
    // l = baris
    // c = kolom
    // s = spasi
    // lin = line Inverse

    printf("Tingginya(max 8):");
    scanf(" %d", &i);

        lin = 1;
        for (l = i; l >= 1; l--) { //dimulai dengan baris teratas
            for(c = 1; c <= i; c++) { //mengulangi pola sejumlah i

                if (c < l) { //apakah ada bintang yang dibutuhkan dalam baris ini, jika tidak maka akan mencetak spasi
                    for (s = 1; s <= i; s++) {
                        printf(" ");
                    }
                } else { //berapa banyak spasi dalam baris ini dan berapa banyak bintang
                    for (s = 1; s <= (i-lin); s++) {
                        printf(" ");
                    }

                    for (star = 1; star <= lin; star++) {
                        printf("*");
                    }

                }
                printf(" "); //satu spasi diantara beberapa kolom
            }
            printf("\n");

            lin++;
        }
    }
