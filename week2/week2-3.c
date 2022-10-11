#include <stdio.h>

int main()
{
  int x ;
  scanf("%d", &x) ;

  for(int i = x ; i >= 1 ; i--)
  {
    for(int j = 1 ; j <= x * 2 - i ; j++)
    {
      if(i == 1) printf("*");
      else if(j == i || j == (2 * x) - i) printf("*") ;
      else printf(" ");
    }
    printf("\n") ;
  }
  
}
