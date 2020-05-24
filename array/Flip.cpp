vector<int> Solution::flip(string A) {
    vector<int>ans;
    vector<int>arr(A.size());
    for(int i=0;i<A.size();i++){
        if(A[i]=='0')
            arr[i]=1;
        else
            arr[i]=-1;
    }
    int left=0,l=0,r=0,cumulative=0,gmax=INT_MIN;
    for(int i=0;i<A.size()-1;i++)
    {
        cumulative+=arr[i];
        if(cumulative<0)
        {
            left=i+1;
            cumulative=0;
        }
        else if(gmax<cumulative)
            {
                gmax=cumulative;
        
             l=left;
             r=i;
        }
        
    }
    if(gmax<=0)
        return ans;
   
    ans.push_back(l+1);
    ans.push_back(r+1);
    return ans;
}
