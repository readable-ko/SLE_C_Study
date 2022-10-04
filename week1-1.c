//검증수
//1주차 1번 문제.
//https://www.acmicpc.net/problem/2475
#include <stdio.h>
#define SQUARED(A) (A * A)
int main()
{
    int arr, answer = 0 ;

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr) ;
        answer = (answer + SQUARED(arr)) % 10 ;
    }
    
    printf("%d", answer) ;
}
