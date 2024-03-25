#include <stdio.h>

int main()
{
    int piket;
    printf("Vendosni piket:");
    scanf("%d", &piket);
    int shifra_e_pare=piket/10;
    switch(shifra_e_pare){
    case 10:
        printf("Nota A\n");
        break;

    case 9:
        printf("Nota A\n");
        break;

    case 8:
        printf("Nota B\n");
        break;

    case 7:
        printf("Nota C\n");
        break;

    case 6:
        printf("Nota D\n");
        break;

    default:
        printf("Nota F\n");
        break;
    }

    return 0;



}
