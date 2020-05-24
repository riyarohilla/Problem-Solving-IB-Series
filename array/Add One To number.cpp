vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>ans;
    vector<int>res;
    int n,carry=1;
    int sum=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        sum=A[i]+carry;
        ans.push_back(sum%10);
        carry=sum/10;
    }
    ans.push_back(carry);
    n=ans.size()-1;
    while(n>=0 && ans[n]==0)
    n--;
    
    while(n>=0)
    {
        res.push_back(ans[n]);
        n--;
    }
    return res;
}
