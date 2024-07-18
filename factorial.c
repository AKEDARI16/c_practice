
#include <stdio.h>


int findFactorial(int num)
{
    int temp = 1;
    while(num)
    {
        temp = num * temp;
        num--;
    }
    printf(" \n The factorial of given number is : %d\n",temp);
}



int main()
{
    int num = 7;
    findFactorial(num);
    return 0;
}










