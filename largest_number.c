#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter The value Of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum += 2 * i - 1; 
    }

    printf("The Sum Of The First %d Odd Numbers Is %d\n", n, sum);
    printf("Value Of n^2 Is %d\n \n", n * n);

    if (sum == n * n) 
    {
        printf("The Sum Of The First n Odd Numbers Is Equal To n^2.\n");
    } 
    else 
    {
        printf("The sum of the first n odd numbers is NOT Equal To n^2.\n");
    }

    return 0;
}
