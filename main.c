#include <stdio.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    int num1 , num2 , num3;
    fp1 = fopen("datanum1.txt" , "r");
    fp2 = fopen("datanum2.txt" , "r");
    fp3 = fopen("datasum.txt" , "w");
    fprintf(fp3, "num1 num2 sum\n");
    printf("num1 num2 sum\n");
    while(!feof(fp1) && !feof(fp2)){
        fscanf(fp1 , "%d" , &num1);
        fscanf(fp2 , "%d" , &num2);
        num3 = num1 + num2;
        fprintf(fp3 , "%-3d %-3d %-3d\n", num1, num2, num3);
        printf("%-3d  %-3d  %-3d\n" , num1 , num2 ,num3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}