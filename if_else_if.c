#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 80){
        printf("You secured Distinction!");
    }else if (marks >= 70 && marks <= 80){
        printf("You scored First Division!");
    }else if (marks >= 50 && marks <= 70){
        printf("You scored Second Division");
    }else{
        printf("You did not pass the exam! Get Good! Skill Issue!");
    }
    return 0;
    
}