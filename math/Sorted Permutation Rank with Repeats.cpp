#define mod 1000003
long long power(long long a,long long b)
{
    if(a==0)
    return 0;
    if(b==0)
    return 1;
    long res;
    if(b%2==0)
    {
        res=power(a,b/2);
        res=(res*res)%mod;
    }
    else
    {
        res=a%mod;
        res=(res*power(a,b-1)%mod)%mod;
    }
    return res%mod;
}
int Solution::findRank(string A) {
    int ans=0;
    int n=A.length();
    long long fact[n];
    fact[0]=1;
    for(int i=1;i<n;i++)
    {
        fact[i]=(fact[i-1]%mod*i%mod)%mod;
    }
    for(int i=0;i<n;i++)
    {
        int rank=0;
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            rank++;
        }
        map<char,int>m;
        for(int k=i;k<n;k++)
        m[A[k]]++;
        long long d=1;
        for(auto a:m)
        d=(d*fact[a.second])%mod;
        ans=(ans+rank*fact[n-i-1]%mod*power(d,mod-2)%mod)%mod;
    }
    return (ans+1)%mod;
}
