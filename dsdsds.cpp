bool check(int i,int k,int sum,int arr[],int n)
{
    if(i==n)
    {
        if(sum==k)
        {
            return true;
        }
        return false;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        check(i+1,k,sum,arr,n);
    }
}