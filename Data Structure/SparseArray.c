int main(){
    char name[1000][20];
    char queries[1000][20];
    int array_length, query, sum, strc;
    scanf("%d", &array_length);
    for(int i = 0; i < array_length; i++){
        scanf("%s", name[i]);
    }
    scanf("%d", &query);
    for(int k = 0; k < query; k++){
        scanf("%s", queries[k]);
    }
    sum = 0;
    for(int h = 0; h < query; h++){
        sum = 0;
        for(int j = 0; j < array_length; j++){
            strc = strcmp(queries[h], name[j]);
            if(strc == 0){
                sum += 1;
            }
        }
        printf("%d\n", sum);
    }
}
