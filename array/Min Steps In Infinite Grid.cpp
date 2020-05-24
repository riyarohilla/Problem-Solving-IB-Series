int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x,y,i=0,count=0;
    if(A.size()<=1 || B.size()<=1 || A.size()!=B.size())
    return 0;
    do
    {
        x=A[i]-A[i+1];
        y=B[i]-B[i+1];
        if(x<0)
        x=-x;
        if(y<0)
        y=-y;
        while(x!=0 && y!=0)
        {
            x--;
            y--;
            count++;
        }
        if(x==0)
        count+=y;
        if(y==0)
        count+=x;
        i++;
    }while(i<A.size());
    return count;
}
