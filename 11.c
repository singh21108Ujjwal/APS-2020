#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countIslands(int M[][]);

int isSafe(int M[][], int row, int col, bool visited[][])
{
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL) &&
           (M[row][col] && !visited[row][col]);
}

void DFS(int M[][], int row, int col, bool visited[][])
{
    static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};

    visited[row][col] = true;
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) )
            DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}

int countIslands(int M[][])
{ bool visited[][];
    memset(visited, 0, sizeof(visited));
    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (M[i][j] && !visited[i][j])
            {
                DFS(M, i, j, visited);
                ++count;
            }

    return count;
}

// Driver program to test above function
int main()
{int n;
    int M[n][n],i,j;
    printf("enter the row for square matrix\n");
    scanf("%d",&n);
    if(n>=0 && n<=20)
    {for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }}
        countIslands(M);

         printf("Number of islands is: %d\n", countIslands(M));
    }



    return 0;
}
