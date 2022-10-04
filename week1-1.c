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
