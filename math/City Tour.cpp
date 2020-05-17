int mod = 1e9 + 7;

long long power(long long  a , long long b)
{
    if(b<=0) return 1;
    
    long long temp = power(a,b/2)%mod;
    temp = (temp * temp)%mod;
    
    if(b%2==0)  return temp;
    else  return (temp*a)%mod;
}

int Solution::solve(int A, vector<int> &B) 
{
    int n = B.size();
    sort(B.begin(),B.end());
    
    vector<long long> fact(1000+1,1);
    for(int i = 1; i<=1000 ;i++)
    {
        fact[i] = (i*fact[i-1])%mod;
    }
    
    long long n1 = fact[A-n];//total combinations
    long long n2 = 1;//permutations among each group
    long long d  = 1;//repeated combinations // denominator
  
    for(int i=1 ; i<n ; i++)
    {   
        long long k = B[i]-B[i-1]-1;
        
        d = (d*fact[k])%mod;
        n2 = (n2*power(2,k-1))%mod;
    }
    
    long long startG = fact[B[0]-1]; 
    long long endG = fact[A-B[n-1]];
    
    d=((d*startG)%mod*endG)%mod;

    long long temp= power(d,mod-2) % mod;
    long long result=(((n1*n2)%mod *temp )%mod)%mod;
    
    return result;
};
