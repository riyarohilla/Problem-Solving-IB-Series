int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==B)
            return mid;
        else if(A[l]<=A[mid])
        {
            if(A[mid]>B && A[l]<=B)
                h=mid-1;
            else
                l=mid+1;
        }
        else
        {
            if(A[mid]<B && A[h]>=B)
                l=mid+1;
            else
                h=mid-1;
        }
    }
    return -1;
}
