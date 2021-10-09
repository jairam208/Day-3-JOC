#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, sum=0, rem;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num/10!=0)
    {
        sum=0;
        while(num!=0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        printf("The sum of the digits is : %d\n", sum);
        if(sum>=10)
        {
            num = sum;
        }
        else
        {
            exit(0);
        }
    }
    printf("The sum of the digit is : %d\n",sum);
    return 0;
}