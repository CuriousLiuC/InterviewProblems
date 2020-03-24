#include <algorithm>
#include <cstdlib>
int surfaceArea(int** grid, int gridSize, int* gridColSize){
    int sum = 0;
    for(int i=0;i<gridSize;i++)
    {
        for(int j=0;j<gridColSize[i];j++)
        {
            if(grid[i][j]!=0)
            {
                sum +=  grid[i][j]*4 + 2;//四个面方向上
            }
            if(j<gridSize-1)
            {
                if(grid[i][j]<grid[i][j+1])
                {
                    sum -= grid[i][j]*2;
                }
                else
                {
                    sum -= grid[i][j+1]*2;
                }
//                sum -= min(grid[i][j],grid[i][j+1])*2;//前后
            }
            if(i<gridSize-1)
            {
                if(grid[i][j]<grid[i+1][j])
                {
                    sum -= grid[i][j]*2;
                }
                else
                {
                    sum -= grid[i+1][j]*2;
                }
            }
        }
    }
    return sum;
}