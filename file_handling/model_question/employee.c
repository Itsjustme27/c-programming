#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    FILE *p;
    FILE *q;
    int choice;
    int id[10], age[10],m,i;
    char name[10];
    printf("------My Workplace-------\n");
    printf("Choose:\n");
    printf("1.Create a office record\n 2.Display your office record\n 3.Copy record to existing file(gratuity.txt)\n");
    printf("Your option: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            p = fopen("office.txt", "w");
            printf("Enter range:\n ");
            scanf("%d", &m);
            printf("Enter employee ID, age and name: ");
            for(i = 0; i < m; i++){
                scanf("%d%d%s", &id[i], &age[i], name);
            }
            for(i = 0; i < m; i++)
                fprintf(p,"%d %d  %s \n", id[i], age[i], name);
            fclose(p);
            break;
        case 2:
            p = fopen( "office.txt","r" );
            printf("The data are: ");
            for(i = 0; i <  m ; i++ ){
                if(strlwr(name) == 'a')
                    fscanf(p, "%d %d %s", &id[i], &age[i], name);
            }
            for(i = 0; i < m; i++){
                printf("ID: %d Age: %d Name: %s", id[i], age[i], name);
            }
            fclose(p);
            break;
        case 3:
            p = fopen("office.txt", "r");
            q = fopen("gratuity.txt", "w");
            for(i = 0; i < m; i++){
                if(age[i] > 60){
                    fprintf(q, "%d %d\n", id[i], age[i]);
                    
                }
            }
            fclose(q);
            printf("\nGratuity list is saved in gratuity.txt\n");
            break;
        default :
            printf("Invalid choice.\n");
    }
}