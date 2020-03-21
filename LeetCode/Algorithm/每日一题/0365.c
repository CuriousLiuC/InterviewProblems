int gcd(int x,int y)
{
    if(x==0&&y!=0)
    {
        return y; 
    }
    else if(x!=0&&y==0)
    {
        return x;
    }
    else if(x==0&&y==0)
    {
        return 0;
    }
    int big;
    int small;
    if(x==y)
    {
        return x;
    }
    else if(x>y)
    {
        big = x;
        small = y;
    }
    else if(x<y)
    {
        big = y;
        small = x;
    }
    int temp = -1;
    while(small!=0)
    {
        temp = big%small;
        big = small;
        small = temp;
    }
    return big;
}

bool canMeasureWater(int x, int y, int z){
    if(x+y<z)
    {
        return false;
    }

    int a = gcd(x,y);
    if(a==0&&z!=0)
    {
        return false;
    }
    if(a==0&&z==0)
    {
        return true;
    }
    if(z%a==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

