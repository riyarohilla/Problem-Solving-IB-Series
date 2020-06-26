int findmedian(const vector<int> &A, const vector<int> &B,int k)
{
    int p=max(0,k-(int)B.size());
    int q=min(k,(int)A.size());
    while(p<=q)
    {
        int i=(p+q)/2;
        int j=k-i;
        if(i>0 && j<B.size() && A[i-1]>B[j])
            q=i-1;
        else if(j>0 && i<A.size() && B[j-1]>A[i])
            p=i+1;
        else
        {
            if(i==0)
                return B[k-1];
            if(j==0)
                return A[k-1];
            return max(A[i-1],B[j-1]);
        }
    }
    return 0;
}

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
  
    int m=A.size();
    int n=B.size();
    if(m>n)
        findMedianSortedArrays(B,A);
    if((m+n)%2!=0)
        return findmedian(A,B,(m+n+1)/2);
    double first=findmedian(A,B,(m+n)/2);
    double second=findmedian(A,B,(m+n)/2+1);
    return (first+second)/2;
}
