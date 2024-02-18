//frequency of a character
#include <stdio.h>
#include <string.h>
int main()
{
    char c[10], freqChar;
    int count = 0;
    
    printf("Enter a string: ");
    fgets(c, sizeof(c), stdin);
    printf("Enter a character: ");
    scanf("%c", &freqChar);
    
    for(int i = 0; c[i] != '\o'; i++){
        if(c[i] == freqChar){
            count++;
        }
    }
    
    printf("The frequency of the character %c is %d", freqChar, count);
    return 0;
}
