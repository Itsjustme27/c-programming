//WAP to convert US dollars into Nepalese Rupees.
#include<stdio.h>
#define rate 132
int main(){
    int us, rs;
    printf("Enter amount in US dollars: ");
    scanf("%d", &us);
    rs = us * rate;
    printf("\n%d USD is equal to %d NPR.", us, rs);
    return 0;
}