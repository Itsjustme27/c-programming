#include <stdio.h>
int sum(int s);
int main() {
    int s;
    printf("\n sum=%d",sum(s));
    return 0;
}

int sum( int s){
    int i,add=0;
    for(i=1;i<=10;i++){
        add=add+i;
    }
    return add;
}