#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N) ;
    int stair, number, chung, bang, son;
    
    for(int i = 0; i < N; i++) {
        scanf("%d %d %d", &chung, &bang, &son);
        stair = son % chung;
        if(stair == 0) printf("%d", chung);
        else printf("%d", stair);
        
        number = ceil((double)son / chung);
        if(number >= 10)
            printf("%d\n", number) ;
        else printf("0%d\n", number) ;
    }
}
