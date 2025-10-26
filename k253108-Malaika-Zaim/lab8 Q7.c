#include <stdio.h>
int main() {
    int begin, end, i, j, isPrime;
    printf("Enter beginning number: ");
    scanf("%d", &begin);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("\nPrime numbers between %d and %d are:\n", begin, end);
    for(i=begin; i<=end; i++){
        if(i<2)
            continue;
        isPrime = 1;
        for(j=2; j<i; j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

