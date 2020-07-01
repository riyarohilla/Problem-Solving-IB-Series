unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    int i=31;
    while(A!=0)
    {
        ans|=(A&1)<<i;
        i--;
        A>>=1;
    }
    return ans;
}
