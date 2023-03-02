#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int main() {
    int i, *ptr;
    int vt[N];

    ptr = vt;
    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
        *(ptr + i) = 1 + rand()%100;
        printf("%d ", *(ptr + i));
    }
    return 0;
}