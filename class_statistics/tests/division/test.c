#include <stdio.h>

void main() {
    int average_marks, division;
    scanf("%d", &average_marks);
    if (average_marks >= 60){
        division = 1;
    }else if (average_marks >= 40) {
        division = 2;
    }else{
        division = 3;
    }

    printf("%d Passed with Division %d", average_marks, division);
}