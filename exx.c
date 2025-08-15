#include<stdio.h>
int z;
int i;
const int N = 10000000 + 1;
int sieve[N], B[N];
int gcd (int a, int b) {

    if (b)
        return gcd(b, a % b);
    else
        return a;
}


int main() {
    printf("0");
    
    int j;
    sieve[1] = 1;
    for (i = 2; i*i < N; i++) {

        if(sieve[i] == 0) {
            for (j = i*i; j < N; j += i) {

                if (sieve[j] == 0) {
                    sieve[j] = i;
                }
            }
            
        }

    }

    B[1] = 0;
    for (i = 2; i < N; i++) {
        B[i] = (sieve[i] == 0) ? B[i - 1] + 1 : B[i - 1];
        if(sieve[i] == 0)
            sieve[i] = i;
    }

    scanf("%d", &z);
    while (z--) {

        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d %d %d\n", B[b] - B[a - 1], sieve[a], sieve[b]);
        


    }
        
