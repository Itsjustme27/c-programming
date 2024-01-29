#include <stdio.h>

void main() {
    int sub_avg[6], total_sub[6], total_students,i;
    for (i = 0; i <= 5; ++i){
        total_students = 0;
        printf("Enter marks of subject %d : ", i+1);
        scanf("%d", &total_sub[i]);
        sub_avg[i] = total_sub[i] / total_students;
        printf("          Phys  Chem  Math");
        printf("  T.A. E.S. H.S.\n");
        printf("Averages   : ");
        printf("    %4d %5d %5d %5d %5d %5d\n", sub_avg[0],sub_avg[1],sub_avg[2],sub_avg[3],sub_avg[4],sub_avg[5]);
        
    }
}