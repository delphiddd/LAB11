#include <stdio.h>
#include "string.h"

int main(){
    FILE *fp;
    char name[20] , id[20] , grade[3] , grade_student[3];
    int count = 0;
    fp = fopen("gradecompro.txt" , "r");
    printf("Enret grade: ");
    gets(grade_student);
    while(!feof(fp)){
        fscanf(fp , "%s %s %s" , name , id , grade);
        if(strcmp(grade , grade_student) == 0){
            printf("%s , %s , %s\n" , id , name , grade);
            count++;
        };
    }
    printf("Number of %s = %d\n" , grade_student ,count);
    fclose(fp);
}