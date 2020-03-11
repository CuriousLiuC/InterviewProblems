bool canThreePartsEqualSum(int* A, int ASize){
    int sum = 0;
    for(int i=0;i<ASize;i++)
    {
        sum += A[i];
    }
    sum /= 3;
    int temp = 0;
    int js = 0;
    for(int i=0;i<ASize;i++)
    {
        temp += A[i];
        if(temp==sum)
        {
            js++;
            temp = 0;
        }
    }
    if(js==3)
    {
        return true;
    }
    if(js>3&&sum==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}