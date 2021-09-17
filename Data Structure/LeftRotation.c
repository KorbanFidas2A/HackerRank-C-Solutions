#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* [1,2,3,4,5]
 [3,4,5,1,2]
 8 mod 5 = 3 ;
 kalau belum tau angka depannya gimana?
 
 ----
 -- pertama cari yang di belakangnya itu, itukan 4 ama 5... nah index nya + 1 jadi
 total semuanya dikurangin index misal , 4 - 2 = 2; 0 + 1,,, 
 4 5 1 2 3
 
 kalau sudah tau angka depannya
 i_new = 0
 i_new += 1
 buat yang 1 (length-i)
 i = 0;  1 ditaro di belakang */
 
int main(){
    int i_new, panjang, rotasi, nilai, i_new2;
    i_new = 0;
    int *array_old;
    int *array_new;
    bool flag = true;
    scanf("%d %d", &panjang, &rotasi);
    array_old = (int*)malloc(sizeof(int)*panjang);
    for(int j = 0; j < panjang; j++){
        scanf("%d", &nilai);
        array_old[j] = nilai;
    }
    array_new = (int*)malloc(sizeof(int)*panjang);
    rotasi = rotasi % panjang;
    i_new2 = ((panjang-1) - rotasi)+1;
    for(int i = 0; i < panjang; i++){
        if(i != rotasi && flag){
            array_new[i_new2] = array_old[i];
            i_new2 += 1;
        }else if(i == rotasi){
            flag = false;
            array_new[i_new] = array_old[i];
            i_new += 1;
        }else{
            array_new[i_new] = array_old[i];
            i_new += 1;
        }
    }
    for(int z = 0; z < panjang; z++){
        printf("%d ", array_new[z]);
    }
}
