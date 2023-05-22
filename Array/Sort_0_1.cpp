void sortZeroesAndOne(int *input, int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]==0)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        input[i]=0;
    }
    for(int i=count;i<size;i++)
    {
        input[i]=1;
    }
}