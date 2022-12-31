#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}
int combination(int n, int r)
{
    return permutation(n, r) / fact(r);
}
int main()
{
    int n, r;
    printf("Enter the value of n & r: ");
    scanf("%d %d", &n, &r);
    printf("Permutation:%d\nCombination:%d\n", permutation(n, r), combination(n, r));
    return 0;
}
// Enter the value of n & r: 10 4
// Permutation:5040
// Combination:210
