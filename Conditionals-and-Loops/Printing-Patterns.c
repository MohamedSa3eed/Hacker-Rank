#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = 2*n -1;
    for(int row =0 ;row <len ;row ++)
    {
        for(int col =0 ; col<len ; col ++)
        {
            int x = row > col ? col : row ;
            x     = x > len-1-row ? len-1-row : x ;
            x     = x > len-1-col ? len-1-col : x ;
            printf("%d ",n-x);
        }
        printf("\n");
    }

    return 0;
}
