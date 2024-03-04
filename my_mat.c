#include "my_mat.h"
#include <stdio.h>
void PrintMatrix(int Matrix [10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d",Matrix[i][j]);
            printf(" ");

        }
        printf("\n");
    }
}
int min(int a,int b){
    return (a>b) ? b:a ;
}



void FloydWarshel(int mat[10][10]){
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(mat[i][j]!=0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
                if(i!=j && mat[i][j]==0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]=mat[i][k]+mat[k][j];
                }

            }
        }
    }

}
void CreateMatrix(int Matrix [10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    FloydWarshel(Matrix);
}
void IsTherePath(int Matrix [10][10] ,int StartNode,int EndNode)
{
    if(StartNode == EndNode)
    {
        printf("False");
        return;
    }
    if(Matrix[StartNode][EndNode] == 0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }

}
void ShortestPath(int Matrix [10][10],int StartNode,int EndNode)
{
    if(StartNode == EndNode)
    {
        printf("-1");
        return;
    }

    if(Matrix[StartNode][EndNode]==0)
    {
        printf("-1");
    }
    else
    {
         printf("%d",Matrix[StartNode][EndNode]);
    }


}
