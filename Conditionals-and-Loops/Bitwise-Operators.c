#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
int maxAnd=0,maxOr=0,maxXor=0;
for(int i = 1 ; i<n;i++)
    {
        int and , or , xor ;
        for ( int j =i+1;j<=n;j++ )
        {
            and = i&j;
            or = i|j;
            xor= i^j;
            if(and > maxAnd && and < k)
                maxAnd = and ;
            if(or > maxOr && or < k)
                maxOr =or ;
            if(xor>maxXor && xor<k)
                maxXor =xor ;
                
        }
    }
    printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
 
    return 0;
}
