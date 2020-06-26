int Solution::findMedian(vector<vector<int> > &A) {
    int min=INT_MAX,max=INT_MIN;
    int n=A.size(),m=A[0].size();
    for(int i=0;i<n;i++)
    {
        if(A[i][0]<min)
        min=A[i][0];
        if(A[i][m-1]>max)
        max=A[i][m-1];
    }
    int element=(n*m+1)/2;
    while(min<max)
    {
        int mid=min+(max-min)/2;
        int count=0;
        for(int i=0;i<n;i++)
        count+=upper_bound(&A[i][0],&A[i][m],mid)-&A[i][0];
        if(count<element)
        min=mid+1;
        else
        max=mid;
    }
    return min;
}
