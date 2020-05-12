#define mod 1000003
int Solution::findRank(string A) {
    long long fact[A.length()];
    fact[0]=1;
    for(int i=1;i<A.length();i++)
    fact[i]=((fact[i-1])%mod*i%mod)%mod;
    
    int ans=0;
    for(int i=0;i<A.length();i++)
    {
        int rank=0;
        for(int j=i+1;j<A.length();j++)
        {
            if(A[j]<A[i])
            rank++;
        }
        ans=(ans+(rank*fact[A.length()-i-1])%mod)%mod;
    }
    return (ans+1)%mod;
}
