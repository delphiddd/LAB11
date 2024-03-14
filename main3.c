#include <stdio.h>
#include "string.h"

int main(){
    FILE *fp;
    char hbd[30] , word[12];
    int count = 0;
    fp = fopen("hbd.txt" , "r");
    printf("Enret word: ");
    gets(word);
    while(!feof(fp)){
        fscanf(fp , "%s" ,hbd);
        if(strstr(hbd , word) != 0){
            count++;
        }
        printf("%s\n" , hbd);
    }
    printf("Number of \"%s\"  = %d" , word , count);
    fclose(fp);
}