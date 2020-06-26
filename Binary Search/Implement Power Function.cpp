int Solution::pow(int x, int n, int d) {
    long long rem=1;
    int check=0;
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    if(x<0)
    {
        x=abs(x);
        if(n%2!=0)
        check=1;
    }
    long long temp=x%d;
    while(n!=0)
    {
        if(n%2!=0)
            rem=(rem*temp%d);
        temp=(temp*temp)%d;
        n/=2;
        if(rem>d)
        rem=rem%d;
        
    }
    if(check==1)
    return d-rem;
    return rem;
    
}