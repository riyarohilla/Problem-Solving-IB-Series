int Solution::searchInsert(vector<int> &A, int B) {
   
    int n=A.size();
    int l=0,h=n,mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(A[mid]>=B)
            h=mid;
        else
            l=mid+1;
    }
    return l;
}
