int Solution::isPalindrome(int A) {
    /*int rev=0,rem;
    if(A<0)
    A=-A;
    int n=A;
    
    while(A!=0)
    {
        rem=A%10;
        rev=rev*10+rem;
        A=A/10;
    }
    if(n==rev)
    return true;
    else
    return false;*/
    
    string s=to_string(A);
    if(s.length()==1)
    return 1;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-i-1])
        return 0;
    }
    return 1;
    
}
