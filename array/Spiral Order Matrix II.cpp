vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>>ans(A,vector<int>(A));
    int i=0,j=0,k=1,state=0;
    while(k<=A*A)
    {
        ans[i][j]=k;
        k=k+1;
        if(state==0)
        {
            j++;
            if(j==A || ans[i][j]!=0)
            {
                state=1;
                j--;
                i++;
            }
        }
        else if(state==1)
        {
            i++;
            if(i==A || ans[i][j]!=0)
            {
                state=2;
                i--;
                j--;
            }
        }
        else if(state==2)
        {
            j--;
            if(j==-1 || ans[i][j]!=0)
            {
                state=3;
                j++;
                i--;
            }
        }
        else if(state==3)
        {
            i--;
            if(j==A || ans[i][j]!=0)
            {
                state=0;
                i++;
                j++;
            }
        }
        
    }
    return ans;
}
