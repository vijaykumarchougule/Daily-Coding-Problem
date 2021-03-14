// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

#include <stdio.h>
//Functio Declaration
int CheckConditon(int a[], int k, int n)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];
            if (sum == k)
            {
                ans = 1;
                break;
            }
            sum = 0;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    int a[100];
    printf("Enter the number That has to check(k): ");
    scanf("%d", &k);
    printf("\nEnter the number of ArrayElements:");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEntered Array elements are: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");

    //Pass the array and element to check
    int value = CheckConditon(a, k, n);

    if (value == 1)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }

    return 0;
}