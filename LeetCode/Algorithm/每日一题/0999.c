int numRookCaptures(char** board, int boardSize, int* boardColSize){
    int x,y;
    int flag = 0;
    for(int i=0;i<boardSize;i++)
    {
        for(int j=0;j<boardColSize[0];j++)
        {
            if(board[i][j]=='R')
            {
                x = i;
                y = j;
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    int count = 0;
    //上
    for(int k=x-1;k>=0;k--)
    {
        if(board[k][y]=='p')
        {
            count ++;
            break;
        }
        else if(board[k][y]=='.')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    //下
    for(int k=x+1;k<boardSize;k++)
    {
        if(board[k][y]=='p')
        {
            count ++;
            break;
        }
        else if(board[k][y]=='.')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    //左
    for(int k=y-1;k>=0;k--)
    {
        if(board[x][k]=='p')
        {
            count ++;
            break;
        }
        else if(board[x][k]=='.')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    //右
    for(int k=y+1;k<boardSize;k++)
    {
        if(board[x][k]=='p')
        {
            count ++;
            break;
        }
        else if(board[x][k]=='.')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return count;


}