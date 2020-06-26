#define ll long long
bool isValid(vector<int> &C,int n,int k,ll mid)
{
    int painter=1;
    ll sum=0;
    for(int i=0;i<n;)
    {
        if(sum+(ll)C[i]>mid)
        {
            sum=0;
            painter++;
            if(painter>k)
            return false;
        }
        else
        {
            sum+=(ll)C[i];
            i++;
        }
    }
    return true;
}
int Solution::paint(int k, int T, vector<int> &C) {
    int n=C.size();
    
    ll sum=0;
    ll s=0,e=0;
    for(int i=0;i<n;i++)
    {
        sum+=C[i];
        s=max(s,(ll)C[i]);
    }
    e=sum;
    ll ans=INT_MAX;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(isValid(C,n,k,mid))
        {
            ans=min(ans,mid);
            e=mid-1;
        }
        else
        s=mid+1;
    }
    
    return (ans*(ll)T)%10000003;
    
}
