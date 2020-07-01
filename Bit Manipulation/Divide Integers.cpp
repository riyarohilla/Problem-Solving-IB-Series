int Solution::divide(int A, int B) {
    int sign=1;
    if(A<0)
        sign=-sign;
    if(B<0)
        sign=-sign;
    unsigned long long a=abs((long long)A);
    unsigned long long b=abs((long long)B);
    unsigned long c=1;
    while(b<a)
    {
        b=b<<1;
        c=c<<1;
    }
    long long res=0;
    while(a>=abs((long long )B))
    {
        while(b<=a)
        {
            a-=b;
            res+=c;
        }
        b=b>>1;
        c=c>>1;
        
    }
    return (sign*res>=INT_MAX || sign*res<INT_MIN)?INT_MAX:sign*res;
}
