int Solution::maxSubArray(const vector<int> &A) {
    int gsum=A[0],csum=0;
    for(int i=0;i<A.size();i++)
    {
        csum+=A[i];
        if(csum>gsum)
        gsum=csum;
        if(csum<0)
        csum=0;
    }
    return gsum;
}
