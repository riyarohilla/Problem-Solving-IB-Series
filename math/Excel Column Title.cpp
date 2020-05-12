
string reverse(string ans)
{
    for(int i=0;i<ans.length()/2;i++)
    {
        swap(ans[i],ans[ans.length()-i-1]);
    }
    return ans;
}
string Solution::convertToTitle(int A) {
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans="";
    while(A>0)
    {
        A=A-1; // 0 to 25
        int rem=A%26;
        ans+=s[rem];
        A/=26;
    }
    return reverse(ans);
    
}
