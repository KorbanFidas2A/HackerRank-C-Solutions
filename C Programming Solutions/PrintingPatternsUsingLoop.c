#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, checker, batas_belakang, batas_depan, pengurang;
    int simpan_nilai = n;
    batas_depan = 1;
    scanf("%d", &n);
    checker = 2*(n-1)+1;
    batas_belakang = checker;
    pengurang = 0;
    if(checker == 1){
        printf("%d\n", 1);
    }else{
        for(int i = 1; i <= checker; i++){
            simpan_nilai = n;
            for(int j = 1; j <= checker; j++){
                if((j >= batas_depan) && (j <= batas_belakang)){
                    printf("%d ", simpan_nilai);
                    if(j == batas_belakang){
                        simpan_nilai = simpan_nilai + 1;
                    }
                }else if(j < batas_depan){
                    printf("%d ", simpan_nilai);
                    simpan_nilai = simpan_nilai - 1;
                }else if(j > batas_belakang){
                    printf("%d ", simpan_nilai);
                    simpan_nilai = simpan_nilai + 1;
                }
            }
            if(i <= floor(checker/2)){
                batas_depan = batas_depan + 1;
                batas_belakang = batas_belakang -1;
            }else{
                batas_depan = batas_depan - 1;
                batas_belakang = batas_belakang + 1;
            }
            printf("\n");
        }
    
    }
  	// Complete the code to print the pattern.
    return 0;
}
