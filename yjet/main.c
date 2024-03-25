#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
        printf("Vendos numrin e rreshtave: ");
        scanf("%d", &n);
        for (i=0; i<n; i++){
            for (j=0;j<n-i-1;j++){
                printf(" ");
            }
            for(j=0;j<i;j++){
                printf("*");
            }
        printf("\n");
        }
    return 0;
}
