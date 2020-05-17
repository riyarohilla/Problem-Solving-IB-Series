int Solution::solve(vector<int> &A, int B, int C) {
    
    if(A.size()==1&&B==1&&C>A[0])
    return 1;
    if(A.size()<1)
    return 0;
    string temp=to_string(C);
    int x=temp.size();
    int num=0;
    if(B>x)
    return 0;
    else if(B<x && A[0]!=0){
        return pow(A.size(),B);
    }
    else if(B<x && A[0]==0){
        if(B!=1)
        return ((A.size()-1)*pow(A.size(),(B-1)));
        else
        return  ((A.size()-1)*pow(A.size(),(B-1))+1);
    }
    else{
        int z=0;
        while(z<B){
            bool numpresent=true;
            int tempnum=temp[z]-'0';
            int j;
            auto it=lower_bound(A.begin(),A.end(),tempnum);
            if(it==A.end()||*it!=tempnum)
                numpresent=false;
            j=it - A.begin();
            if(z==0&&A[0]==0&&B>1){
                num+=(j-1)*pow(A.size(),B-z-1);
                }
            else
                num+=j*pow(A.size(),B-z-1);
            z++;
            if(numpresent==false)
                return num;
        }
    }
    return num;
    
}
