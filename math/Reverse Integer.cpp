int Solution::reverse(int A) {
    /*int rem;
    long long rev=0;
    
    while(A)
    {
        rem=A%10;
        rev=rev*10+rem;
        if(rev>INT_MAX || rev<INT_MIN)
        return 0;
        A=A/10;
    }
    
        return rev;
        */
        
    int rem,rev=0;
    while(A)
    {
        rem=A%10;
        int temp=rev*10+rem;
        if(temp/10!=rev)
        return 0;
        rev=temp;
        A/=10;
    }
    return rev;
   
}
