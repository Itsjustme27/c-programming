//WAP to convert US dollars into Nepalese Rupees.
#include<stdio.h>

int main(){
    int us, rs;
    printf("Enter amount in US dollars: ", &us);
    scanf("%d", &us);
    rs = us * 132;
    printf("\n%d USD is equal to %d NPR.", us, rs);
    return 0;
}