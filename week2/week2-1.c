#include <stdio.h>
#define MIN(A, B) ((A < B) ? (A) : (B))
#define ABS(A) (A < 0 ? A*(-1) : A)
int main()
{
  int x, y, w, h, answer[2] ;
  scanf("%d %d %d %d", &x, &y, &w, &h) ;

  answer[0] = MIN(ABS(w - x), x) ;
  answer[1] = MIN(ABS(h - y), y) ;
  
  printf("%d", MIN(answer[0], answer[1])) ;
}
