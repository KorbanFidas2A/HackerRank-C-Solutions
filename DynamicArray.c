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


int main(){
    int **arr;
    int panjang_array, jumlahQuery, isQuery;
    int x, y, idx;
    int tambah_array = 0;
    int lastAnswer = 0;
    int *arr2;
    idx = 0;
    scanf("%d %d", &panjang_array, &jumlahQuery);
    arr2 = (int*)malloc(sizeof(int)*panjang_array);
    for(int j = 0; j < panjang_array; j++){
        arr2[j] = 0;
    }
    arr = (int**)malloc(sizeof(int*)*panjang_array);
    for(int k = 0; k < panjang_array; k++){
        arr[k] = (int*)malloc(sizeof(int));
    }
    for(int i = 0; i < jumlahQuery; i++){
        scanf("%d %d %d", &isQuery, &x, &y);
        if(isQuery == 1){
            idx = ((x ^ lastAnswer) % panjang_array);
            arr2[idx] += 1;
            tambah_array = arr2[idx];
            arr[idx] = realloc(arr[idx], tambah_array*sizeof(int));
            arr[idx][tambah_array-1] = y;
        }else{
            idx = ((x ^ lastAnswer) % panjang_array);
            lastAnswer = arr[idx][y % arr2[idx]];
            printf("%d\n", lastAnswer);
        }
    }
}
