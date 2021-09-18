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


/* A NON-BRUTE FORCE APPROACH TO ARRAY MANIPULATION PROBLEM with a Complexity of O(n+m) */

int main(){
    int n, queries, index1, index2;
    long num, max;
    long *arr;
    scanf("%d %d", &n, &queries);
    n += 2;
    arr = (long*)malloc(sizeof(long)*n);
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < queries; i++){
        scanf("%d %d %li", &index1, &index2, &num);
        arr[index1] += num;
        arr[index2+1] -= num;
        
    }
    max = arr[1];
    for(int i = 1; i < n; i++){
        arr[i] = arr[i-1] + arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%li\n", max);
}
