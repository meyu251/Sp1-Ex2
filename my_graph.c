#include <stdio.h>
#include "my_mat.h"
int main() {
    char choose;
    scanf("%c",&choose);
    int mat [10][10];
    int d1,d2;
    while(choose!='D' && choose!='EOF'){
        if(choose=='A'){
            CreateMatrix(mat);
        }
        else if(choose=='B'){
            scanf("%d %d",&d1,&d2);
            IsTherePath(mat,d1,d2);
            printf("\n");
        }
        else if(choose=='C'){
            scanf("%d %d",&d1,&d2);
            ShortestPath(mat,d1,d2);
            printf("\n");

        }
        scanf("%c",&choose);
    }
}