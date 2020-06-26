vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
    int l=0,h=n-1,mid,first=-1,last;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]>B)
            h=mid-1;
        else if(A[mid]<B)
            l=mid+1;
        else
        {
            first=mid;
            h=mid-1;
        }
        
    }
    if(first==-1)
    return {-1,-1};
    l=first;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]>B)
        h=mid-1;
        else if(A[mid]<B)
        l=mid+1;
        else
        {
            last=mid;
            l=mid+1;
        }
    }
    return {first,last};
    
}
