#include <stdio.h>

int NumberOfPossiblePair(int n)
{
    int Pairs = 0;
    if(n == 1 || n == 0)
    {
        return n;
    }
    Pairs += NumberOfPossiblePair(n-1);
    return(Pairs+ n);
}
int main()
{
    printf("Number of possible pairs : %d\n",NumberOfPossiblePair(5));
    return 0;
}
