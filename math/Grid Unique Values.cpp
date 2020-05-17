int Solution::uniquePaths(int m, int n) {
    /*int dp[m][n];
        for(int i=0;i<m;i++)
        dp[i][0]=1;
        for(int i=0;i<n;i++)
        dp[0][i]=1;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];*/
        long path=1;
        int top=0;
        if(m<n)
        top=m;
        else
        top=n;
        int total=m+n-2;
        for(int i=0;i<top-1;i++)
        {
            path=path*(total-i)/(i+1);
        }
        return (int)path;
}
