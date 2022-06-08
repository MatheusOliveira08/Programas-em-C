#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int fatoriais[] = {1 , 2 , 6 , 24 , 120 , 720 , 5040, 40320};
    
    int i, x = 0;

    for (i = 7; i >= 0; i--) {
        x += n / fatoriais[i];

        n = n % fatoriais[i];

    }

    printf("%d", x);

    return 0;
}