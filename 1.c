#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10], num, i=0, rem, rev=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The digits in the number are : \n");
    while(num!=0)
    {
        rem = num % 10;
        arr[i] = rem;
        rev = (rev * 10) + rem;
        i++;
        num = num / 10;
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%d \n",arr[j]);
    }
    printf("The number of digits are : %d\n", i);
    printf("The reverse of the number is : %d\n", rev);
    return 0;
}