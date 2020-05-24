vector<int> Solution::maxset(vector<int> &A) {
    int maxm=0,i=0,count=0,fstart=-1,fend=-1,start=0,end=-1;
    long long int sum=0,gsum=0;
    int n=A.size();
    while(i<n)
    {
        if(A[i]>=0)
        {
            sum+=A[i];
            count++;
            end++;
        }
        if(sum>gsum)
        {
            gsum=sum;
            fstart=start;
            fend=end;
        }
        else if(sum==gsum && count>maxm){
            maxm=count;
            fstart=start;
            fend=end;
        }
        if(A[i]<0)
        {
            count=0;
            start=i+1;
            end=i;
            sum=0;
            
        }
        i++;
    }
    vector<int> ans;
    if(fstart!=-1 && fend!=-1)
    {
        
    for(int j=fstart;j<=fend;j++)
    {
        ans.push_back(A[j]);
    }
    }
    return ans;
}
