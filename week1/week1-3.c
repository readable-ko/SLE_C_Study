//별찍기 - 8
//https://www.acmicpc.net/problem/2445
//1주차 3번 문제
#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input) ;
    int input_mul = input * 2 ;

    for(int i = 1 ; i <= input ; i++)
    {
        for(int j = 1 ; j <= input_mul ; j++)
        {
            if(j <= i || j > input_mul - i) printf("*") ;
            else printf(" ") ;
        }
        printf("\n");
    }

    for(int i = input - 1 ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= input_mul ; j++)
        {
            if(j <= i || j > input_mul - i) printf("*") ;
            else printf(" ") ;
        }
        printf("\n");
    }
}
