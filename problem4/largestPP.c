/*
 *A palindromic number reads the same both ways.
 *The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

int isPalindrome(int numb)
{
    int buf, rev;

    buf = numb;
    rev = 0;
    while (buf / 10 > 0)
    {
        rev = rev * 10 + buf % 10;
        buf = buf / 10;
    }
    rev = rev * 10 + buf % 10;
    if (numb == rev)
    {
        return (1);
    }
    return (0);
}

int main()
{
    int first_3digit_num, second_3digit_num, res, pal;
    
    first_3digit_num = 999;
    second_3digit_num = 999;
    pal = 0;
    while (first_3digit_num >= 100)
    {
        if (second_3digit_num < 100)
        {
            first_3digit_num--;
            second_3digit_num = 999;
        }
        res = first_3digit_num * second_3digit_num;
        if (isPalindrome(res) && res > pal)
        {
            pal = res;
        }
        second_3digit_num--;
    }
    printf("%d\n", pal);
    return (0);
}