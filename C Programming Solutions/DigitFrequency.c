/* solving code with O(n) + O(n) */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10] = {};
    char s[1000];
    scanf("%s", &s);
    int len = strlen(s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    for(int i = 0; i < len; i++){
        if(s[i] == '0'){
            arr[0] += 1;
        }else if(s[i] == '1'){
            arr[1] += 1;
        }else if(s[i] == '2'){
            arr[2] += 1;
        }else if(s[i] == '3'){
            arr[3] += 1;
        }else if(s[i] == '4'){
            arr[4] += 1;
        }else if(s[i] == '5'){
            arr[5] += 1;
        }else if(s[i] == '6'){
            arr[6] += 1;
        }else if(s[i] == '7'){
            arr[7] += 1;
        }else if(s[i] == '8'){
            arr[8] += 1;
        }else if(s[i] == '9'){
            arr[9] += 1;
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
