//오븐 시계
//https://www.acmicpc.net/problem/2525
//1주차 2번째 문제
#include <stdio.h>
int main()
{
    int hour, min, plus_min ;
    scanf("%d %d %d", &hour, &min, &plus_min) ;

    min += plus_min ;
    printf("%d %d", ((hour + (min / 60)) % 24), min % 60) ;
} 
