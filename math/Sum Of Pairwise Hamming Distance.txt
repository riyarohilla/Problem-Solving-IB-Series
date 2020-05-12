# define mod 1000000007
int Solution::hammingDistance(const vector<int> &A) {
    /*long long n=A.size();
    int count;
    long long ans=0;
    for(int i=0;i<31;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j] & (1<<i))
            count++;
        }
            ans+=(2*count*(n-count));
            ans=ans%1000000007;
        
    }
    return (int)ans;*/
    
    int ans=0;
    vector<int>binary(32,0);
    for(int i=0;i<A.size();i++)
    {
        int num=A[i];
        int index=0;
        while(num>0)
        {
            binary[index]+=num&1;
            index++;
            num/=2;  // num>>=1;
        }
    }
    
    
    for(int i=0;i<binary.size();i++)
    {
        ans=(ans+2*binary[i]*(A.size()-binary[i]))%mod;  //(2,4)and(4,2) are there so mul by 2
    }
    return ans;
    
}
