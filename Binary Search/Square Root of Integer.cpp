int Solution::sqrt(int A) {
    
    if(A==0 || A==1)
    return A;
    int s=0,e=A,m,ans;
    while(s<=e)
    {
        m=s+(e-s)/2;
        if(m<=A/m)
        {
            s=m+1;
            ans=m;
        }
        else
        e=m-1;
    }
    return ans;
}
