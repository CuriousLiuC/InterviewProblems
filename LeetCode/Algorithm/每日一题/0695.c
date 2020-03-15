
int count = 0;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void dfs(int x,int y,int **grid,int gridSize,int *gridColSize)
{
    count ++;
    for(int i=0;i<4;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0&&nx<gridSize&&ny>=0&&ny<gridColSize[0]&&grid[nx][ny]==1)
        {
            grid[nx][ny] = 2;
            dfs(nx,ny,grid,gridSize,gridColSize);
        }
    }
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
//疑问：gridColSize这个参数是干什么用的， 题目相对C语言好像没有明确给出。    
    int maxcount = 0;
    for(int i=0;i<gridSize;i++)
    {
        for(int j=0;j<gridColSize[0];j++)
        {
            if(grid[i][j]==1)
            {
                count = 0;
                grid[i][j] = 2;
                dfs(i,j,grid,gridSize,gridColSize);
                if(count > maxcount)
                {
                    maxcount = count;
                }
                //printf("%d\n",count);
            }
        }
    }
    return maxcount;
}