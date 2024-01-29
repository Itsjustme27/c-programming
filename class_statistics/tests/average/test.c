// test for average
#include <stdio.h>
#include <math.h>

void main()
{
    int total_stud = 0, marks_total, marks[6], avg_marks, roll_no, division, i,j, sub_avg[6], total_sub[6];
    printf("Enter roll and marks: ");
    while (scanf("%d", &roll_no) != EOF)
    {
        for (i = 0; i <= 5; ++i)
            scanf("%d", &marks[i]);
        ++total_stud;
        marks_total = 0;
        for (i = 0; i <= 5; ++i)
            marks_total += marks[i];
        avg_marks = (float)marks_total / 6.0 + 0.5;
        if(avg_marks >= 60){
            division = 1;
        }else if (avg_marks >= 40){
            division = 2;
        }else{
            division = 3;
        }
        printf("\nRoll No.: %d\t", roll_no);
        printf("Marks: ");
        for (i = 0 ; i<=5; ++i)
            printf(" %d ", marks[i]);
        printf("Total Marks: %d\t", marks_total);
        printf("Average: %d", avg_marks);
        if (division == 0){
            printf(" Division: F");
        }else{
            printf("\tRoll no: %d secured Division %d", roll_no, division);
        }
    break;

    }
        for (i = 0; i <= 5; ++i){

            sub_avg[i] = total_sub[i] / total_stud;
            printf("          Phys  Chem  Math");
            printf("  T.A. E.S. H.S.\n");
            printf("Averages   : ");
            printf("    %4d %5d %5d %5d %5d %5d\n", sub_avg[0],sub_avg[1],sub_avg[2],sub_avg[3],sub_avg[4],sub_avg[5]);
        
    }
}