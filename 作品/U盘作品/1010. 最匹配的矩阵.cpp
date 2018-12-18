#include <stdio.h>
#include <stdlib.h>
 
#define MAX_INT ~((unsigned int)0) >> 1;
#define N 100
 
int a[N][N], b[N][N];
 
int main(void)
{
    int m, n, r, s, i, j;
 
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
 
    scanf("%d%d", &r, &s);
    for(i=0; i<r; i++)
        for(j=0; j<s; j++)
            scanf("%d", &b[i][j]);
 
    int drow, dcol, min;
    min = MAX_INT;
    for(i=0; i<m-r+1; i++)
        for(j=0; j<n-s+1; j++) {
            int k, l, sum;
            sum = 0;
            for(k=0; k<r; k++)
                for(l=0; l<s; l++)
                    sum += abs(a[i + k][j +l] - b[k][l]);
            if(sum < min) {
                drow = i, dcol = j;
                min = sum;
            }
        }
 
    for(i=0; i<r; i++) {
        for(j=0; j<s; j++)
            printf("%d ", a[drow + i][dcol + j]);
        printf("\n");
    }
 
    return 0;
}

