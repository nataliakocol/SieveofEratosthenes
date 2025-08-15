#include<stdio.h>
int z;
int i;
const int N = 10000000 + 1; //or #define N 100...
int sieve[N], B[N];
int gcd (int a, int b) {

    if (b)
        return gcd(b, a % b);
    else
        return a;
}


int main() {
    printf("0");
    //return 0;
    

//}
    
//// works for smallest prime gcd
    int j;
    sieve[1] = 1;
    for (i = 2; i*i < N; i++) {

        if(sieve[i] == 0) {
            for (j = i*i; j < N; j += i) {

                if (sieve[j] == 0) {
                    sieve[j] = i;
                }
            }
           // sieve[i] = i;
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
        //or for (i = 0...



    }
        
//        int n, j, prime = 1;
//        scanf("%d", &n);
//
//        for (j = 2; j*j <= n; j++) {
//
//            if (n % j == 0) {
//
//                printf("%d jest liczba zlozona\n", n);
//                prime = 0;
//                break;
//            }
//        }
//
//        if (prime == 1)
//            printf("%d jest liczba pierwsza\n", n);
    
    
//    scanf("%d", &z);
//    while (z--) {
//
//        int a, b;
//        int t;
//        scanf("%d &d", &a, &b);
//
//        printf("%d %d\n", a, b);
//
//        while (b) {
//
//            t = b;
//            b = a % b;
//            a = t;
//
//        }
//        printf("%d\n", a);
//        printf("%d\n", gcd(a, b));
//
//
//    }
//    return 0;
}
