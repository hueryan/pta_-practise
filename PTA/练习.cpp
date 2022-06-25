#include <stdio.h>

#define MAXN 20

int Delete( int A[], int L, int minA, int maxA );

int main()
{
    int A[MAXN], L, minA, maxA, i;

    scanf("%d", &L);
    for (i=0; i<L; i++) scanf("%d", &A[i]);
    scanf("%d %d", &minA, &maxA);
    L = Delete(A, L, minA, maxA);
    for (i=0; i<L; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
const int M = 1e6 + 10;

int ind;
int B[M];
int Delete( int A[], int L, int minA, int maxA ){
    for(int i = 0; i < L; i ++)
            if(!(A[i] > minA && A[i] < maxA)) B[ind++] = A[i];
    for(int i = 0; i <= ind; i ++) A[i] = B[i];
}
