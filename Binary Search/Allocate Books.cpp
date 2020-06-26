#define ll long long
bool isValid(vector<int> &books,int n,int k,ll mid)
{
    int student=1;
    ll pages=0;
    for(int i=0;i<n;)
    {
        if(pages+(ll)books[i]>mid)
        {
            pages=0;
            student++;
            if(student>k)
            return false;
        }
        else
        {
            pages+=(ll)books[i];
            i++;
        }
    }
    return true;
}
int Solution::books(vector<int> &books, int k) {
    int n=books.size();
    if(n<k)
    return -1;
    ll sum=0;
    ll s=0,e=0;
    for(int i=0;i<n;i++)
    {
        sum+=books[i];
        s=max(s,(ll)books[i]);
    }
    e=sum;
    ll ans=INT_MAX;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(isValid(books,n,k,mid))
        {
            ans=min(ans,mid);
            e=mid-1;
        }
        else
        s=mid+1;
    }
    
    return ans;
    
}
